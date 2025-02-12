class CfgPatches
{
	class gordon_reskins_boonie
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_H_Booniehat_woodland",
			"FP_GOR_H_Booniehat_woodland_hs",
			"FP_GOR_H_Booniehat_stripeyarid",
			"FP_GOR_H_Booniehat_stripeyarid_hs",
			"FP_GOR_H_Booniehat_stripeydesert",
			"FP_GOR_H_Booniehat_stripeydesert_hs",
			"FP_GOR_H_Booniehat_stripeywoodland",
			"FP_GOR_H_Booniehat_stripeywoodland_hs",
			"FP_GOR_H_Booniehat_frenchlizardc1",
			"FP_GOR_H_Booniehat_frenchlizardc1_hs",
			"FP_GOR_H_Booniehat_frenchlizarda2",
			"FP_GOR_H_Booniehat_frenchlizarda2_hs",
			"FP_GOR_H_Booniehat_frenchlizardfictional",
			"FP_GOR_H_Booniehat_frenchlizardfictional_hs",
			"FP_GOR_H_Booniehat_tigerstripejungle",
			"FP_GOR_H_Booniehat_tigerstripejungle_hs",
			"FP_GOR_H_Booniehat_tigerstripedesert",
			"FP_GOR_H_Booniehat_tigerstripedesert_hs",
			"FP_GOR_H_Booniehat_tigerstripenaval",
			"FP_GOR_H_Booniehat_tigerstripenaval_hs",
			"FP_GOR_H_Booniehat_oakleafsummer",
			"FP_GOR_H_Booniehat_oakleafsummer_hs",
			"FP_GOR_H_Booniehat_oakleaffall",
			"FP_GOR_H_Booniehat_oakleaffall_hs",
			"FP_GOR_H_Booniehat_auscamdpcu",
			"FP_GOR_H_Booniehat_auscamdpcu_hs",
			"FP_GOR_H_Booniehat_auscammidpoint",
			"FP_GOR_H_Booniehat_auscammidpoint_hs",
			"FP_GOR_H_Booniehat_auscamdpdu",
			"FP_GOR_H_Booniehat_auscamdpdu_hs",
			"FP_GOR_H_Booniehat_smk",
			"FP_GOR_H_Booniehat_smk_hs",
			"FP_GOR_H_Booniehat_cropat",
			"FP_GOR_H_Booniehat_cropat_hs"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_Beta",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR"
		};
	};
};
class CfgWeapons
{
	class H_Booniehat_khk;
	class H_Booniehat_khk_hs;
	class FP_GOR_H_Booniehat_woodland: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_woodland";
		scope = 2;
		displayName = "Booniehat (M81 Woodland)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_woodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_woodland_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_woodland_hs";
		scope = 2;
		displayName = "Booniehat (M81 Woodland, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_woodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeyarid: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeyarid";
		scope = 2;
		displayName = "Booniehat (DBC Arid)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeyarid_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeyarid_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeyarid_hs";
		scope = 2;
		displayName = "Booniehat (DBC Arid, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeyarid_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeydesert: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeydesert";
		scope = 2;
		displayName = "Booniehat (DBC Desert)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeydesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeydesert_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeydesert_hs";
		scope = 2;
		displayName = "Booniehat (DBC Desert, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeydesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeywoodland: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeywoodland";
		scope = 2;
		displayName = "Booniehat (DBC Woodland)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeywoodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeywoodland_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeywoodland_hs";
		scope = 2;
		displayName = "Booniehat (DBC Woodland, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeywoodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizardc1: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizardc1";
		scope = 2;
		displayName = "Booniehat (French Lizard C1)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizardc1_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizardc1_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizardc1_hs";
		scope = 2;
		displayName = "Booniehat (French Lizard C1, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizardc1_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizarda2: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizarda2";
		scope = 2;
		displayName = "Booniehat (French Lizard A2)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizarda2_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizarda2_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizarda2_hs";
		scope = 2;
		displayName = "Booniehat (French Lizard A2, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizarda2_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizardfictional: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizardfictional";
		scope = 2;
		displayName = "Booniehat (French Lizard Fictional)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizardfictional_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizardfictional_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizardfictional_hs";
		scope = 2;
		displayName = "Booniehat (French Lizard Fictional, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizardfictional_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripejungle: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripejungle";
		scope = 2;
		displayName = "Booniehat (Tigerstripe jungle)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripejungle_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripejungle_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripejungle_hs";
		scope = 2;
		displayName = "Booniehat (Tigerstripe jungle, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripejungle_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripedesert: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripedesert";
		scope = 2;
		displayName = "Booniehat (Tigerstripe desert)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripedesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripedesert_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripedesert_hs";
		scope = 2;
		displayName = "Booniehat (Tigerstripe desert, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripedesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripenaval: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripenaval";
		scope = 2;
		displayName = "Booniehat (Tigerstripe naval)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripenaval_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripenaval_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripenaval_hs";
		scope = 2;
		displayName = "Booniehat (Tigerstripe naval, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripenaval_co.paa"};
	};
	class FP_GOR_H_Booniehat_oakleafsummer: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_oakleafsummer";
		scope = 2;
		displayName = "Booniehat (Oakleaf summer)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_oakleafsummer_co.paa"};
	};
	class FP_GOR_H_Booniehat_oakleafsummer_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_oakleafsummer_hs";
		scope = 2;
		displayName = "Booniehat (Oakleaf summer, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_oakleafsummer_co.paa"};
	};
	class FP_GOR_H_Booniehat_oakleaffall: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_oakleaffall";
		scope = 2;
		displayName = "Booniehat (Oakleaf fall)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_oakleaffall_co.paa"};
	};
	class FP_GOR_H_Booniehat_oakleaffall_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_oakleaffall_hs";
		scope = 2;
		displayName = "Booniehat (Oakleaf fall, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_oakleaffall_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscamdpcu: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscamdpcu";
		scope = 2;
		displayName = "Booniehat (AUSCAM DPCU)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscamdpcu_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscamdpcu_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscamdpcu_hs";
		scope = 2;
		displayName = "Booniehat (AUSCAM DPCU, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscamdpcu_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscammidpoint: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscammidpoint";
		scope = 2;
		displayName = "Booniehat (AUSCAM midpoint)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscammidpoint_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscammidpoint_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscammidpoint_hs";
		scope = 2;
		displayName = "Booniehat (AUSCAM midpoint, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscammidpoint_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscamdpdu: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscamdpdu";
		scope = 2;
		displayName = "Booniehat (AUSCAM DPDU)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscamdpdu_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscamdpdu_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscamdpdu_hs";
		scope = 2;
		displayName = "Booniehat (AUSCAM DPDU, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscamdpdu_co.paa"};
	};
	class FP_GOR_H_Booniehat_smk: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_smk";
		scope = 2;
		displayName = "Booniehat (SMK)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_smk_co.paa"};
	};
	class FP_GOR_H_Booniehat_smk_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_smk_hs";
		scope = 2;
		displayName = "Booniehat (SMK, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_smk_co.paa"};
	};
	class FP_GOR_H_Booniehat_cropat: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_cropat";
		scope = 2;
		displayName = "Booniehat (CROPAT)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_cropat_co.paa"};
	};
	class FP_GOR_H_Booniehat_cropat_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_cropat_hs";
		scope = 2;
		displayName = "Booniehat (CROPAT, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_cropat_co.paa"};
	};
};