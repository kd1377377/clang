#include<stdio.h>
main()
{
	char ch;
	printf("演算子を入力");
	scanf("%c", &ch);

	switch (ch){
		case'+':
			printf("加算です\n");
			break;
		case'-':
			printf("減算です\n");
			break;
		case'*':
			printf("乗算です\n");
			break;
		case'/':
			printf("除算です\n");
			break;
		case'%':
			printf("あまりです\n");
			break;
		default:
			printf("エラー\n");
	}
	
}