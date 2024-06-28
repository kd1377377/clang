#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i, j, data[20], work, target;

	for(i=0;i<20;i++){
		data[i] = i+1;
	}

	i = 19;
	srand(time(0));
	
	/*for (i = 0; i < 20; i++) {
		target = rand() % 20;

		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}*/
	while (i > 0) {
		target = rand() % i;

		work = data[i];
		data[i] = data[target];
		data[target] = work;

		i--;
	}
	

	for (j = 0; j < 20; j++) {
		printf("%d\n", data[j]);
	}
}