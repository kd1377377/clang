#include<stdio.h>

main()
{
	char data[15] = "Language";
	char* p_data,ch;
	int i = 0;
	
	p_data = data;
	printf("data[] = %s\n", p_data);
	
	printf("検索文字は? ");
	scanf("%c", &ch);

	printf("検索結果は");
	while (*p_data) {
		if (*p_data == ch) {
			printf(" %d ", i+1);
		}
		p_data++; i++;
	}
	printf("文字目です\n");
}