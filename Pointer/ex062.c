#include<stdio.h>

main()
{
	char data1[10] = "banana", * p_data1;
	char* p_data2 , data2[10];
	char* p = "peach";
	
	p_data1 = data1;
	p_data2 = data2;
	while (*p_data1) {
		*p_data2++ = *p_data1++;
	}
	*p_data2++;*p_data2 = '\0';

	p_data1 = data1;
	while (*p) {
		*p_data1++ = *p++;
	}
	p_data1++; *p_data1 = '\0';
	
	p_data1 = data1; 
	while (*p_data1) {
		putchar(*p_data1++);
	}
	putchar('\n');
	p_data2 = data2;
	while (*p_data2) {
		putchar(*p_data2++);
	}
	putchar('\n');
}