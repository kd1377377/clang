#include<stdio.h>

void display(int a);

main()
{
	int a;
	printf("数字を入力 :");
	scanf("%d", &a);
	display(a);
}

void display(int a) 
{
	printf("%d", a);
}