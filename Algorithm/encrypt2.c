#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i,n;
	int k[20];
	char s[20];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s[0]);

	i = 0;
	srand(time(0));
	while (s[i]!='\0'){
		k[i] = rand() % 6;
		s[i] += k[i];
		i++;
	}
	
	printf("ˆÃ†‰»•¶š—ñ‚Í %s\n", &s);

	n = 0;
	while (s[n] != '\0') {
		printf("%d", k[n]);
		n++;
	}
	printf("\n");
}