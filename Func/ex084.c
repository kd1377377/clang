#include<stdio.h>

void revers(char* p, char* q);

main()
{
	char str1[128],str2[128];
	
	printf("•¶Žš—ñ? :");
	scanf("%s", str1);
	revers(str1, str2);
	
	printf("s1 : %s\n", str1);
	printf("s2 : %s\n", str2);
}

void revers(char* p, char *q) {
	int i,j;
	for (i = 0; *(p + 1) != '\0'; i++) {
		p++;
	}
	for (j = 0; j <= i; j++) {
		*q++ = *p--;
	}
	*q = '\0';
}