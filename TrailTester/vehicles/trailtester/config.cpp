class CfgPatches
{
	class TrailTester
	{
		units[]=
		{	
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Sounds_Effects",
			"DZ_Gear_Containers",
			"DZ_Gear_Camping"
		};
	};
};
class CfgSlots
{
	class Slot_sea_chest
	{
		name="sea_chest";
		displayName="TrailTester sea_chest";
		selection="sea_chest";
		ghostIcon="cat_common_cargo";
	};
	class Slot_CanisterGasoline
	{
		name="CanisterGasoline";
		displayName="CanisterGasoline";
		selection="CanisterGasoline";
		ghostIcon="gascanister";
	};
	class Slot_TrailTesterSpareWheel
	{
		name="TrailTesterSpareWheel";
		displayName="Front Left TrailTester Wheel";
		selection="wheel_spare_1";
		ghostIcon="wheel";
	};
	class Slot_TrailTesterWheel_1_1
	{
		name="TrailTesterwheel_1_1";
		displayName="Front Left TrailTester Wheel";
		selection="wheel_1_1";
		ghostIcon="wheel";
	};
	class Slot_TrailTesterWheel_1_2
	{
		name="TrailTesterwheel_1_2";
		displayName="Front Right TrailTester Wheel";
		selection="wheel_1_2";
		ghostIcon="wheel";
	};
	class Slot_TrailTesterWheel_2_1
	{
		name="TrailTesterwheel_2_1";
		displayName="Front Left TrailTester Wheel";
		selection="wheel_2_1";
		ghostIcon="wheel";
	};
	class Slot_TrailTesterWheel_2_2
	{
		name="TrailTesterwheel_2_2";
		displayName="Front Right TrailTester Wheel";
		selection="wheel_2_2";
		ghostIcon="wheel";
	};
	class Slot_TrailTesterdoors_driver
	{
		name="TrailTesterdoors_driver";
		displayName="Drivers Door";
		selection="doors_driver";
		ghostIcon="doorfront";
	};
	class Slot_TrailTesterdoors_codriver
	{
		name="TrailTesterdoors_codriver";
		displayName="Co Drivers Door";
		selection="Doors_codriver";
		ghostIcon="doorfront";
	};
	class Slot_TrailTesterdoors_cargo1
	{
		name="TrailTesterdoors_cargo1";
		displayName="Cargo1 Door";
		selection="doors_cargo1";
		ghostIcon="doorrear";
	};
	class Slot_TrailTesterdoors_cargo2
	{
		name="TrailTesterdoors_cargo2";
		displayName="Cargo1 Door";
		selection="doors_cargo2";
		ghostIcon="doorrear";
	};
	class Slot_TrailTesterHood
	{
		name="TrailTesterHood";
		displayName="TrailTester Hood";
		selection="doors_hood";
		ghostIcon="hood";
	};
	class Slot_TrailTesterTrunk
	{
		name="TrailTesterTrunk";
		displayName="TrailTester Trunk";
		selection="doors_trunk";
		ghostIcon="trunk";
	};
	class Slot_Backpack
	{
		name="Back";
		displayName="backpack";
		selection="back";
		ghostIcon="backpack";
	};
	class slot_Bruiser_Armour
	{
		name="Bruiser_Armour";
		displayName="Bruiser_Armour";
		selection="Bruiser_Armour";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_Bruiser_ArmourRR
	{
		name="Bruiser_ArmourRR";
		displayName="Bruiser_ArmourRR";
		selection="Bruiser_ArmourRR";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_Bruiser_ArmourRL
	{
		name="Bruiser_ArmourRL";
		displayName="Bruiser_ArmourRL";
		selection="Bruiser_ArmourRL";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_BruiserTrunkArmour
	{
		name="BruiserTrunkArmour";
		displayName="BruiserTrunkArmour";
		selection="BruiserTrunkArmour";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_Bruiser_ArmourDD
	{
		name="Bruiser_ArmourDD";
		displayName="Bruiser_ArmourDD";
		selection="Bruiser_ArmourDD";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_Bruiser_ArmourCDD
	{
		name="Bruiser_ArmourCDD";
		displayName="Bruiser_ArmourCDD";
		selection="Bruiser_ArmourCDD";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_Bruiser_ArmourC1
	{
		name="Bruiser_ArmourC1";
		displayName="Bruiser_ArmourC1";
		selection="Bruiser_ArmourC1";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_Bruiser_ArmourC2
	{
		name="Bruiser_ArmourC2";
		displayName="Bruiser_ArmourC2";
		selection="Bruiser_ArmourC2";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_BruiserHoodArmour
	{
		name="BruiserHoodArmour";
		displayName="BruiserHoodArmour";
		selection="BruiserHoodArmour";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_Bruiser_BullBars
	{
		name="Bruiser_BullBars";
		displayName="Bruiser_BullBars";
		selection="Bruiser_BullBars";
		ghostIcon="cat_common_cargo";
	
	};
	class slot_Bruiser_Skull
	{
		name="Bruiser_Skull";
		displayName="Bruiser_Skull";
		selection="Bruiser_Skull";
		ghostIcon="cat_common_cargo";
	
	};
	class Slot_55galDrum_1
	{
		name="55galDrum_1";
		displayName="Barrel";
		selection="55galDrum_1";
		ghostIcon="barrel";
	};
	class Slot_55galDrum_2
	{
		name="55galDrum_2";
		displayName="Barrel";
		selection="55galDrum_2";
		ghostIcon="barrel";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class Bottle_Base;
	class SeaChest: Container_Base
	{
		inventorySlot[]=
		{
			"sea_chest_1",
			"sea_chest_2",
			"sea_chest_3",
			"sea_chest_4",
			"sea_chest_5",
			"sea_chest_6",
			"sea_chest_7",
			"sea_chest",
			"SeaChest",
			"SeaChest0",
			"SeaChest1",
			"SeaChest2",
			"SeaChest3",
			"SeaChest4",
			"SeaChest5",
			"SeaChest6",
			"SeaChest7"
		};
	};
	class Barrel_ColorBase: Container_Base
	{
		inventorySlot[]=
		{
			"55galDrum_1",
			"55galDrum_2",
			"55galDrum_3",
			"55galDrum_4",
			"55galDrum_5",
			"55galDrum_6",
			"55galDrum_7",
			"55galDrum_8",
			"55galDrum_9",
			"55galDrum_10",
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4"
		};
	};
	class CarScript;
	class Crew;
	class Driver;
	class CoDriver;
	class CarDoor;
	class Front;
	class Rear;
	class Left;
	class Right;
	class AnimationSources;
	class SimulationModule;
	class Axles;
	class Wheels;
	class DamageSystem;
	class GlobalHealth;
	class DamageZones;
	class Window;
	class Health;
	class Doors;
	class CarWheel;
	class TrailTester: CarScript
	{
		scope=2;
		displayName="TrailBruiser";
		descriptionShort="Heavy TrailBruiser 4x4";
		model="\TrailTester\vehicles\TrailTester\TrailTester.p3d";
		frontReflectorMatDamaged="";
		frontReflectorMatRuined="TrailTester\vehicles\TrailTester\data\fara.paa";
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"TrailTesterdoors_driver",
			"TrailTesterdoors_codriver",
			"TrailTesterdoors_cargo1",
			"TrailTesterdoors_cargo2",
			"TrailTesterHood",
			"TrailTesterTrunk",
			"TrailTesterWheel_1_1",
			"TrailTesterWheel_1_2",
			"TrailTesterWheel_2_1",
			"TrailTesterWheel_2_2",
			"TrailTesterSpareWheel",
			"CanisterGasoline",
			"55galDrum_1",
			"55galDrum_2",
			"sea_chest",
			"Back",
			"Bruiser_Armour",
			"Bruiser_ArmourRR",
			"Bruiser_ArmourRL",
			"BruiserTrunkArmour",
			"Bruiser_ArmourDD",
			"Bruiser_ArmourCDD",
			"Bruiser_ArmourC1",
			"Bruiser_ArmourC2",
			"BruiserHoodArmour",
			"Bruiser_BullBars",
			"Bruiser_Skull"
		};
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"TrailTester\vehicles\TrailTester\data\remapbody_01test.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			""
		};
		dashboardMatOn="TrailTester\vehicles\TrailTester\data\dashboardlight.rvmat";
		dashboardMatOff="TrailTester\vehicles\TrailTester\data\dashboardlight_off.rvmat";
		frontReflectorMatOn="TrailTester\vehicles\TrailTester\data\lights.rvmat";
		frontReflectorMatOff="TrailTester\vehicles\TrailTester\data\light_off.rvmat";
		brakeReflectorMatOn="TrailTester\vehicles\TrailTester\data\trailtester_taillights_e.rvmat";
		brakeReflectorMatOff="TrailTester\vehicles\TrailTester\data\light_off.rvmat";
		tailReflectorMatOn="TrailTester\vehicles\TrailTester\data\trailtester_taillights_e.rvmat";
		tailReflectorMatOff="TrailTester\vehicles\TrailTester\data\light_off.rvmat";
		reverseReflectorMatOn="TrailTester\vehicles\TrailTester\data\trailtester_taillights_e.rvmat";
		reverseReflectorMatOff="TrailTester\vehicles\TrailTester\data\light_off.rvmat";
		fuelCapacity=75;
		fuelConsumption=30;
		class Crew: Crew
		{
			class Driver: Driver
			{
			};
			class CoDriver: CoDriver
			{
			};
			class Cargo1
			{
				actionSel="seat_cargo1";
				proxyPos="crewCargo1";
				getInPos="pos_cargo1";
				getInDir="pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel="seat_cargo2";
				proxyPos="crewCargo2";
				getInPos="pos_cargo2";
				getInDir="pos_cargo2_dir";
			};
		};
		class SimulationModule: SimulationModule
		{
			drive="DRIVE_AWD";
			airDragFrontTotal=0.795;
			class Steering
			{
				increaseSpeed[]={0,40,60,30,100,15};
				decreaseSpeed[]={0,90,60,45,100,20};
				centeringSpeed[]={0,0,15,27,60,45,100,63};
			};
			class Throttle
			{
				reactionTime=0.69999999;
				defaultThrust=0.85000002;
				gentleThrust=0.69999999;
				turboCoef=4;
				gentleCoef=0.75;
			};
			braking[]={0,0.3,1,0.80000001,2.5,0.89999998,3,1};
			class Engine
			{
				inertia=0.27000001;
				torqueMax=250;
				torqueRpm=4400;
				powerMax=155;
				powerRpm=5800;
				rpmIdle=1250;
				rpmMin=1350;
				rpmClutch=1450;
				rpmRedline=6250;
				rpmMax=7500;
			};
			class Gearbox
			{
				reverse=3.526;
				ratios[]={4.1,3.0,2.3,1.6,1};
				timeToUncoupleClutch=0.25;
				timeToCoupleClutch=0.34999999;
				maxClutchTorque=280;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxSteeringAngle=30;
					finalRatio=4.0900002;
					brakeBias=0.60000002;
					brakeForce=4000;
					wheelHubMass=5;
					wheelHubRadius=0.15000001;
					class Suspension
					{
						swayBar=1700;
						stiffness=31400;
						compression=3000;
						damping=8000;
						travelMaxUp=0.1587;
						travelMaxDown=0.1059;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_1";
							inventorySlot="TrailTesterWheel_1_1";
						};
						class Right: Right
						{
							animDamper="damper_2_1";
							inventorySlot="TrailTesterWheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					maxSteeringAngle=0;
					finalRatio=4.0900002;
					brakeBias=0.40000001;
					brakeForce=3800;
					wheelHubMass=5;
					wheelHubRadius=0.15000001;
					class Suspension
					{
						swayBar=1800;
						stiffness=31700;
						compression=3300;
						damping=7600;
						travelMaxUp=0.1587;
						travelMaxDown=0.1059;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_2";
							inventorySlot="TrailTesterWheel_1_2";
						};
						class Right: Right
						{
							animDamper="damper_2_2";
							inventorySlot="TrailTesterWheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class AnimationSources: AnimationSources
		{
			class DoorsCargo1
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCargo2
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class damper_1_1
			{
				source="user";
				initPhase=0.5;
				animPeriod=1;
			};
			class damper_2_1: damper_1_1
			{
			};
			class damper_1_2: damper_1_1
			{
			};
			class damper_2_2: damper_1_1
			{
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Chassis
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_chassis"
					};
					class Health
					{
						hitpoints=3500;
						transferToGlobalCoef=0;
					};
					inventorySlots[]={};
				};
				class Front
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_front"
					};
					componentNames[]=
					{
						"dmgZone_front",
						"dmgZone_bumper_1"
					};
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_1",
						"Fender_2_1",
						"Engine"
					};
					transferToZonesCoefs[]={0.29999999,0.29999999,0.40000001};
					inventorySlots[]=
					{
						"TrailTesterHood",
						"CarRadiator",
						"TrailTesterWheel_1_1",
						"TrailTesterWheel_1_2",
						"BruiserHoodArmour",
						"Bruiser_BullBars",
						"Bruiser_Skull",
					};
					inventorySlotsCoefs[]={0.39999999,0.0500001,0.30000001,0.30000001,0.8000001,0.8000001,0.8000001};
				};
				class Reflector_1_1
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_lights_1_1"
					};
					memoryPoints[]=
					{
						"dmgZone_lights_1_1"
					};
					class Health
					{
						hitpoints=20;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\headlights_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\glass_i_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\glass_i_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_1_1"
					};
					transferToZonesCoefs[]={1,1};
					inventorySlots[]=
					{
						"Reflector_1_1",
						"TrailTesterWheel_1_1"
					};
					inventorySlotsCoefs[]={0.8,0.20000008,};
				};
				class Reflector_2_1: Reflector_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_lights_2_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_2_1"
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_2_1"
					};
					inventorySlots[]=
					{
						"Reflector_2_1",
						"TrailTesterWheel_1_2"
					};
				};
				class Back
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_back"
					};
					componentNames[]=
					{
						"dmgZone_back",
						"dmgZone_bumper_2"
					};
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_2",
						"Fender_2_2"
					};
					transferToZonesCoefs[]={0.29999999,0.29999999};
					inventorySlots[]=
					{
						"TrailTesterTrunk",
						"TrailTesterWheel_1_2",
						"TrailTesterWheel_2_2",
						"BruiserTrunkArmour"
					};
					inventorySlotsCoefs[]={0.29999998,0.29999998,0.29999998,0.80000001};
				};
				class Roof
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_roof"
					};
					memoryPoints[]=
					{
						"dmgZone_roof"
					};
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"
								}
							}
						};
					};
					inventorySlots[]={};
				};
				class Fender_1_1
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_fender_1_1"
					};
					memoryPoints[]=
					{
						"dmgZone_fender_1_1"
					};
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Reflector_1_1",
						"Engine"
					};
					transferToZonesCoefs[]={0.20000001,0.40000002,0.20000001};
					inventorySlots[]=
					{
						"TrailTesterHood",
						"TrailTesterWheel_1_1",
						"TrailTesterdoors_driver"
					};
					inventorySlotsCoefs[]={0.20000002,0.39999998,0.20000001};
				};
				class Fender_1_2: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_1_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_2"
					};
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank"
					};
					transferToZonesCoefs[]={0.29999999,0.29999999};
					inventorySlots[]=
					{
						"TrailTesterTrunk",
						"TrailTesterWheel_1_2",
						"TrailTesterdoors_cargo1"
					};
					inventorySlotsCoefs[]={0.29999999,0.39999998,0.20000001};
				};
				class Fender_2_1: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_1"
					};
					transferToZonesNames[]=
					{
						"Front",
						"Reflector_2_1",
						"Engine"
					};
					transferToZonesCoefs[]={0.20000001,0.40000002,0.20000001};
					inventorySlots[]=
					{
						"TrailTesterHood",
						"TrailTesterWheel_2_1",
						"TrailTesterdoors_driver"
					};
					inventorySlotsCoefs[]={0.20000002,0.39999998,0.20000001};
				};
				class Fender_2_2: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_2"
					};
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank"
					};
					transferToZonesCoefs[]={0.29999999,0.29999999};
					inventorySlots[]=
					{
						"TrailTesterTrunk",
						"TrailTesterWheel_2_2",
						"TrailTesterdoors_cargo2"
					};
					inventorySlotsCoefs[]={0.29999999,0.39999998,0.20000001};
				};
				class WindowFront
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_windowFront"
					};
					componentNames[]=
					{
						"dmgZone_windowFront"
					};
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"
								}
							},
							
							{
								0.0,
								"hidden"
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Engine
				{
					fatalInjuryCoef=0.0001;
					memoryPoints[]=
					{
						"dmgZone_engine"
					};
					componentNames[]=
					{
						"dmgZone_engine"
					};
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									""
								}
							},
							
							{
								0.69999999,
								
								{
									""
								}
							},
							
							{
								0.5,
								
								{
									""
								}
							},
							
							{
								0.30000001,
								
								{
									""
								}
							},
							
							{
								0.0,
								
								{
									""
								}
							}
						};
					};
					inventorySlots[]=
					{
						"CarBattery",
						"SparkPlug",
						"CarRadiator"
					};
					inventorySlotsCoefs[]={0.010000001,0.010000001,0.010000001};
				};
				class FuelTank
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_fuelTank"
					};
					class Health
					{
						hitpoints=700;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.0,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0.0,
								{}
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
			};
		};
		class Sounds
		{
			thrust=0.60000002;
			thrustTurbo=1;
			thrustGentle=0.30000001;
			thrustSmoothCoef=0.02;
			camposSmoothCoef=0.029999999;
			soundSetsFilter[]=
			{
				"Trailtester_Engine_Offload_Ext_Rpm1_SoundSet",
				"Trailtester_Engine_Offload_Ext_Rpm2_SoundSet",
				"Trailtester_Engine_Offload_Ext_Rpm3_SoundSet",
				"Trailtester_Engine_Offload_Ext_Rpm4_SoundSet",
				"Trailtester_Engine_Offload_Ext_Rpm5_SoundSet",
				"Trailtester_Engine_Ext_Rpm0_SoundSet",
				"Trailtester_Engine_Ext_Rpm1_SoundSet",
				"Trailtester_Engine_Ext_Rpm2_SoundSet",
				"Trailtester_Engine_Ext_Rpm3_SoundSet",
				"Trailtester_Engine_Ext_Rpm4_SoundSet",
				"Trailtester_Engine_Ext_Rpm5_SoundSet",
				"offroad_Engine_Ext_Broken_SoundSet",
				"offroad_Tires_rock_slow_Ext_SoundSet",
				"offroad_Tires_rock_fast_Ext_SoundSet",
				"offroad_Tires_grass_slow_Ext_SoundSet",
				"offroad_Tires_grass_fast_Ext_SoundSet",
				"offroad_Tires_gravel_slow_Ext_SoundSet",
				"offroad_Tires_gravel_fast_Ext_SoundSet",
				"offroad_Tires_gravel_dust_fast_Ext_SoundSet",
				"offroad_Tires_asphalt_slow_Ext_SoundSet",
				"offroad_Tires_asphalt_fast_Ext_SoundSet",
				"offroad_Tires_water_slow_Ext_SoundSet",
				"offroad_Tires_water_fast_Ext_SoundSet",
				"Offroad_skid_dirt_SoundSet",
				"offroad_dirt_turn_SoundSet",
				"offroad_Rain_Ext_SoundSet",
				"offroad_damper_left_SoundSet",
				"offroad_damper_right_SoundSet"
			};
			soundSetsInt[]=
			{
				"Offroad_Tires_Asphalt_Fast_General_Int_SoundSet",
				"Offroad_Wind_SoundSet"
			};
			
		};
		class ObstacleGenerator
		{
			carve=1;
			timeToStationary=5;
			moveThreshold=0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius=1;
						height=1.5;
						center[]={0,0,0.69999999};
					};
					class Cyl3
					{
						radius=1;
						height=1.5;
						center[]={0,0,-0.69999999};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="$STR_attachment_Engine0";
				description="";
				icon="cat_vehicle_engine";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug"
				};
			};
			class Body
			{
				name="$STR_attachment_Body0";
				description="";
				icon="cat_vehicle_body";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"TrailTesterHood",
					"TrailTesterTrunk",
					"TrailTesterdoors_driver",
					"TrailTesterdoors_codriver",
					"TrailTesterdoors_cargo1",
					"TrailTesterdoors_cargo2"
				};
			};
			class Armour
			{
				name="Armour";
				description="";
				icon="cat_vehicle_body";
				attachmentSlots[]=
				{
					"Bruiser_Armour",
					"Bruiser_ArmourRR",
					"Bruiser_ArmourRL",
					"Bruiser_ArmourDD",
					"Bruiser_ArmourCDD",
					"Bruiser_ArmourC1",
					"Bruiser_ArmourC2",
					"BruiserTrunkArmour",
					"BruiserHoodArmour",
					"Bruiser_BullBars",
					"Bruiser_Skull"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"TrailTesterWheel_1_1",
					"TrailTesterWheel_1_2",
					"TrailTesterWheel_2_1",
					"TrailTesterWheel_2_2"
				};
			};
			class Attachment
			{
				name="Attachment";
				description="";
				icon="trunk";
				attachmentSlots[]=
				{
					"55galDrum_1",
					"55galDrum_2",
					"CanisterGasoline",
					"sea_chest",
					"TrailTesterSpareWheel",
					"Back"
				};
			};
		};
		hornSoundSetEXT="TrailTester_Horn_Ext_SoundSet";
        hornSoundSetINT="TrailTester_Horn_Int_SoundSet";
		doors[]=
		{
			"TrailTesterHood",
			"TrailTesterTrunk",
			"TrailTesterdoors_driver",
			"TrailTesterdoors_codriver",
			"TrailTesterdoors_cargo1",
			"TrailTesterdoors_cargo2"
		};
	};
	class CanisterGasoline: Bottle_Base
	{
		inventorySlot[] = 
		{
			"CanisterGasoline0",
			"CanisterGasoline1",
			"CanisterGasoline2",
			"CanisterGasoline3",
			"CanisterGasoline4",
			"CanisterGasoline5",
			"CanisterGasoline6",
			"CanisterGasoline7",
			"JerryCan",
			"CanisterGasoline"
		};
	};
	class TrailTesterWheel: CarWheel
	{
		scope=2;
		displayName="TrailBruiser Wheel";
		descriptionShort="TrailTester Wheel";
		model="\TrailTester\vehicles\TrailTester\proxy\TrailTesterwheel.p3d";
		weight=15000;
		itemSize[]={6,6};
		itemBehaviour=0;
		inventorySlot[]=
		{
			"TrailTesterWheel_1_1",
			"TrailTesterWheel_1_2",
			"TrailTesterWheel_2_1",
			"TrailTesterWheel_2_2",
			"TrailTesterSpareWheel"
		};
		rotationFlags=4;
		physLayer="item_large";
		repairableWithKits[]={6};
		repairCosts[]={30};
		radiusByDamage[]={0,0.43,0.30000001,0.30000001,0.99900001,0.25,0.99900001,0.2};
		radius=0.43;
		friction=0.95999998;
		width=0.23199999;
		tyreRollResistance=0.014;
		tyreTread=0.69999999;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"DZ\vehicles\wheeled\civiliansedan\data\gaz_wheel.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\wheeled\civiliansedan\data\gaz_wheel.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\wheeled\civiliansedan\data\gaz_wheel_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\wheeled\civiliansedan\data\gaz_wheel_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\vehicles\wheeled\civiliansedan\data\gaz_wheel_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class TrailTesterWheel_Ruined: CarWheel
	{
		scope=2;
		displayName="TrailBruiser Wheel Ruined";
		model="\TrailTester\vehicles\TrailTester\proxy\TrailTesterwheel_destroyed.p3d";
		weight=10000;
		itemSize[]={5,5};
		itemBehaviour=0;
		inventorySlot[]=
		{
			"TrailTesterWheel_1_1",
			"TrailTesterWheel_1_2",
			"TrailTesterWheel_2_1",
			"TrailTesterWheel_2_2",
			"TrailTesterSpareWheel"
		};
		rotationFlags=4;
		physLayer="item_large";
		radius=0.30000001;
		width=0.37900001;
		tyreRollResistance=1;
		tyreRollDrag=70;
		tyreRoughness=1;
		tyreTread=0.30000001;
	};
	class TrailTesterdoors_driver: CarDoor
	{
		scope=2;
		displayName="TrailBruiserDriver Door";
		descriptionShort="TrailTester Driver Door";
		model="\TrailTester\vehicles\TrailTester\proxy\TrailTesterdoors_driver.p3d";
		weight=10000;
		inventorySlot[]=
		{
			"TrailTesterdoors_driver"
		};
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\TrailTester\data\remapbody_01test.paa"
		};
		rotationFlags=4;
		itemSize[]={8,8};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"
								}
							},
							
							{
								0.0,
								"hidden"
							}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door_damage.rvmat"
								}
							},
							
							{
								0.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class TrailTesterdoors_codriver: TrailTesterdoors_driver
	{
		displayName="TrailBruiser coDriver Door";
		descriptionShort="TrailTester CoDriver Door";
		model="\TrailTester\vehicles\TrailTester\proxy\TrailTesterdoors_codriver.p3d";
		inventorySlot[]=
		{
			"TrailTesterdoors_codriver"
		};
		rotationFlags=8	;
	};
	class TrailTesterdoors_cargo1: TrailTesterdoors_driver
	{
		displayName="TrailBruiser Cargo1 Door";
		descriptionShort="TrailTester Cargo1 Door";
		model="\TrailTester\vehicles\TrailTester\proxy\TrailTesterdoors_cargo1.p3d";
		inventorySlot[]=
		{
			"TrailTesterdoors_cargo1"
		};
		rotationFlags=4;
	};
	class TrailTesterdoors_cargo2: TrailTesterdoors_driver
	{
		displayName="TrailBruiser Cargo2 Door";
		descriptionShort="TrailTester Cargo2 Door";
		model="\TrailTester\vehicles\TrailTester\proxy\TrailTesterdoors_cargo2.p3d";
		inventorySlot[]=
		{
			"TrailTesterdoors_cargo2"
		};
		rotationFlags=8;
	};
	class TrailTesterHood: TrailTesterdoors_driver
	{
		displayName="TrailBruiser Hood";
		descriptionShort="TrailTester Hood";
		model="\TrailTester\vehicles\TrailTester\proxy\TrailTesterhood.p3d";
		weight=10000;
		inventorySlot[]=
		{
			"TrailTesterHood"
		};
		rotationFlags=2;
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\TrailTester\data\remapbody_01test.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					RefTexsMats[]=
					{
						"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackhood_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TrailTesterTrunk: TrailTesterdoors_driver
	{
		displayName="TrailBruiser Trunk";
		descriptionShort="TrailTester Trunk";
		model="\TrailTester\vehicles\TrailTester\proxy\TrailTestertrunk.p3d";
		weight=10000;
		inventorySlot[]=
		{
			"TrailTesterTrunk"
		};
		rotationFlags=1;
		class DamageSystem: DamageSystem
		{
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"
								}
							},
							
							{
								0.0,
								"hidden"
							}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\offroadhatchback\data\green\niva_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_trunk_damage.rvmat"
								}
							},
							
							{
								0.0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};

//black bruiser
	class TrailTester_black: TrailTester
	{
		scope=2;
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"TrailTester\vehicles\TrailTester\data\remapbody_04.paa"
		};
	};
	class TrailTesterdoors_driver_black: TrailTesterdoors_driver
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_04.paa"
		};
	};
	class TrailTesterdoors_codriver_black: TrailTesterdoors_codriver
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_04.paa"
		};
	};
	class TrailTesterdoors_cargo1_black: TrailTesterdoors_cargo1
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_04.paa"
		};
	};
	class TrailTesterdoors_cargo2_black: TrailTesterdoors_cargo2
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_04.paa"
		};
	};
	class TrailTesterHood_black: TrailTesterHood
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_04.paa"
		};
	};
	class TrailTesterTrunk_black: TrailTesterTrunk
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_04.paa"
		};
	};
	//winter bruiser
	class TrailTester_winter: TrailTester
	{
		scope=2;
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"TrailTester\vehicles\TrailTester\data\remapbody_01snow.paa"
		};
	};
	class TrailTesterdoors_driver_winter: TrailTesterdoors_driver
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_01snow.paa"
		};
	};
	class TrailTesterdoors_codriver_winter: TrailTesterdoors_codriver
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_01snow.paa"
		};
	};
	class TrailTesterdoors_cargo1_winter: TrailTesterdoors_cargo1
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_01snow.paa"
		};
	};
	class TrailTesterdoors_cargo2_winter: TrailTesterdoors_cargo2
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_01snow.paa"
		};
	};
	class TrailTesterHood_winter: TrailTesterHood
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_01snow.paa"
		};
	};
	class TrailTesterTrunk_winter: TrailTesterTrunk
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"TrailTester\vehicles\trailtester\data\remapbody_01snow.paa"
		};
	};

