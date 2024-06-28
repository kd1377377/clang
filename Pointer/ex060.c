#include<stdio.h>

main()
{
	char data[15] = "Language";
	char* p_data,ch;
	int i = 0;
	
	p_data = data;
	printf("data[] = %s\n", p_data);
	
	printf("ŒŸõ•¶š‚Í? ");
	scanf("%c", &ch);

	printf("ŒŸõŒ‹‰Ê‚Í");
	while (*p_data) {
		if (*p_data == ch) {
			printf(" %d ", i+1);
		}
		p_data++; i++;
	}
	printf("•¶š–Ú‚Å‚·\n");
}