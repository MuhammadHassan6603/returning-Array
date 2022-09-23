//Returning Array and Accessing it main function

#include<stdio.h>
int *display()
{
	static int marks[]={10,20,30,40,50,60};
	return marks;
}
void main()
{
	int *p;
	p=display();
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d\t",*(p+i));
		//p++;
	}
}
