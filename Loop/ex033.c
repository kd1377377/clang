#include<stdio.h>
main()
{
	int cnt, i, sum ;
	float avg;
	sum = 0;
	cnt = 0;
	for (i=0; i != -999;) {
		cnt++;
		printf("数は？ ");
		scanf("%d", &i);
		sum += i;
	}
	sum += 999;
	avg = (float)sum / ((float)cnt - 1);
	printf("合計=%d\n平均=%.2f\n", sum, avg);

}