#include<stdio.h>
main()
{
	int no;
	printf("0�`100�܂ł̐���");
	scanf("%d", &no);
	
	if (no > 100) {
		printf("���̐��l�̔��茋�ʂ́u�G���[�v�ł�\n");
	}
	else if (no >= 90) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�\n");
	}
	else if (no >= 80) {
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�\n");
	}
	else if (no >= 50) {
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�\n");
	}
	else if (no >= 30) {
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�\n");
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�\n");
	}
}