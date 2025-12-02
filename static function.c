#include<stdio.h>
void display(int[]);
int main()
{
	int marks[]={1,2,3,4,5};
	display(marks);
	return 0;
}
void display(int marks[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf(" %d",marks[i]);
	}
}
