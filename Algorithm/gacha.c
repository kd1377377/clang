#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int atk , i;
	
	srand(time(0));
	
	for (i = 0; i < 10; i++) {
		atk = rand() % 100 + 1;
		atk = rand() % 100 + 1;
		atk = rand() % 100 + 1;
		if (atk <= 24) {
			printf("スーパーレア\n");
		}
		else if (atk <= 65) {
			printf("レア\n");
		}
		else {
			printf("ノーマル\n");
		}
	}
}