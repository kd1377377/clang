#include<stdio.h>
main()
{
	int i, j, k , n;
	printf("”‚ÍH");
	scanf("%d", &n);
	k = 0;
	do {
		i = 0;
		j = 0;
		k++;
		while (n - i - k > 0) {
			printf(" ");
			j++;
			i++;
		}
		while (n-j > 0) {
			printf("*");
			j++;
		}
		printf("\n");
	} while (n != k);
}

/*#include<stdio.h>
main()
{
	int i, n;
	
	printf("”‚ÍH : ");
	scanf("%d", &n);

	do {
		i = 0;
		while (n - i + 1 > 0) {
			i++;
			printf(" ");
		}

		while (n - i > 0) {
			i++;
			printf("*");
		}

		printf("\n");
		n--;
	} while (n > 0);
}*/