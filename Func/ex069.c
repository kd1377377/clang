#include<stdio.h>

main()
{
	int a, i, sum;
	
	sum = 0; a = 0; i = 0;
	printf("数値を入力 :");
	while (scanf("%d", &a) != EOF) {
		sum += a; i++;
		printf("数値を入力 :");
	}

	printf("合計 = %d   平均 = %.2f", sum, (float)sum / i-1);
}