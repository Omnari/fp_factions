class CfgPatches
{
	class FP_Factions_Common
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class fp_men_woodland
	{
		displayName="Men (Woodland)";
	};
	class fp_men_desert
	{
		displayName="Men (Desert)";
	};
	class fp_men_universal
	{
		displayName="Men (Universal)";
	};
	class fp_men_winter
	{
		displayName="Men (Winter)";
	};
	class fp_men_shockwoodland
	{
		displayName="Men (Shocktroops, Woodland)";
	};
	class fp_men_shockdesert
	{
		displayName="Men (Shocktroops, Desert)";
	};
	class fp_men_marinewoodland
	{
		displayName="Men (Marines, Woodland)";
	};
	class fp_men_marinedesert
	{
		displayName="Men (Marines, Desert)";
	};
	class fp_men_sfwoodland
	{
		displayName="Men (Special Forces, Woodland)";
	};
	class fp_men_sfdesert
	{
		displayName="Men (Special Forces, Desert)";
	};
	class fp_men_mps
	{
		displayName="Men (Military Police)";
	};
	class fp_men_reserves
	{
		displayName="Men (Reservists)";
	};
	class fp_men_militia
	{
		displayName="Men (Militia)";
	};
	class fp_men_armedcivs
	{
		displayName="Men (Armed Civilians)";
	};
};
class CfgEditorSubcategories
{
	class fp_men_woodland_EdSubcat
	{
		displayName="Men (Woodland)";
	};
	class fp_men_desert_EdSubcat
	{
		displayName="Men (Desert)";
	};
	class fp_men_universal_EdSubcat
	{
		displayName="Men (Universal)";
	};
	class fp_men_winter_EdSubcat
	{
		displayName="Men (Winter)";
	};
	class fp_men_shockwoodland_EdSubcat
	{
		displayName="Men (Shocktroops, Woodland)";
	};
	class fp_men_shockdesert_EdSubcat
	{
		displayName="Men (Shocktroops, Desert)";
	};
	class fp_men_marineswoodland_EdSubcat
	{
		displayName="Men (Marines, Woodland)";
	};
	class fp_men_marinesdesert_EdSubcat
	{
		displayName="Men (Marines, Desert)";
	};
	class fp_men_sfwoodland_EdSubcat
	{
		displayName="Men (Special Forces, Woodland)";
	};
	class fp_men_sfdesert_EdSubcat
	{
		displayName="Men (Special Forces, Desert)";
	};
	class fp_men_mps_EdSubcat
	{
		displayName="Men (Military Police)";
	};
	class fp_men_reserves_EdSubcat
	{
		displayName="Men (Reservists)";
	};
	class fp_men_militia_EdSubcat
	{
		displayName="Men (Militia)";
	};
	class fp_men_armedcivs_EdSubcat
	{
		displayName="Men (Armed Civilians)";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class CUP_srifle_SVD;
	class CUP_srifle_SVD_FPFac_PSO: CUP_srifle_SVD
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "CUP_optic_PSO_1";
				slot = "CowsSlot";
			};
		};
	};
};
