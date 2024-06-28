#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int dise;

	srand(time(0));
	dise = rand()%6+1;
	printf("サイコロは%dです\n", dise);
	dise = rand()%6+1;
	printf("サイコロは%dです\n", dise);
	dise = rand()%6+1;
	printf("サイコロは%dです\n", dise);

}