#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int atk;
	float luk;

	srand(time(0));
	atk = rand() % 100 + 1;
	atk = rand() % 100 + 1;
	atk = rand() % 100 + 1;
	
	srand(time(0));
	luk = (rand() %  200 +100)/100;
	luk = (rand() %  200 +100)/100;
	luk = (rand() %  200 +100)/100.0;
	
	//printf("%f\n", luk);
	//printf("%d\n", atk);

	if (atk <= 30*luk) {
		printf("かいしんのいちげき!");
	}
	else if (atk >= 95) {
		printf("こうげきははずれた!");
	}
	else {
		printf("つうじょうこうげき!");
	}
}