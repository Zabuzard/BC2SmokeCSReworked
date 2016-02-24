class cfgPatches
{
	class Zab_bc_smokecs_reworked
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F", "Blastcore_SmokeCS"};
		author[] = {"[W] Zabuza"};
	};
};

class cfgCloudlets
{
	class Default;
	class SmokeShellWhite : Default
	{
		lifeTime=20;//4
		moveVelocity[]={0,0.30000001,0};//{0,0,0}
		weight=10.05;//10.1
		size[]={0.31,3,12};//{0.31,3}
		randomDirectionPeriod=0.30000001;//0
		randomDirectionIntensity=0.15000001;//0
		MoveVelocityVar[]={1,0.4,1};//{0.2,0.2,0.2}
		rotationVelocityVar=25;//20
	};
};