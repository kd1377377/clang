#include<stdio.h>

void display(int a);

main()
{
	int a;
	printf("��������� :");
	scanf("%d", &a);
	display(a);
}

void display(int a) 
{
	printf("%d", a);
}