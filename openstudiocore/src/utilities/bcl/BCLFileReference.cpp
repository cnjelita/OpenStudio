/**********************************************************************
*  Copyright (c) 2008-2014, Alliance for Sustainable Energy.  
*  All rights reserved.
*  
*  This library is free software; you can redistribute it and/or
*  modify it under the terms of the GNU Lesser General Public
*  License as published by the Free Software Foundation; either
*  version 2.1 of the License, or (at your option) any later version.
*  
*  This library is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*  Lesser General Public License for more details.
*  
*  You should have received a copy of the GNU Lesser General Public
*  License along with this library; if not, write to the Free Software
*  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**********************************************************************/

#include "BCLFileReference.hpp"
#include "../core/Checksum.hpp"
#include "../core/String.hpp"
#include "../core/System.hpp"

#include <QFile>
#include <QDomDocument>
#include <QDomElement>

namespace openstudio{

  BCLFileReference::BCLFileReference(const openstudio::path& path, const bool setMembers)
    : m_path(boost::filesystem::system_complete(path))
  {
    // DLM: why would you not want to set the members?
    if (setMembers) {
      m_checksum = openstudio::checksum(m_path);

      std::string fileType = this->fileType();
      if (fileType == "osm"){
        m_softwareProgram = "OpenStudio";
        //m_softwareProgramVersion = "";
      }else if (fileType == "osc"){
        m_softwareProgram = "OpenStudio";
        //m_softwareProgramVersion = "";
      }else if (fileType == "idf"){
        m_softwareProgram = "EnergyPlus";
        //m_softwareProgramVersion = "";
      }else if (fileType == "rb"){
        m_softwareProgram = "OpenStudio";
        //m_softwareProgramVersion = "";
      }
    }
  }

  BCLFileReference::~BCLFileReference()
  {
  }

  openstudio::path BCLFileReference::path() const
  {
    return m_path;
  }

  std::string BCLFileReference::checksum() const
  {
    return m_checksum;
  }

  std::string BCLFileReference::softwareProgram() const
  {
    return m_softwareProgram;
  }

  std::string BCLFileReference::softwareProgramVersion() const
  {
    return m_softwareProgramVersion;
  }

  std::string BCLFileReference::fileName() const
  {
    return toString(m_path.filename());
  }

  std::string BCLFileReference::fileType() const
  {
    return toString(toQString(m_path.extension()).replace(".", ""));
  }

  std::string BCLFileReference::usageType() const
  {
    return m_usageType;
  }

  void BCLFileReference::setChecksum(const std::string& checksum)
  {
    m_checksum = checksum;
  }
  
  void BCLFileReference::setSoftwareProgram(const std::string& softwareProgram)
  {
    m_softwareProgram = softwareProgram;
  }

  void BCLFileReference::setSoftwareProgramVersion(const std::string& softwareProgramVersion)
  {
    m_softwareProgramVersion = softwareProgramVersion;
  }

  void BCLFileReference::setUsageType(const std::string& usageType)
  {
    m_usageType = usageType;
  }

  void BCLFileReference::writeValues(QDomDocument& doc, QDomElement& element) const
  {
    if (m_usageType == "script" && !m_softwareProgram.empty() && !m_softwareProgramVersion.empty()){
      QDomElement versionElement = doc.createElement("version");
      element.appendChild(versionElement);

      QDomElement softwareProgramElement = doc.createElement("software_program");
      versionElement.appendChild(softwareProgramElement);
      softwareProgramElement.appendChild(doc.createTextNode(toQString(m_softwareProgram)));

      QDomElement softwareProgramVersionElement = doc.createElement("identifier");
      versionElement.appendChild(softwareProgramVersionElement);
      softwareProgramVersionElement.appendChild(doc.createTextNode(toQString(m_softwareProgramVersion)));
    }

    QDomElement fileNameElement = doc.createElement("filename");
    element.appendChild(fileNameElement);
    fileNameElement.appendChild(doc.createTextNode(toQString(fileName()))); // careful to write out function result instead of member

    QDomElement fileTypeElement = doc.createElement("filetype");
    element.appendChild(fileTypeElement);
    fileTypeElement.appendChild(doc.createTextNode(toQString(fileType()))); // careful to write out function result instead of member

    QDomElement usageTypeElement = doc.createElement("usage_type");
    element.appendChild(usageTypeElement);
    usageTypeElement.appendChild(doc.createTextNode(toQString(m_usageType)));

    QDomElement checksumElement = doc.createElement("checksum");
    element.appendChild(checksumElement);
    checksumElement.appendChild(doc.createTextNode(toQString(m_checksum)));
  }

  bool BCLFileReference::checkForUpdate()
  {
    std::string newChecksum = openstudio::checksum(this->path());
    if (m_checksum != newChecksum){
      m_checksum = newChecksum;
      return true;
    }
    return false;
  }

  std::ostream& operator<<(std::ostream& os, const BCLFileReference& file)
  {
    QDomDocument doc;
    QDomElement element = doc.createElement(QString("File"));
    doc.appendChild(element);
    file.writeValues(doc, element);
    
    QString str;
    QTextStream qts(&str);
    doc.save(qts, 2);
    os << str.toStdString();
    return os;
  }

} // openstudio
