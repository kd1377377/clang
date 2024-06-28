#include<stdio.h>
main()
{
	int i = 0;
	char chr1[64], chr2[64], temp[64];

	printf("•¶Žš—ñ1‚ð“ü—Í : ");
	scanf("%s", &chr1[0]);
	
	printf("•¶Žš—ñ2‚ð“ü—Í : ");
	scanf("%s", &chr2[0]);

	while (chr1[i] != '\0') {
		temp[i] = chr1[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	
	while (chr2[i] != '\0') {
		chr1[i] = chr2[i];
		i++;
	}
	chr1[i] = '\0';
	i = 0;

	while (temp[i] != '\0') {
		chr2[i] = temp[i];
		i++;
	}
	chr2[i] = '\0';



	printf("•¶Žš—ñ1 = %s\n", &chr1[0]);
	printf("•¶Žš—ñ2 = %s\n", &chr2[0]);
}