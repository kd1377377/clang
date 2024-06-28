#include<stdio.h>

void hikaku(int a, int b, int c, int* max, int* min);

main()
{
	int a, b, c, max, min;

	printf("”Žš‚ð3‚Â“ü—Í");
	scanf("%d%d%d", &a ,&b, &c);

	hikaku(a, b, c, &max, &min);
	printf("Å‘å’l = %d    Å¬’l = %d", max, min);
}

void hikaku(int a, int b, int c, int* max, int* min)
{
	*max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	*min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}