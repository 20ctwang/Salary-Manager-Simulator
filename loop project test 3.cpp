// loop project test 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main(void)
{
	
	int baseNum;
	int timesNum;
	int diffNum;
	int nextNum;
	int totalSalary;
	int livingNum=10;
	int leftTotal;
	int nextNum2;
	int count1;
	int count2;
	int count3;

	printf("starting salary set and Enter:");
	scanf("%d",&baseNum);
	fflush(stdin);
	printf("\nhow many times the salary has increased set and ENTER");
	scanf("%d",&timesNum);
	fflush(stdin);
	printf("\ndifference between each salary set and ENTER");
	scanf("%d",&diffNum);
	fflush(stdin);
	for(count1=1;count1<=2;count1++)
	{	
		for(count2=1;count2<=timesNum;count2++)
		{
			nextNum = baseNum + (diffNum * count2);
			printf("%d",nextNum);
			printf("\n");	
		}

		if(count1==1)
		{
			totalSalary = timesNum*baseNum + timesNum*(timesNum-1)*diffNum/2;
			printf("\nYour total salary these years are %d",totalSalary);
			getch();
			system("cls");
			printf("\n\n");
		}
		else if(count1==2)
		{
			for(count3=1;count3<=timesNum;count3++)
			{
				nextNum2 = baseNum + (diffNum * count3) - livingNum;
				printf("%d",nextNum2);
				printf("\n");
			}
			leftTotal=totalSalary-livingNum*timesNum;
			printf("\nTotal money you saved these years are %d",leftTotal);
		}


	}


	getch();
	return 0;
}


