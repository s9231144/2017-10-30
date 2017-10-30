#include<stdio.h>
#include<stdlib.h>
int m( int x,int y, int z);
int main(void)
{
	int n1;
	int n2;
	int n3;
	printf("Enter three intergers:");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("Maxium is: %d\n", m(n1, n2, n3));
	system("pause");
	return 0;
}
int m(int x, int y, int z)
{
	int max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return max;
}