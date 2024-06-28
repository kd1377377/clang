#include<stdio.h>

main()
{
	char cha[256];
	int i=0;

	scanf("%s", &cha);
	while (cha[i] != '\0') {
		printf("%c", cha[i] - 1);
		i++;
	}
}