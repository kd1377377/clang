#include<stdio.h>
enum BitState
{
	Base = 0,          //00000000  通常状態
	Poison = 1<<0,     //00000001  どく状態
	Sleep = 1<<1,      //00000010  ねむり状態
	Paralysis = 1<<2,  //00000100  まひ状態
	Barn = 1<<3,       //00001000  やけど状態
	AtkUp = 1<<4,      //00010000  攻撃力アップ状態
	AtkDown = 1<<5,    //00100000  攻撃力ダウン状態
};
typedef unsigned int UINT;
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
	printf("現在の状態\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("眠り\n");
	}
	if (s & Paralysis) {
		printf("まひ\n");
	}
	if (s & Barn) {
		printf("やけど\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}
	if (s == Base) {
		printf("通常状態\n");
	}
	printf("*******************************\n");

}

void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		printf("どの状態にしますか\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了 ");
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
		printf("どの状態を解除しますか\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了 ");
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