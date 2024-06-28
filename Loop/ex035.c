#include<stdio.h>
main()
{
	int no, sum;
	sum = 0;
	while (1) {
		printf("”‚ğ“ü—Í : ");
		scanf("%d", &no);
		if (no == -999) {
			break;
		}
		sum += no;
	}
	printf("‡Œv = %d\n", sum);
}