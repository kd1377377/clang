#include<stdio.h>

void display1(int n1);
void display2(int* n2);

main()
{
	int a, b;
	printf("���la : ");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);

	printf("���lb : ");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
}

void display1(int n1)
{
	printf("���la�́A%d�ł�\n", n1);
	n1 += 10;
}

void display2(int* n2)
{
	printf("���lb�́A%d�ł�\n", *n2);
	*n2 += 10;
}