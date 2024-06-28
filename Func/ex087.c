#include<stdio.h>
#include<stdlib.h>

main(int argc, char* argv[])
{
	int i,sum,a;
	for (i = 1,sum=0; i < argc; i++) {
		a = atoi(argv[i]);
		printf("%d ", a);
		sum += a;
		if (i + 1 < argc) {
			printf("+ ");
		}
	}
	printf("= %d", sum);
}