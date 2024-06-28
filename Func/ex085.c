#include<stdio.h>

void puls(char* p, char* q,char *str);

main()
{
	char str1[128],str2[128],str[256];
	
	printf("•¶Žš—ñ1? :");
	scanf("%s", str1);
	printf("•¶Žš—ñ2? :");
	scanf("%s", str2);

	puls(str1, str2, str);
	puts(str);
	
}

void puls(char* p, char *q,char *str) {
	while (*p != '\0') {
		*str++ = *p++;
	}
	while (*q != '\0') {
		*str++ = *q++;
	}
	*str = '\0';
	
}