#include<stdio.h>

void hikaku(int a, int b, int c, int* max, int* min);

main()
{
	int a, b, c, max, min;

	printf("数字を3つ入力");
	scanf("%d%d%d", &a ,&b, &c);

	hikaku(a, b, c, &max, &min);
	printf("最大値 = %d    最小値 = %d", max, min);
}

void hikaku(int a, int b, int c, int* max, int* min)
{
	*max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	*min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}