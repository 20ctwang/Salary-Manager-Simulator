// loop project test 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <conio.h>
int main(void)
{
	int count = 0;
	int password1;
	int password2;

	printf("Set your password and press ENTER(number only):");
	scanf("%d",&password1);
	fflush(stdin);

	do
	{
		printf("\n\nEnter your password again and press ENTER to log in");
		scanf("%d",&password2);
		fflush(stdin);

		if(password1 == password2)
		{
			printf("\n\nCongratulations!");
			count = 3;
		}
		else 
		{
			printf("Please retry entering the password to log in the program!");
			count++;
		}
	}while(count < 3);

	getch();
	return 0;
}