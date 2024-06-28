#include<stdio.h>

main()
{
	int i = 0;
	int k[20];
	char s[20];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s[0]);

	while (s[i]!='\0'){
		printf("s[%d]‚Ì•¡‡‰»ƒL[ >",i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}

	printf("•œ†‰»•¶š—ñ‚Í %s\n", &s);
}