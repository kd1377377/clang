#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int luk;

	srand(time(0));
	luk = rand() % 5 + 1;
	luk = rand() % 5 + 1;
	luk = rand() % 5 + 1;
	printf("今日の運勢は ");
	while (luk > 0) {
		printf("☆");
		luk--;
	}
	printf("です\n");
	
}