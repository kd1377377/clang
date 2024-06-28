#include<stdio.h>
main()
{
	int i,j,n;
	printf("”‚ÍH");
	scanf("%d", &i);
	n = 0;
	do {
		n++;
		i--;
		j = 0;
		while (n>j) {
			printf("*");
			j++;
		}
		printf("\n");
	} while (i > 0);
}