#include<stdio.h>

int gokei(int a, int b, int c);
float heikin(int sum);
main()
{
	int a, b, c, sum;
	float avg;
	printf("整数を3つ入力 : ");
	scanf("%d%d%d", &a, &b, &c);
	sum = gokei(a, b, c);
	printf("答えは%dです\n", sum);
	avg = heikin(sum);
	printf("答えは%.2fです\n", avg);
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