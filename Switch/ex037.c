#include<stdio.h>
main()
{
	char ch;
	printf("���Z�q�����");
	scanf("%c", &ch);

	switch (ch){
		case'+':
			printf("���Z�ł�\n");
			break;
		case'-':
			printf("���Z�ł�\n");
			break;
		case'*':
			printf("��Z�ł�\n");
			break;
		case'/':
			printf("���Z�ł�\n");
			break;
		case'%':
			printf("���܂�ł�\n");
			break;
		default:
			printf("�G���[\n");
	}
	
}