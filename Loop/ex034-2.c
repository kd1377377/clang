#include<stdio.h>
main()
{
	int i,j;
	printf("”‚ÍH");
	scanf("%d", &i);
	do {
		j = 0;
		i--;
		while (j < 5) {
			printf("*");
			j++;
		}
		printf("\n");
	} while (i > 0);
}