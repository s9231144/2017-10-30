

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char s1[60] = "Welcome";
	char s2[60];
	int len;
	strcpy_s(s2, s1);
	printf("string2=%s\n", s2);
	len = strlen(s2);
	printf("�r����׬�%d\n", len);
	system("pause");
	return 0;
}