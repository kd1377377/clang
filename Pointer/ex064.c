#include<stdio.h>

main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };

	while (*p_ride[0]) {
		putchar(*p_ride[0]++);
		putchar('\n');
	}
	putchar('\n');

	while (*p_ride[1]) {
		putchar(*p_ride[1]++);
		putchar('\n');
	}
	putchar('\n');

	while (*p_ride[2]) {
		putchar(*p_ride[2]++);
		putchar('\n');
	}
	putchar('\n'); 


}