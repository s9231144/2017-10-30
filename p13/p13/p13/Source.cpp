#include<stdio.h>
#include<stdlib.h>
double p(double,int);
int main(void)
{
	int k; double a;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k); a = p(3.5, k);
	printf("3.5��%d����=%f\n", k, a);
	system("pause");
}
double p(double x, int n)
{
	int i; double p = 1;
	for (i = 1; i <= n; i++)
		p = p*x;
	return p;
}
