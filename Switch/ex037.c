#include<stdio.h>
main()
{
	char ch;
	printf("‰‰Zq‚ğ“ü—Í");
	scanf("%c", &ch);

	switch (ch){
		case'+':
			printf("‰ÁZ‚Å‚·\n");
			break;
		case'-':
			printf("Œ¸Z‚Å‚·\n");
			break;
		case'*':
			printf("æZ‚Å‚·\n");
			break;
		case'/':
			printf("œZ‚Å‚·\n");
			break;
		case'%':
			printf("‚ ‚Ü‚è‚Å‚·\n");
			break;
		default:
			printf("ƒGƒ‰[\n");
	}
	
}