#include<stdio.h>

int gokei(int a, int b, int c);
float heikin(int sum);
main()
{
	int a, b, c, sum;
	float avg;
	printf("������3���� : ");
	scanf("%d%d%d", &a, &b, &c);
	sum = gokei(a, b, c);
	printf("������%d�ł�\n", sum);
	avg = heikin(sum);
	printf("������%.2f�ł�\n", avg);
}

int gokei(int a,int b,int c)
{
	int sum;
	sum = a + b + c;
	return sum;
}

float heikin(int sum)
{
	float avg;
	avg = sum / 3.0;
	return avg;
}