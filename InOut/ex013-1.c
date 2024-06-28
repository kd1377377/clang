#include<stdio.h>
main()
{
	char a = '5';
	char b = '6';
	printf("%c Å~ %c = %d\n",a,b,(a-0x30)*(b-0x30));
}