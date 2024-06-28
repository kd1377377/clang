#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3

typedef unsigned int UINT;

typedef struct {
	char name[20];
	int type;
	int use_mp;
	int effect;
}Skill;

typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
}Spec;

typedef struct {
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[Skil_Num];
}Chara;

typedef struct {
	Spec sp;
	int rate;
}Mob;

enum BitState
{
	Base = 0,          //00000000  ’Êíó‘Ô
	Poison = 1<<0,     //00000001  ‚Ç‚­ó‘Ô
	Sleep = 1<<1,      //00000010  ‚Ë‚Ş‚èó‘Ô
	Paralysis = 1<<2,  //00000100  ‚Ü‚Ğó‘Ô
	Barn = 1<<3,       //00001000  ‚â‚¯‚Çó‘Ô
	AtkUp = 1<<4,      //00010000  UŒ‚—ÍƒAƒbƒvó‘Ô
	AtkDown = 1<<5,    //00100000  UŒ‚—Íƒ_ƒEƒ“ó‘Ô
};
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("Œ»İ‚Ìó‘Ô\n");
	if (s & Poison) {
		printf("“Å\n");
	}
	if (s & Sleep) {
		printf("–°‚è\n");
	}
	if (s & Paralysis) {
		printf("‚Ü‚Ğ\n");
	}
	if (s & Barn) {
		printf("‚â‚¯‚Ç\n");
	}
	if (s & AtkUp) {
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & AtkDown) {
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	if (s == Base) {
		printf("’Êíó‘Ô\n");
	}
	printf("*******************************\n");

}

void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:I—¹ ");
		scanf("%d", &a);
		
		if (a == 0) {
			break;
		}

		switch (a) {
			case 1:
				*s |= Poison;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s |= Paralysis;
				break;
			case 4:
				*s |= Barn;
				break;
			case 5:
				*s |= AtkUp;
				break;
			case 6:
				*s |= AtkDown;
				break;
		}
	}	
}

void ClearFlag(UINT* s)
{
	int a;
	while (1) {
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:I—¹ ");
		scanf("%d", &a);

		if (a == 0) {
			break;
		}

		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Barn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		}
	}
}