#include<stdio.h>
main()
{
	char cha;
	printf("小文字を入力 : ");
	scanf("%c", &cha);
	printf("大文字に変換 : %c", cha - 0x20);
}