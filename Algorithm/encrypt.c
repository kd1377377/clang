#include<stdio.h>

main()
{
	int i = 0;
	char s[20];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s[0]);

	while (s[i]!='\0'){
		s[i] += 1;
		i++;
	}

	printf("ˆÃ†‰»•¶š—ñ‚Í %s\n", &s);
}