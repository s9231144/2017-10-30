#include<stdio.h>
#include<stdlib.h>
long fa(long nu);
int main(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%2d! = %1d\n", i, fa(i));
	}
	system("pause");
	return 0;
}
long fa(long nu)
{
	if (nu <= 1)
	{
		return 1;

	}
	else
	{
		return(nu*fa(nu - 1));
	}
}