//armour
	class Bruiser_Armour: CarDoor
	{
		scope=2;
		displayName="Bruiser Windscreen Armour";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\Bruiser_Armour.p3d";
		weight=2000;
		itemSize[]={8,5};
		absorbency=0;
		inventorySlot[]=
		{
			"Bruiser_Armour"
		};
		rotationFlags=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class BruiserTrunkArmour: CarDoor
	{
		scope=2;
		displayName="Bruiser Trunk Armour";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\BruiserTrunkArmour.p3d";
		weight=2000;
		itemSize[]={8,5};
		absorbency=0;
		inventorySlot[]=
		{
			"BruiserTrunkArmour"
		};
		rotationFlags=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class Bruiser_ArmourRR: CarDoor
	{
		scope=2;
		displayName="Bruiser Window Armour Rear Right";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourRR.p3d";
		weight=2000;
		itemSize[]={5,5};
		absorbency=0;
		inventorySlot[]=
		{
			"Bruiser_ArmourRR"
		};
		rotationFlags=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class Bruiser_ArmourRL: CarDoor
	{
		scope=2;
		displayName="Bruiser Window Armour Rear Left";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourRL.p3d";
		weight=2000;
		itemSize[]={5,5};
		absorbency=0;
		inventorySlot[]=
		{
			"Bruiser_ArmourRL"
		};
		rotationFlags=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class Bruiser_ArmourDD: CarDoor
	{
		scope=2;
		displayName="Bruiser Window Armour Driver";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourDD.p3d";
		weight=2000;
		itemSize[]={5,5};
		absorbency=0;
		inventorySlot[]=
		{
			"Bruiser_ArmourDD"
		};
		rotationFlags=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class Bruiser_ArmourCDD: CarDoor
	{
		scope=2;
		displayName="Bruiser Window Armour CoDriver";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourCDD.p3d";
		weight=2000;
		itemSize[]={5,5};
		absorbency=0;
		inventorySlot[]=
		{
			"Bruiser_ArmourCDD"
		};
		rotationFlags=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class Bruiser_ArmourC1: CarDoor
	{
		scope=2;
		displayName="Bruiser Window Armour Cargo 1";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourC1.p3d";
		weight=2000;
		itemSize[]={5,5};
		absorbency=0;
		inventorySlot[]=
		{
			"Bruiser_ArmourC1"
		};
		rotationFlags=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class Bruiser_ArmourC2: CarDoor
	{
		scope=2;
		displayName="Bruiser Window Armour Cargo 2";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourC2.p3d";
		weight=2000;
		itemSize[]={5,5};
		absorbency=0;
		inventorySlot[]=
		{
			"Bruiser_ArmourC2"
		};
		rotationFlags=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class BruiserHoodArmour: CarDoor
	{
		scope=2;
		displayName="Bruiser Hood Armour";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\BruiserHoodArmour.p3d";
		weight=2000;
		itemSize[]={6,6};
		absorbency=0;
		inventorySlot[]=
		{
			"BruiserHoodArmour"
		};
		rotationFlags=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class Bruiser_BullBars: CarDoor
	{
		scope=2;
		displayName="Bruiser BullBars";
		descriptionShort="Armour for the Bruiser";
		model="\TrailTester\vehicles\TrailTester\proxy\Bruiser_BullBars.p3d";
		weight=2000;
		itemSize[]={8,4};
		absorbency=0;
		inventorySlot[]=
		{
			"Bruiser_BullBars"
		};
		rotationFlags=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class Bruiser_Skull: Inventory_Base
	{
		scope=2;
		displayName="BIG ASS BULL SKULL";
		descriptionShort="???";
		model="\TrailTester\vehicles\TrailTester\proxy\Bruiser_Skull.p3d";
		weight=2000;
		itemSize[]={4,5};
		absorbency=0;
		inventorySlot[]=
		{
			"Bruiser_Skull"
		};
		rotationFlags=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyVehiclePart: ProxyAttachment
	{
		scope=2;
		simulation="ProxyInventory";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=0;
	};
	class ProxyTrailTesterWheel: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\TrailTesterwheel.p3d";
		inventorySlot[]=
		{
			"TrailTesterWheel_1_1",
			"TrailTesterWheel_1_2",
			"TrailTesterWheel_2_1",
			"TrailTesterWheel_2_2",
			"TrailTesterSpareWheel"
		};
	};
	class ProxyTrailTesterWheel_destroyed: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\TrailTesterwheel_destroyed.p3d";
		inventorySlot[]=
		{
			"TrailTesterWheel_1_1",
			"TrailTesterWheel_1_2",
			"TrailTesterWheel_2_1",
			"TrailTesterWheel_2_2",
			"TrailTesterSpareWheel"
		};
	};
	class Proxysea_chest: ProxyVehiclePart
	{
		model="DZ\gear\camping\sea_chest.p3d";
		inventorySlot[]=
		{
			"sea_chest",
			"sea_chest_1",
			"sea_chest_2",
			"sea_chest_3",
			"sea_chest_4"
		};
	};
	class ProxyTrailTesterHood: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\TrailTesterhood.p3d";
		inventorySlot="TrailTesterHood";
	};
	class ProxyTrailTesterTrunk: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\TrailTestertrunk.p3d";
		inventorySlot="TrailTesterTrunk";
	};
	class Proxy55galdrum: ProxyVehiclePart
	{
		model="DZ\gear\containers\55galdrum.p3d";
		inventorySlot[]=
		{
			"55galDrum_1",
			"55galDrum_2",
			"55galDrum_3",
			"55galDrum_4",
			"55galDrum_5",
			"55galDrum_6",
			"55galDrum_7",
			"55galDrum_8",
			"55galDrum_9",
			"55galDrum_10",
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4"
		};
	};
	class Proxyjerrycan: ProxyVehiclePart
	{
		model="DZ\vehicles\parts\jerrycan.p3d";
		inventorySlot[]=
		{
			"CanisterGasoline",
			"CanisterGasoline_1"
		};
	};
	class ProxyTrailTesterdoors_driver: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\TrailTesterdoors_driver.p3d";
		inventorySlot="TrailTesterdoors_driver";
	};
	class ProxyTrailTesterdoors_codriver: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\TrailTesterdoors_codriver.p3d";
		inventorySlot="TrailTesterdoors_codriver";
	};
	class ProxyTrailTesterdoors_cargo1: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\TrailTesterdoors_cargo1.p3d";
		inventorySlot="TrailTesterdoors_cargo1";
	};
	class ProxyTrailTesterdoors_cargo2: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\TrailTesterdoors_cargo2.p3d";
		inventorySlot="TrailTesterdoors_cargo2";
	};
	class ProxyBackpack: ProxyVehiclePart
	{
		model = "DZ\characters\proxies\backpack_dz.p3d";
		inventorySlot[] = {"Back"};
	};
	class ProxyBruiser_Armour: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\Bruiser_Armour.p3d";
		inventorySlot= "Bruiser_Armour";
		
	};
	class ProxyBruiserTrunkArmour: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\BruiserTrunkArmour.p3d";
		inventorySlot= "BruiserTrunkArmour";
		
	};
	class ProxyBruiser_ArmourRR: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourRR.p3d";
		inventorySlot= "Bruiser_ArmourRR";
		
	};
	class ProxyBruiser_ArmourRL: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourRL.p3d";
		inventorySlot= "Bruiser_ArmourRL";
		
	};
	class ProxyBruiser_ArmourDD: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourDD.p3d";
		inventorySlot= "Bruiser_ArmourDD";
		
	};
	class ProxyBruiser_ArmourCDD: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourCDD.p3d";
		inventorySlot= "Bruiser_ArmourCDD";
		
	};
	class ProxyBruiser_ArmourC1: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourC1.p3d";
		inventorySlot= "Bruiser_ArmourC1";
		
	};
	class ProxyBruiser_ArmourC2: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\Bruiser_ArmourC2.p3d";
		inventorySlot= "Bruiser_ArmourC2";
		
	};
	class ProxyBruiserHoodArmour: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\BruiserHoodArmour.p3d";
		inventorySlot= "BruiserHoodArmour";
		
	};
	class ProxyBruiser_BullBars: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\Bruiser_BullBars.p3d";
		inventorySlot= "Bruiser_BullBars";
		
	};
	class ProxyBruiser_Skull: ProxyVehiclePart
	{
		model="TrailTester\vehicles\TrailTester\proxy\Bruiser_Skull.p3d";
		inventorySlot= "Bruiser_Skull";
		
	};
};
class CfgSoundShaders
{
	class base_TrailTester_horn_SoundShader
	{
		range=150;
	};
	class TrailTester_horn_EXT_SoundShader: base_TrailTester_horn_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\horn_EXT",
				1
			}
		};
		volume=1;
	};
	class TrailTester_horn_INT_SoundShader: base_TrailTester_horn_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\horn_INT",
				1
			}
		};
		volume=1;
	};
	class baseEngineOffroad_SoundShader
	{
		range=80;
	};
	class Trailtester_Engine_Ext_Rpm0_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Rpm0",
				1
			}
		};
		frequency="0.55 * ((850 + ((rpm - 850)/(8000/5600))) max 850) / 850";
		volume="0.75 * 1 * engineOn * 0.4 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) + 2.5*50),(((850+1200)/2) - 50)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Ext_Rpm1_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Rpm1",
				1
			}
		};
		frequency="0.55 * (850 + ((rpm - 850)/(8000/5600))) / 1200";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.6 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) - 2.5*50),(((850+1200)/2) + 50)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) + 2.5*150),(((1200+1700)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Offload_Ext_Rpm1_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Offload_Rpm1",
				1
			}
		};
		frequency="0.55 * (850 + ((rpm - 850)/(8000/5600))) / 1200";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.6 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) - 2.5*50),(((850+1200)/2) + 50)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) + 2.5*150),(((1200+1700)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Ext_Rpm2_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Rpm2",
				1
			}
		};
		frequency="0.55 * (850 + ((rpm - 850)/(8000/5600))) / 1700";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.85 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) - 2.5*150),(((1200+1700)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) + 2.5*150),(((1700+2300)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Offload_Ext_Rpm2_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Offload_Rpm2",
				1
			}
		};
		frequency="0.55 * (850 + ((rpm - 850)/(8000/5600))) / 1700";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.85 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) - 2.5*150),(((1200+1700)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) + 2.5*150),(((1700+2300)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Ext_Rpm3_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Rpm3",
				1
			}
		};
		frequency="0.55 * (850 + ((rpm - 850)/(8000/5600))) / 2300";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) - 2.5*150),(((1700+2300)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3250)/2) + 2.5*200),(((2300+3250)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Offload_Ext_Rpm3_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Offload_Rpm3",
				1
			}
		};
		frequency="0.55 * (850 + ((rpm - 850)/(8000/5600))) / 2300";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) - 2.5*150),(((1700+2300)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3250)/2) + 2.5*200),(((2300+3250)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Ext_Rpm4_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Rpm4",
				1
			}
		};
		frequency="0.55 * (850 + ((rpm - 850)/(8000/5600))) / 3250";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3250)/2) - 2.5*200),(((2300+3250)/2) + 200)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) + 2.5*200),(((3250+4400)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Offload_Ext_Rpm4_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Offload_Rpm4",
				1
			}
		};
		frequency="0.55 * (850 + ((rpm - 850)/(8000/5600))) / 3250";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3250)/2) - 2.5*200),(((2300+3250)/2) + 200)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) + 2.5*200),(((3250+4400)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Ext_Rpm5_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Rpm5",
				1
			}
		};
		frequency="(0.55 * (850 + ((rpm - 850)/(8000/5600))) / 4400) min (8000/5600)";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) - 2.5*200),(((3250+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Trailtester_Engine_Offload_Ext_Rpm5_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\Trailtester\sounds\Trailtester_Engine_Ext_Offload_Rpm5",
				1
			}
		};
		frequency="(0.55 * (850 + ((rpm - 850)/(8000/5600))) / 4400) min (8000/5600)";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) - 2.5*200),(((3250+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Offroad_Engine_Ext_Broken_SoundShader: baseEngineOffroad_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\vehicles\shared\add_layers\Offroad_Engine_Ext_Broken",
				1
			}
		};
		frequency=0.89999998;
		volume="0.75 * 1 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) - 2.5*200),(((3250+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos) * (rpm factor[5300,6200])";
	};
};
class CfgSoundSets
{
	class base_TrailTester_horn_SoundSet
	{
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		sound3DProcessingType="character3DProcessingType";
		volumeCurve="characterAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};
	class TrailTester_horn_EXT_SoundSet: base_TrailTester_horn_SoundSet
	{
		soundShaders[]=
		{
			"TrailTester_horn_EXT_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
	};
	class TrailTester_horn_INT_SoundSet: base_TrailTester_horn_SoundSet
	{
		soundShaders[]=
		{
			"TrailTester_horn_INT_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
	};
	class baseEngine_EXT_SoundSet
	{
		sound3DProcessingType="Vehicle_Ext_3DProcessingType";
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		volumeCurve="vehicleEngineAttenuationCurve";
		volumeFactor=1.1;
		occlusionFactor=0;
		obstructionFactor=0;
		spatial=1;
		loop=1;
		positionOffset[]={0,0,0.30000001};
	};
	class Trailtester_Engine_Ext_Rpm0_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Ext_Rpm0_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Ext_Rpm1_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Ext_Rpm1_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Offload_Ext_Rpm1_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Offload_Ext_Rpm1_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Ext_Rpm2_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Ext_Rpm2_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Offload_Ext_Rpm2_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Offload_Ext_Rpm2_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Ext_Rpm3_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Ext_Rpm3_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Offload_Ext_Rpm3_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Offload_Ext_Rpm3_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Ext_Rpm4_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Ext_Rpm4_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Offload_Ext_Rpm4_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Offload_Ext_Rpm4_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Ext_Rpm5_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Ext_Rpm5_SoundShader"
		};
		volumeFactor=1.0;
	};
	class Trailtester_Engine_Offload_Ext_Rpm5_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Trailtester_Engine_Offload_Ext_Rpm5_SoundShader"
		};
		volumeFactor=1.0;
	};
	class offroad_Engine_Ext_Broken_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"offroad_Engine_Ext_Broken_SoundShader"
		};
		volumeFactor=1.0;
	};
};
