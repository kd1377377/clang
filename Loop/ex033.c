#include<stdio.h>
main()
{
	int cnt, i, sum ;
	float avg;
	sum = 0;
	cnt = 0;
	for (i=0; i != -999;) {
		cnt++;
		printf("���́H ");
		scanf("%d", &i);
		sum += i;
	}
	sum += 999;
	avg = (float)sum / ((float)cnt - 1);
	printf("���v=%d\n����=%.2f\n", sum, avg);

}