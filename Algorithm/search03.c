#include<stdio.h>

main()
{
	int high, low, mid, s;
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 };

	printf("’Tõ’l‚ğ“ü—Í");
	scanf("%d", &s);

	high = 10; low = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		if (d[mid] == s) {
			break;
		}
		if (d[mid] > low) {
			low = mid + 1;
		}
		if (d[mid] < high) {
			high = mid - 1;
		}
	}

	if (low > high) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½\n", mid);
	}
}