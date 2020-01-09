// loop project test 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int row, col, count=0;
	int production[2][5];	//2 rows, 3 col dimensional array for production figures//
	char name[2][20];		//2 element 20 string name array, not dimensional//

	printf("You will be prompted for 2 sets of production hours.\n\n");
	for(row=0; row<2; row++)
	{
		printf("\n\nPlease enter employee's name:");
		scanf("%[^\n]",&name[row]);


		for(col=0; col<5; col++)
		{
			printf("\nEnter production numbers for days %d:", count+1);
			scanf("%d", &production[row][col]);
			count++;
			if(count==5)	//reset counter for 5days a week//
			count=0;
		}
		fflush(stdin);
	}

		for(row=0; row<2; row++)

		printf("\n %20s %2d %2d %2d %2d %2d", name[row], production[row][0], production[row][1], production[row][2], production[row][3], production[row][4]);


	getch();
	return 0;
}