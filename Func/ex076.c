#include<stdio.h>

void keisan(int a, int b, int* sum, float* avg);

main()
{
	int a, b, sum;
	float avg;

	printf("整数を入力");
	scanf("%d%d", &a, &b);

	keisan(a, b, &sum, &avg);
	printf("合計 = %d  平均 = %.2f", sum, avg);
}

void keisan(int a, int b, int* sum, float* avg)
{
	*sum = a + b;
	*avg = *sum / 2.0;
}