#include<stdio.h>
main()
{
	int cnt, i, sum ;
	float avg;
	sum = 0;
	cnt = 0;
	for (i=0; i != -999;) {
		cnt++;
		printf("”‚ÍH ");
		scanf("%d", &i);
		sum += i;
	}
	sum += 999;
	avg = (float)sum / ((float)cnt - 1);
	printf("‡Œv=%d\n•½‹Ï=%.2f\n", sum, avg);

}