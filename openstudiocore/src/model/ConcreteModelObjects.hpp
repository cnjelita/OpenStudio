/**********************************************************************
 *  Copyright (c) 2008-2013, Alliance for Sustainable Energy.
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

#ifndef MODEL_CONCRETEMODELOBJECTS_HPP
#define MODEL_CONCRETEMODELOBJECTS_HPP

 #include <model/EvaporativeFluidCoolerSingleSpeed.hpp>
 #include <model/EvaporativeFluidCoolerSingleSpeed_Impl.hpp>

#include <model/AirGap.hpp>
#include <model/AirLoopHVAC.hpp>
#include <model/AirLoopHVACOutdoorAirSystem.hpp>
#include <model/AirLoopHVACUnitaryHeatPumpAirToAir.hpp>
#include <model/AirLoopHVACZoneMixer.hpp>
#include <model/AirLoopHVACZoneSplitter.hpp>
#include <model/AirTerminalSingleDuctConstantVolumeCooledBeam.hpp>
#include <model/AirTerminalSingleDuctParallelPIUReheat.hpp>
#include <model/AirTerminalSingleDuctUncontrolled.hpp>
#include <model/AirTerminalSingleDuctVAVReheat.hpp>
#include <model/AirWallMaterial.hpp>
#include <model/AvailabilityManagerAssignmentList.hpp>
#include <model/AvailabilityManagerNightCycle.hpp>
#include <model/AvailabilityManagerScheduled.hpp>
#include <model/Blind.hpp>
#include <model/BoilerHotWater.hpp>
#include <model/BoilerSteam.hpp>
#include <model/Building.hpp>
#include <model/BuildingStandardsInformation.hpp>
#include <model/BuildingStory.hpp>
#include <model/CFactorUndergroundWallConstruction.hpp>
#include <model/ClimateZones.hpp>
#include <model/ChillerElectricEIR.hpp>
#include <model/CoilCoolingCooledBeam.hpp>
#include <model/CoilCoolingDXSingleSpeed.hpp>
#include <model/CoilCoolingDXTwoSpeed.hpp>
#include <model/CoilCoolingLowTempRadiantConstFlow.hpp>
#include <model/CoilCoolingLowTempRadiantVarFlow.hpp>
#include <model/CoilCoolingWater.hpp>
#include <model/CoilCoolingWaterToAirHeatPumpEquationFit.hpp>
#include <model/CoilHeatingDXSingleSpeed.hpp>
#include <model/CoilHeatingElectric.hpp>
#include <model/CoilHeatingGas.hpp>
#include <model/CoilHeatingLowTempRadiantConstFlow.hpp>
#include <model/CoilHeatingLowTempRadiantVarFlow.hpp>
#include <model/CoilHeatingWater.hpp>
#include <model/CoilHeatingWaterToAirHeatPumpEquationFit.hpp>
#include <model/CoilHeatingWaterBaseboard.hpp>
#include <model/ComponentCostAdjustments.hpp>
#include <model/ComponentData.hpp>
#include <model/Connection.hpp>
#include <model/ConnectorMixer.hpp>
#include <model/ConnectorSplitter.hpp>
#include <model/Construction.hpp>
#include <model/ConstructionBaseStandardsInformation.hpp>
#include <model/ConstructionWithInternalSource.hpp>
#include <model/ControllerMechanicalVentilation.hpp>
#include <model/ControllerOutdoorAir.hpp>
#include <model/ControllerWaterCoil.hpp>
#include <model/ConvergenceLimits.hpp>
#include <model/CoolingTowerSingleSpeed.hpp>
#include <model/CurrencyType.hpp>
#include <model/CurveBicubic.hpp>
#include <model/CurveBiquadratic.hpp>
#include <model/CurveCubic.hpp>
#include <model/CurveDoubleExponentialDecay.hpp>
#include <model/CurveExponent.hpp>
#include <model/CurveExponentialDecay.hpp>
#include <model/CurveExponentialSkewNormal.hpp>
#include <model/CurveFanPressureRise.hpp>
#include <model/CurveFunctionalPressureDrop.hpp>
#include <model/CurveLinear.hpp>
#include <model/CurveQuadratic.hpp>
#include <model/CurveQuadraticLinear.hpp>
#include <model/CurveQuartic.hpp>
#include <model/CurveRectangularHyperbola1.hpp>
#include <model/CurveRectangularHyperbola2.hpp>
#include <model/CurveSigmoid.hpp>
#include <model/CurveTriquadratic.hpp>
#include <model/DaylightingControl.hpp>
#include <model/DaylightingDeviceShelf.hpp>
#include <model/DefaultConstructionSet.hpp>
#include <model/DefaultScheduleSet.hpp>
#include <model/DefaultSubSurfaceConstructions.hpp>
#include <model/DefaultSurfaceConstructions.hpp>
#include <model/DesignDay.hpp>
#include <model/DesignSpecificationOutdoorAir.hpp>
#include <model/DesignSpecificationZoneAirDistribution.hpp>
#include <model/DistrictCooling.hpp>
#include <model/DistrictHeating.hpp>
#include <model/ElectricEquipment.hpp>
#include <model/ElectricEquipmentDefinition.hpp>
#include <model/EvaporativeCoolerDirectResearchSpecial.hpp>
#include <model/ExteriorLights.hpp>
#include <model/ExteriorLightsDefinition.hpp>
#include <model/Facility.hpp>
#include <model/FanConstantVolume.hpp>
#include <model/FanOnOff.hpp>
#include <model/FanVariableVolume.hpp>
#include <model/FFactorGroundFloorConstruction.hpp>
#include <model/Gas.hpp>
#include <model/GasEquipment.hpp>
#include <model/GasEquipmentDefinition.hpp>
#include <model/GasMixture.hpp>
#include <model/GenericModelObject.hpp>
#include <model/GlareSensor.hpp>
#include <model/GroundHeatExchangerVertical.hpp>
#include <model/HeatBalanceAlgorithm.hpp>
#include <model/HeatExchangerAirToAirSensibleAndLatent.hpp>
#include <model/HotWaterEquipment.hpp>
#include <model/HotWaterEquipmentDefinition.hpp>
#include <model/IlluminanceMap.hpp>
#include <model/InfraredTransparentMaterial.hpp>
#include <model/InsideSurfaceConvectionAlgorithm.hpp>
#include <model/InteriorPartitionSurface.hpp>
#include <model/InteriorPartitionSurfaceGroup.hpp>
#include <model/InternalMass.hpp>
#include <model/InternalMassDefinition.hpp>
#include <model/LifeCycleCost.hpp>
#include <model/LifeCycleCostParameters.hpp>
#include <model/LifeCycleCostUsePriceEscalation.hpp>
#include <model/LightingDesignDay.hpp>
#include <model/LightingSimulationControl.hpp>
#include <model/LightingSimulationZone.hpp>
#include <model/Lights.hpp>
#include <model/LightsDefinition.hpp>
#include <model/Luminaire.hpp>
#include <model/LuminaireDefinition.hpp>
#include <model/MasslessOpaqueMaterial.hpp>
#include <model/Meter.hpp>
#include <model/Node.hpp>
#include <model/PortList.hpp>
#include <model/OtherEquipment.hpp>
#include <model/OtherEquipmentDefinition.hpp>
#include <model/OutputControlReportingTolerances.hpp>
#include <model/OutputVariable.hpp>
#include <model/OutsideSurfaceConvectionAlgorithm.hpp>
#include <model/People.hpp>
#include <model/PeopleDefinition.hpp>
#include <model/PipeAdiabatic.hpp>
#include <model/PlantLoop.hpp>
#include <model/ProgramControl.hpp>
#include <model/PumpConstantSpeed.hpp>
#include <model/PumpVariableSpeed.hpp>
#include <model/RadianceParameters.hpp>
#include <model/RefractionExtinctionGlazing.hpp>
#include <model/RenderingColor.hpp>
#include <model/RoofVegetation.hpp>
#include <model/RunPeriod.hpp>
#include <model/RunPeriodControlDaylightSavingTime.hpp>
#include <model/RunPeriodControlSpecialDays.hpp>
#include <model/ScheduleCompact.hpp>
#include <model/ScheduleConstant.hpp>
#include <model/ScheduleDay.hpp>
#include <model/ScheduleFixedInterval.hpp>
#include <model/ScheduleTypeLimits.hpp>
#include <model/ScheduleRule.hpp>
#include <model/ScheduleRuleset.hpp>
#include <model/ScheduleWeek.hpp>
#include <model/ScheduleYear.hpp>
#include <model/ScheduleVariableInterval.hpp>
#include <model/Screen.hpp>
#include <model/SetpointManagerFollowOutdoorAirTemperature.hpp>
#include <model/SetpointManagerMixedAir.hpp>
#include <model/SetpointManagerOutdoorAirReset.hpp>
#include <model/SetpointManagerScheduled.hpp>
#include <model/SetpointManagerSingleZoneReheat.hpp>
#include <model/SetpointManagerWarmest.hpp>
#include <model/Shade.hpp>
#include <model/ShadingControl.hpp>
#include <model/ShadingSurface.hpp>
#include <model/ShadingSurfaceGroup.hpp>
#include <model/ShadowCalculation.hpp>
#include <model/SimpleGlazing.hpp>
#include <model/SimulationControl.hpp>
#include <model/Site.hpp>
#include <model/SiteGroundReflectance.hpp>
#include <model/SiteGroundTemperatureBuildingSurface.hpp>
#include <model/SiteWaterMainsTemperature.hpp>
#include <model/SizingParameters.hpp>
#include <model/SizingPlant.hpp>
#include <model/SizingSystem.hpp>
#include <model/SizingZone.hpp>
#include <model/SkyTemperature.hpp>
#include <model/Space.hpp>
#include <model/SpaceInfiltrationDesignFlowRate.hpp>
#include <model/SpaceInfiltrationEffectiveLeakageArea.hpp>
#include <model/SpaceType.hpp>
#include <model/StandardGlazing.hpp>
#include <model/StandardOpaqueMaterial.hpp>
#include <model/SteamEquipment.hpp>
#include <model/SteamEquipmentDefinition.hpp>
#include <model/SubSurface.hpp>
#include <model/Surface.hpp>
#include <model/ThermalZone.hpp>
#include <model/ThermostatSetpointDualSetpoint.hpp>
#include <model/ThermochromicGlazing.hpp>
#include <model/TimeDependentValuation.hpp>
#include <model/Timestep.hpp>
#include <model/UtilityCost_Charge_Block.hpp>
#include <model/UtilityCost_Charge_Simple.hpp>
#include <model/UtilityCost_Computation.hpp>
#include <model/UtilityCost_Qualify.hpp>
#include <model/UtilityCost_Ratchet.hpp>
#include <model/UtilityCost_Tariff.hpp>
#include <model/UtilityCost_Variable.hpp>
#include <model/Version.hpp>
#include <model/WaterHeaterMixed.hpp>
#include <model/WaterUseConnections.hpp>
#include <model/WaterUseEquipment.hpp>
#include <model/WaterUseEquipmentDefinition.hpp>
#include <model/WeatherFile.hpp>
#include <model/WeatherFileConditionType.hpp>
#include <model/WeatherFileDays.hpp>
#include <model/WindowDataFile.hpp>
#include <model/YearDescription.hpp>
#include <model/ZoneAirContaminantBalance.hpp>
#include <model/ZoneAirHeatBalanceAlgorithm.hpp>
#include <model/ZoneCapacitanceMultiplierResearchSpecial.hpp>
#include <model/ZoneHVACBaseboardConvectiveElectric.hpp>
#include <model/ZoneHVACBaseboardConvectiveWater.hpp>
#include <model/ZoneHVACEquipmentList.hpp>
#include <model/ZoneHVACIdealLoadsAirSystem.hpp>
#include <model/ZoneHVACFourPipeFanCoil.hpp>
#include <model/ZoneHVACLowTemperatureRadiantElectric.hpp>
#include <model/ZoneHVACLowTempRadiantConstFlow.hpp>
#include <model/ZoneHVACLowTempRadiantVarFlow.hpp>
#include <model/ZoneHVACPackagedTerminalHeatPump.hpp>
#include <model/ZoneHVACPackagedTerminalAirConditioner.hpp>
#include <model/ZoneHVACWaterToAirHeatPump.hpp>
#include <model/ZoneHVACUnitHeater.hpp>

// include all concrete ModelObject Impls too
#include <model/AirGap_Impl.hpp>
#include <model/AirLoopHVAC_Impl.hpp>
#include <model/AirLoopHVACUnitaryHeatPumpAirToAir_Impl.hpp>
#include <model/AirLoopHVACOutdoorAirSystem_Impl.hpp>
#include <model/AirLoopHVACZoneMixer_Impl.hpp>
#include <model/AirLoopHVACZoneSplitter_Impl.hpp>
#include <model/AirTerminalSingleDuctConstantVolumeCooledBeam_Impl.hpp>
#include <model/AirTerminalSingleDuctParallelPIUReheat_Impl.hpp>
#include <model/AirTerminalSingleDuctUncontrolled_Impl.hpp>
#include <model/AirTerminalSingleDuctVAVReheat_Impl.hpp>
#include <model/AirWallMaterial_Impl.hpp>
#include <model/AvailabilityManagerAssignmentList_Impl.hpp>
#include <model/AvailabilityManagerNightCycle_Impl.hpp>
#include <model/AvailabilityManagerScheduled_Impl.hpp>
#include <model/Blind_Impl.hpp>
#include <model/BoilerHotWater_Impl.hpp>
#include <model/BoilerSteam_Impl.hpp>
#include <model/Building_Impl.hpp>
#include <model/BuildingStandardsInformation_Impl.hpp>
#include <model/BuildingStory_Impl.hpp>
#include <model/CFactorUndergroundWallConstruction_Impl.hpp>
#include <model/ChillerElectricEIR_Impl.hpp>
#include <model/ClimateZones_Impl.hpp>
#include <model/CoilCoolingCooledBeam_Impl.hpp>
#include <model/CoilCoolingDXSingleSpeed_Impl.hpp>
#include <model/CoilCoolingDXTwoSpeed_Impl.hpp>
#include <model/CoilCoolingLowTempRadiantConstFlow_Impl.hpp>
#include <model/CoilCoolingLowTempRadiantVarFlow_Impl.hpp>
#include <model/CoilCoolingWater_Impl.hpp>
#include <model/CoilCoolingWaterToAirHeatPumpEquationFit_Impl.hpp>
#include <model/CoilHeatingDXSingleSpeed_Impl.hpp>
#include <model/CoilHeatingElectric_Impl.hpp>
#include <model/CoilHeatingGas_Impl.hpp>
#include <model/CoilHeatingLowTempRadiantConstFlow_Impl.hpp>
#include <model/CoilHeatingLowTempRadiantVarFlow_Impl.hpp>
#include <model/CoilHeatingWater_Impl.hpp>
#include <model/CoilHeatingWaterToAirHeatPumpEquationFit_Impl.hpp>
#include <model/CoilHeatingWaterBaseboard_Impl.hpp>
#include <model/ComponentCostAdjustments_Impl.hpp>
#include <model/ComponentData_Impl.hpp>
#include <model/Connection_Impl.hpp>
#include <model/ConnectorMixer_Impl.hpp>
#include <model/ConnectorSplitter_Impl.hpp>
#include <model/Construction_Impl.hpp>
#include <model/ConstructionBaseStandardsInformation_Impl.hpp>
#include <model/ConstructionWithInternalSource_Impl.hpp>
#include <model/ControllerMechanicalVentilation_Impl.hpp>
#include <model/ControllerOutdoorAir_Impl.hpp>
#include <model/ControllerWaterCoil_Impl.hpp>
#include <model/ConvergenceLimits_Impl.hpp>
#include <model/CoolingTowerSingleSpeed_Impl.hpp>
#include <model/CurrencyType_Impl.hpp>
#include <model/CurveBicubic_Impl.hpp>
#include <model/CurveBiquadratic_Impl.hpp>
#include <model/CurveCubic_Impl.hpp>
#include <model/CurveDoubleExponentialDecay_Impl.hpp>
#include <model/CurveExponent_Impl.hpp>
#include <model/CurveExponentialDecay_Impl.hpp>
#include <model/CurveExponentialSkewNormal_Impl.hpp>
#include <model/CurveFanPressureRise_Impl.hpp>
#include <model/CurveFunctionalPressureDrop_Impl.hpp>
#include <model/CurveLinear_Impl.hpp>
#include <model/CurveQuadratic_Impl.hpp>
#include <model/CurveQuadraticLinear_Impl.hpp>
#include <model/CurveQuartic_Impl.hpp>
#include <model/CurveRectangularHyperbola1_Impl.hpp>
#include <model/CurveRectangularHyperbola2_Impl.hpp>
#include <model/CurveSigmoid_Impl.hpp>
#include <model/CurveTriquadratic_Impl.hpp>
#include <model/DaylightingControl_Impl.hpp>
#include <model/DaylightingDeviceShelf_Impl.hpp>
#include <model/DefaultConstructionSet_Impl.hpp>
#include <model/DefaultScheduleSet_Impl.hpp>
#include <model/DefaultSubSurfaceConstructions_Impl.hpp>
#include <model/DefaultSurfaceConstructions_Impl.hpp>
#include <model/DesignDay_Impl.hpp>
#include <model/DesignSpecificationOutdoorAir_Impl.hpp>
#include <model/DesignSpecificationZoneAirDistribution_Impl.hpp>
#include <model/DistrictCooling_Impl.hpp>
#include <model/DistrictHeating_Impl.hpp>
#include <model/ElectricEquipment_Impl.hpp>
#include <model/ElectricEquipmentDefinition_Impl.hpp>
#include <model/EvaporativeCoolerDirectResearchSpecial_Impl.hpp>
#include <model/ExteriorLights_Impl.hpp>
#include <model/ExteriorLightsDefinition_Impl.hpp>
#include <model/Facility_Impl.hpp>
#include <model/FanConstantVolume_Impl.hpp>
#include <model/FanOnOff_Impl.hpp>
#include <model/FanVariableVolume_Impl.hpp>
#include <model/FFactorGroundFloorConstruction_Impl.hpp>
#include <model/Gas_Impl.hpp>
#include <model/GasEquipment_Impl.hpp>
#include <model/GasEquipmentDefinition_Impl.hpp>
#include <model/GasMixture_Impl.hpp>
#include <model/GenericModelObject_Impl.hpp>
#include <model/GlareSensor_Impl.hpp>
#include <model/GroundHeatExchangerVertical_Impl.hpp>
#include <model/HeatBalanceAlgorithm_Impl.hpp>
#include <model/HeatExchangerAirToAirSensibleAndLatent_Impl.hpp>
#include <model/HotWaterEquipment_Impl.hpp>
#include <model/HotWaterEquipmentDefinition_Impl.hpp>
#include <model/IlluminanceMap_Impl.hpp>
#include <model/InfraredTransparentMaterial_Impl.hpp>
#include <model/InsideSurfaceConvectionAlgorithm_Impl.hpp>
#include <model/InteriorPartitionSurface_Impl.hpp>
#include <model/InteriorPartitionSurfaceGroup_Impl.hpp>
#include <model/InternalMass_Impl.hpp>
#include <model/InternalMassDefinition_Impl.hpp>
#include <model/LifeCycleCost_Impl.hpp>
#include <model/LifeCycleCostParameters_Impl.hpp>
#include <model/LifeCycleCostUsePriceEscalation_Impl.hpp>
#include <model/LightingDesignDay_Impl.hpp>
#include <model/LightingSimulationControl_Impl.hpp>
#include <model/LightingSimulationZone_Impl.hpp>
#include <model/Lights_Impl.hpp>
#include <model/LightsDefinition_Impl.hpp>
#include <model/Luminaire_Impl.hpp>
#include <model/LuminaireDefinition_Impl.hpp>
#include <model/MasslessOpaqueMaterial_Impl.hpp>
#include <model/Meter_Impl.hpp>
#include <model/Node_Impl.hpp>
#include <model/PortList_Impl.hpp>
#include <model/OtherEquipment_Impl.hpp>
#include <model/OtherEquipmentDefinition_Impl.hpp>
#include <model/OutputControlReportingTolerances_Impl.hpp>
#include <model/OutputVariable_Impl.hpp>
#include <model/OutsideSurfaceConvectionAlgorithm_Impl.hpp>
#include <model/People_Impl.hpp>
#include <model/PeopleDefinition_Impl.hpp>
#include <model/PipeAdiabatic_Impl.hpp>
#include <model/PlantLoop_Impl.hpp>
#include <model/ProgramControl_Impl.hpp>
#include <model/PumpConstantSpeed_Impl.hpp>
#include <model/PumpVariableSpeed_Impl.hpp>
#include <model/RadianceParameters_Impl.hpp>
#include <model/RefractionExtinctionGlazing_Impl.hpp>
#include <model/RenderingColor_Impl.hpp>
#include <model/RoofVegetation_Impl.hpp>
#include <model/RunPeriod_Impl.hpp>
#include <model/RunPeriodControlDaylightSavingTime_Impl.hpp>
#include <model/RunPeriodControlSpecialDays_Impl.hpp>
#include <model/ScheduleCompact_Impl.hpp>
#include <model/ScheduleConstant_Impl.hpp>
#include <model/ScheduleDay_Impl.hpp>
#include <model/ScheduleInterval_Impl.hpp>
#include <model/ScheduleFixedInterval_Impl.hpp>
#include <model/ScheduleTypeLimits_Impl.hpp>
#include <model/ScheduleWeek_Impl.hpp>
#include <model/ScheduleRule_Impl.hpp>
#include <model/ScheduleRuleset_Impl.hpp>
#include <model/ScheduleYear_Impl.hpp>
#include <model/ScheduleVariableInterval_Impl.hpp>
#include <model/Screen_Impl.hpp>
#include <model/SetpointManagerFollowOutdoorAirTemperature_Impl.hpp>
#include <model/SetpointManagerMixedAir_Impl.hpp>
#include <model/SetpointManagerOutdoorAirReset_Impl.hpp>
#include <model/SetpointManagerScheduled_Impl.hpp>
#include <model/SetpointManagerSingleZoneReheat_Impl.hpp>
#include <model/SetpointManagerWarmest_Impl.hpp>
#include <model/Shade_Impl.hpp>
#include <model/ShadingControl_Impl.hpp>
#include <model/ShadingSurface_Impl.hpp>
#include <model/ShadingSurfaceGroup_Impl.hpp>
#include <model/ShadowCalculation_Impl.hpp>
#include <model/SimpleGlazing_Impl.hpp>
#include <model/SimulationControl_Impl.hpp>
#include <model/Site_Impl.hpp>
#include <model/SiteGroundReflectance_Impl.hpp>
#include <model/SiteGroundTemperatureBuildingSurface_Impl.hpp>
#include <model/SiteWaterMainsTemperature_Impl.hpp>
#include <model/SizingParameters_Impl.hpp>
#include <model/SizingPlant_Impl.hpp>
#include <model/SizingSystem_Impl.hpp>
#include <model/SizingZone_Impl.hpp>
#include <model/SkyTemperature_Impl.hpp>
#include <model/Space_Impl.hpp>
#include <model/SpaceInfiltrationDesignFlowRate_Impl.hpp>
#include <model/SpaceInfiltrationEffectiveLeakageArea_Impl.hpp>
#include <model/SpaceType_Impl.hpp>
#include <model/StandardGlazing_Impl.hpp>
#include <model/StandardOpaqueMaterial_Impl.hpp>
#include <model/SteamEquipment_Impl.hpp>
#include <model/SteamEquipmentDefinition_Impl.hpp>
#include <model/SubSurface_Impl.hpp>
#include <model/Surface_Impl.hpp>
#include <model/ThermalZone_Impl.hpp>
#include <model/ThermochromicGlazing_Impl.hpp>
#include <model/ThermostatSetpointDualSetpoint_Impl.hpp>
#include <model/TimeDependentValuation_Impl.hpp>
#include <model/Timestep_Impl.hpp>
#include <model/UtilityCost_Charge_Block_Impl.hpp>
#include <model/UtilityCost_Charge_Simple_Impl.hpp>
#include <model/UtilityCost_Computation_Impl.hpp>
#include <model/UtilityCost_Qualify_Impl.hpp>
#include <model/UtilityCost_Ratchet_Impl.hpp>
#include <model/UtilityCost_Tariff_Impl.hpp>
#include <model/UtilityCost_Variable_Impl.hpp>
#include <model/Version_Impl.hpp>
#include <model/WaterHeaterMixed_Impl.hpp>
#include <model/WaterUseConnections_Impl.hpp>
#include <model/WaterUseEquipment_Impl.hpp>
#include <model/WaterUseEquipmentDefinition_Impl.hpp>
#include <model/WeatherFile_Impl.hpp>
#include <model/WeatherFileConditionType_Impl.hpp>
#include <model/WeatherFileDays_Impl.hpp>
#include <model/WindowDataFile_Impl.hpp>
#include <model/YearDescription_Impl.hpp>
#include <model/ZoneAirContaminantBalance_Impl.hpp>
#include <model/ZoneAirHeatBalanceAlgorithm_Impl.hpp>
#include <model/ZoneCapacitanceMultiplierResearchSpecial_Impl.hpp>
#include <model/ZoneHVACBaseboardConvectiveElectric_Impl.hpp>
#include <model/ZoneHVACBaseboardConvectiveWater_Impl.hpp>
#include <model/ZoneHVACEquipmentList_Impl.hpp>
#include <model/ZoneHVACIdealLoadsAirSystem_Impl.hpp>
#include <model/ZoneHVACFourPipeFanCoil_Impl.hpp>
#include <model/ZoneHVACLowTemperatureRadiantElectric_Impl.hpp>
#include <model/ZoneHVACLowTempRadiantConstFlow_Impl.hpp>
#include <model/ZoneHVACLowTempRadiantVarFlow_Impl.hpp>
#include <model/ZoneHVACPackagedTerminalHeatPump_Impl.hpp>
#include <model/ZoneHVACPackagedTerminalAirConditioner_Impl.hpp>
#include <model/ZoneHVACWaterToAirHeatPump_Impl.hpp>
#include <model/ZoneHVACUnitHeater_Impl.hpp>

#endif // MODEL_CONCRETEMODELOBJECTS_HPP
