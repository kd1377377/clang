#include<stdio.h>
#define DATA_END 8

int getmax(int data[]);
int getmin(int data[]);


main()
{
	int data[] = { 6,10,8,2,9,5,1,7 }, max,min;
	max = getmax(data);
	min = getmin(data);
	printf("Å‘å’l=%d\nÅ¬’l=%d\n", max,min);
}

int getmax(int data[])
{
	int i, max;
	for (i = 0, max = 0; i < DATA_END; i++) {
		if (max < data[i]) {
			max = data[i];
		}
	}
	return max;
}
int getmin(int data[])
{
	int i, min;
	for (i = 0, min = 100; i < DATA_END; i++) {
		if (min > data[i]) {
			min = data[i];
		}
	}
	return min;
}
