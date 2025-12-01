#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter string1,string2 names");
	scanf("%s%s",&s1,&s2);
	strcpy(s2,s1);
	printf("original string=%s",s1);
	printf("copied string=%s",s2);
	return 0;
}
