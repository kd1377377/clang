#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i, y;
	srand(time(0));

	y = rand() % 3;
	y = rand() % 3;

	printf("(1:�O�[ 2:�`���L 3:�p�[)");
	scanf("%d", &i);

	printf("\n�v���C���[��");
	switch (i)
	{
	case 1:printf("�O�[\n");
		break;
	case 2:printf("�`���L\n");
		break;
	case 3:printf("�p�[\n");
		break;

	default:printf("�G���[\n");
	}
	i--;

	printf("\n�R���s���[�^��");
	switch (y)
	{
	case 0:printf("�O�[\n");
		break;
	case 1:printf("�`���L\n");
		break;
	case 2:printf("�p�[\n");
		break;

	}

	if (i == y) {
		printf("�������ł�");
	}

	if ((i + 1) % 3 == y){
		printf("�v���C���[�̏����ł�");
	}
	if (i == (y + 1) % 3){
		printf("�v���C���[�̕����ł�");
	}


	/*switch (i) {
	case0: {
		switch (y) {
		case0:printf("�������ł�\n");
			break;

		case1:printf("�v���C���[�̏����ł�\n");
			break;

		case2:printf("�v���C���[�̕����ł�\n");
			break;

		}

	}
		break;

	case1: {
		switch (y) {
		case0:printf("�v���C���[�̕����ł�\n");
			break;

		case1:printf("�������ł�\n");
			break;

		case2:printf("�v���C���[�̏����ł�\n");
			break;

			break;
		}
	}

	case2: {
		switch (y) {
		case0:printf("�v���C���[�̏����ł�\n");
			break;
	
		case1:printf("�v���C���[�̕����ł�\n");
			break;
				
		case2:printf("�������ł�\n");
			break;
	
		}
		break;
	}

		default:printf("�G���[\n");
	
	}
	*/

}
