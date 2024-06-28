#include<stdio.h>

void keisan(int a, int b, int* sum, float* avg);

main()
{
	int a, b, sum;
	float avg;

	printf("®”‚ğ“ü—Í");
	scanf("%d%d", &a, &b);

	keisan(a, b, &sum, &avg);
	printf("‡Œv = %d  •½‹Ï = %.2f", sum, avg);
}

void keisan(int a, int b, int* sum, float* avg)
{
	*sum = a + b;
	*avg = *sum / 2.0;
}