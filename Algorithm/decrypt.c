#include<stdio.h>

main()
{
	int i = 0;
	char s[20];
	printf("文字列を入力してください");
	scanf("%s", &s[0]);

	while (s[i]!='\0'){
		s[i] -= 1;
		i++;
	}

	printf("暗号化文字列は %s\n", &s);
}