#include<stdio.h>
void display(int[]);
int main()
{
	int marks[5],i;
	printf("enter any value");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	display(marks);
	return 0;
}
void display(int marks[5])
{
	int i;
	printf("display array values \n");
	for(i=0;i<5;i++)
		{
			printf("%d",marks);
		}
	}
 
