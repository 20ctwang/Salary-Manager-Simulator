// loop project test 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d,e,f,g;

	for(a=1;a<=3;a++)
	{
		printf("Enter years you have been in position %d:",a);
		scanf("%d",&b);
		c=b*100;
		printf("\n");
		printf("%d",c);
		printf("\n");
		if(a==1)
		{
			d=b*100;
			printf("\ntotal:%d",d);
		}
		else if(a==2)
			e=b*100;
		else if(a==3)
		{
			f=b*100;
			g=d+e+f;
			printf("total is %d",g);
		}	
	}
	printf("\n%d,%d,%d",d,e,f);
	getch();
	return 0;
}