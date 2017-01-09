/**********************************************************************
 *  Copyright (c) 2008-2016, Alliance for Sustainable Energy.
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

#include "../ForwardTranslator.hpp"

#include "../../model/Model.hpp"
#include "../../model/GeneratorFuelCellPowerModule.hpp"
#include "../../model/GeneratorFuelCellPowerModule_Impl.hpp"

#include "../../model/Curve.hpp"
#include "../../model/Curve_Impl.hpp"
#include "../../model/CurveQuadratic.hpp"
#include "../../model/CurveQuadratic_Impl.hpp"
#include "../../model/ThermalZone.hpp"
#include "../../model/ThermalZone_Impl.hpp"
#include "../../model/Connection.hpp"
#include "../../model/Connection_Impl.hpp"
#include "../../model/Node.hpp"
#include "../../model/Node_Impl.hpp"

#include "../../utilities/idf/IdfExtensibleGroup.hpp"

#include <utilities/idd/Generator_FuelCell_PowerModule_FieldEnums.hxx>
#include "../../utilities/idd/IddEnums.hpp"
#include <utilities/idd/IddEnums.hxx>
#include <utilities/idd/IddFactory.hxx>

using namespace openstudio::model;

using namespace std;

namespace openstudio {

namespace energyplus {

boost::optional<IdfObject> ForwardTranslator::translateGeneratorFuelCellPowerModule(GeneratorFuelCellPowerModule & modelObject)
{
  boost::optional<std::string> s;
  boost::optional<double> d;
  //boost::optional<Node> node;
  boost::optional<Curve> curve;
  boost::optional<ThermalZone> tz;
  
  IdfObject pcm = createAndRegisterIdfObject(openstudio::IddObjectType::Generator_FuelCell_PowerModule, modelObject);
  //Name
  s = modelObject.name();
  if (s) {
    pcm.setName(*s);
  }

  //EfficiencyCurveMode
  s = modelObject.efficiencyCurveMode();
  if (s) {
    pcm.setString(Generator_FuelCell_PowerModuleFields::EfficiencyCurveMode, s.get());
  }

  //EfficiencyCurveName
  curve = modelObject.efficiencyCurve();
  if (curve) {
    pcm.setString(Generator_FuelCell_PowerModuleFields::EfficiencyCurveName, curve.get().nameString());
  } else {
    pcm.setString(Generator_FuelCell_PowerModuleFields::EfficiencyCurveName, "");
  }

  //NominalEfficiency
  d = modelObject.nominalEfficiency();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::NominalEfficiency, d.get());
  }

  //NominalElectricalPower
  d = modelObject.nominalElectricalPower();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::NominalElectricalPower, d.get());
  }

  //NumberofStopsatStartofSimulation
  d = modelObject.numberofStopsatStartofSimulation();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::NumberofStopsatStartofSimulation, d.get());
  }

  //CyclingPerformanceDegradationCoefficient
  d = modelObject.cyclingPerformanceDegradationCoefficient();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::CyclingPerformanceDegradationCoefficient, d.get());
  }

  //NumberofRunHoursatBeginningofSimulation
  d = modelObject.numberofRunHoursatBeginningofSimulation();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::NumberofRunHoursatBeginningofSimulation, d.get());
  }

  //AccumulatedRunTimeDegradationCoefficient
  d = modelObject.accumulatedRunTimeDegradationCoefficient();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::AccumulatedRunTimeDegradationCoefficient, d.get());
  }

  //RunTimeDegradationInitiationTimeThreshold
  d = modelObject.runTimeDegradationInitiationTimeThreshold();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::RunTimeDegradationInitiationTimeThreshold, d.get());
  }

  //PowerUpTransientLimit
  d = modelObject.powerUpTransientLimit();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::PowerUpTransientLimit, d.get());
  }

  //PowerDownTransientLimit
  d = modelObject.powerDownTransientLimit();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::PowerDownTransientLimit, d.get());
  }

  //StartUpTime
  d = modelObject.startUpTime();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::StartUpTime, d.get());
  }

  //StartUpFuel
  d = modelObject.startUpFuel();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::StartUpFuel, d.get());
  }

  //StartUpElectricityConsumption
  d = modelObject.startUpElectricityConsumption();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::StartUpElectricityConsumption, d.get());
  }

  //StartUpElectricityProduced
  d = modelObject.startUpElectricityProduced();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::StartUpElectricityProduced, d.get());
  }

  //ShutDownTime
  d = modelObject.shutDownTime();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::ShutDownTime, d.get());
  }

  //ShutDownFuel
  d = modelObject.shutDownFuel();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::ShutDownFuel, d.get());
  }

  //ShutDownElectricityConsumption
  d = modelObject.shutDownElectricityConsumption();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::ShutDownElectricityConsumption, d.get());
  }

  //AncillaryElectricityConstantTerm
  d = modelObject.ancillaryElectricityConstantTerm();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::AncillaryElectricityConstantTerm, d.get());
  }

  //AncillaryElectricityLinearTerm
  d = modelObject.ancillaryElectricityLinearTerm();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::AncillaryElectricityLinearTerm, d.get());
  }

  //SkinLossCalculationMode
  s = modelObject.skinLossCalculationMode();
  if (s) {
    pcm.setString(Generator_FuelCell_PowerModuleFields::SkinLossCalculationMode, s.get());
  }

  //ZoneName
  tz = modelObject.zone();
  if (tz) {
    pcm.setString(Generator_FuelCell_PowerModuleFields::ZoneName, tz.get().nameString());
  }
  
  //skinLossRadiativeFraction
  d = modelObject.skinLossRadiativeFraction();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::SkinLossRadiativeFraction, d.get());
  }

  //ConstantSkinLossRate
  d = modelObject.constantSkinLossRate();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::ConstantSkinLossRate, d.get());
  }

  //SkinLossUFactorTimesAreaTerm
  d = modelObject.skinLossUFactorTimesAreaTerm();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::SkinLossUFactorTimesAreaTerm, d.get());
  }

  //SkinLossQuadraticCurveName
  curve = modelObject.skinLossQuadraticCurve();
  if (curve) {
    pcm.setString(Generator_FuelCell_PowerModuleFields::SkinLossQuadraticCurveName, curve.get().nameString());
  }

  //DilutionAirFlowRate
  d = modelObject.dilutionAirFlowRate();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::DilutionAirFlowRate, d.get());
  }

  //StackHeatlosstoDilutionAir
  d = modelObject.stackHeatlosstoDilutionAir();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::StackHeatlosstoDilutionAir, d.get());
  }
  /*
  //DilutionInletAirNodeName
  node = modelObject.dilutionInletAirNode();
  if (node) {
    pcm.setString(Generator_FuelCell_PowerModuleFields::DilutionInletAirNodeName, node.get().nameString());
  }

  //DilutionOutletAirNodeName
  node = modelObject.dilutionOutletAirNode();
  if (node) {
    pcm.setString(Generator_FuelCell_PowerModuleFields::DilutionOutletAirNodeName, node.get().nameString());
  }
  */
  //MinimumOperatingPoint
  d = modelObject.minimumOperatingPoint();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::MinimumOperatingPoint, d.get());
  }

  //MaximumOperatingPoint
  d = modelObject.maximumOperatingPoint();
  if (d) {
    pcm.setDouble(Generator_FuelCell_PowerModuleFields::MaximumOperatingPoint, d.get());
  }

  return pcm;
  
}

} // energyplus

} // openstudio

