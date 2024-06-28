#include<stdio.h>
main() {
	int cnt,i;
	char data[] = "orange";
	i = 0;
	cnt = 0;

	while (data[i] != '\0') {
		cnt++;
		i++;
	}

	printf("•¶š”‚Í%d•¶š\n", cnt);
}