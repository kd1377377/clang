#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i, y;
	srand(time(0));

	y = rand() % 3;
	y = rand() % 3;

	printf("(1:グー 2:チョキ 3:パー)");
	scanf("%d", &i);

	printf("\nプレイヤーは");
	switch (i)
	{
	case 1:printf("グー\n");
		break;
	case 2:printf("チョキ\n");
		break;
	case 3:printf("パー\n");
		break;

	default:printf("エラー\n");
	}
	i--;

	printf("\nコンピュータは");
	switch (y)
	{
	case 0:printf("グー\n");
		break;
	case 1:printf("チョキ\n");
		break;
	case 2:printf("パー\n");
		break;

	}

	if (i == y) {
		printf("あいこです");
	}

	if ((i + 1) % 3 == y){
		printf("プレイヤーの勝ちです");
	}
	if (i == (y + 1) % 3){
		printf("プレイヤーの負けです");
	}


	/*switch (i) {
	case0: {
		switch (y) {
		case0:printf("あいこです\n");
			break;

		case1:printf("プレイヤーの勝ちです\n");
			break;

		case2:printf("プレイヤーの負けです\n");
			break;

		}

	}
		break;

	case1: {
		switch (y) {
		case0:printf("プレイヤーの負けです\n");
			break;

		case1:printf("あいこです\n");
			break;

		case2:printf("プレイヤーの勝ちです\n");
			break;

			break;
		}
	}

	case2: {
		switch (y) {
		case0:printf("プレイヤーの勝ちです\n");
			break;
	
		case1:printf("プレイヤーの負けです\n");
			break;
				
		case2:printf("あいこです\n");
			break;
	
		}
		break;
	}

		default:printf("エラー\n");
	
	}
	*/

}
