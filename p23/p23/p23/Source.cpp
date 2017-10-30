#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int ro(void);
enum status{co,wo,lo};
int main(void)
{
	int sum;
	int mp;
	enum status ga;
	srand(time(NULL));
	sum = ro();
	switch (sum)
	{
	case 7:
	case 11:
		ga = wo;
		break;
	case 2:
	case 3:
	case 12:
		ga = lo;
		break;
	default:
		ga = co;
		mp = sum;
		printf("Point is %d\n", mp);
		break;
	}
	while (ga==co)
	{
		sum = ro();
		if (sum == mp)
		{
			ga = wo;
		}
		else
		{
			if (sum == 7)
			{
				ga = lo;
			}
		}
	}
	if (ga == wo)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("Player loses\n");
	}
	system("pause");
	return 0;
}
int ro(void)
{
	int d1;
	int d2;
	int wo;
	d1 = 1 + (rand()%6);
	d2 = 1 + (rand()%6);
	wo = d1 + d2;
	printf("Player rolled %d + %d = %d\n", d1, d2, wo);
	return wo;
}