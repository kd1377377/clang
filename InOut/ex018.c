#include<stdio.h>
main()
{
	int d1, d2, d3, sum;
	float avg;
	printf("整数を3つ入力 : ");
	scanf("%d%d%d",&d1,&d2,&d3);
	sum = d1 + d2 + d3;
	avg =(float)sum / 3;
	printf("合計 = %d    平均 = %.2f", sum, avg);
	
}