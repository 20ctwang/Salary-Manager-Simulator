// Chuting Wang Loops Project.cpp : Defines the entry point for the console application.
//

/*-------------Chuting Wang Loops Project-------------*/
/*     This program uses funtions. It will prompt     */
/*     user to enter a username and password.         */
/*                                                    */
/*  Then users enter the password again to log in     */
/*  and three chances of try are provided in total    */
/*  Users can determine how many kinds of positions   */
/*  and yearly income they want.                      */
/*                                                    */
/*  Users also they need to determine position Name,  */
/*  Number of people each position has and Position   */
/*  Salary before viewing the information they enter  */
/*                                                    */
/*  Users can exit the program whenever they want.    */
/*                                                    */
/*  Once users start the main menu, it is recommended */
/*  to select numbers 1-7 in order.                   */
/*                                                    */
/*     PROGRAM ID:Chuting Wang loops project          */ 
/*     PROGRAMMER:Chuting Wang                        */
/*     DATE:April 16,2018                             */ 
/*                                                    */
/*----------------------------------------------------*/
/*----------PREPORCESSING DIRECTIVES----------------*/
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
/*--------------Mainline Control---------------------*/
int main(void)
{
/*----------------------TITLE------------------------*/

	system("TITLE Chuting Wang Loops Project");

/*-------------declare local variables--------------*/
//log in
	char username[30];                                    //username
	char pin1[25];                                        //password when creating account
	char pin2[25];                                        //password when logging in 
	int count;                                            //chances left for reentering password to log in 

//position information
	char positionName[30];                                //position names
	char a[30],b[30],c[30],d[30],e[30],f[30],g[30];       //copy of position name 1 to 7
	int positionNum=0;	                                  //number of people for each position
	int h,i,j,k,l,m,n;                                    //copy of number of people for position 1 to 7
	int kinds;                                            //total number of kinds of position 
	int kind;                                             //order of position 1 to 7
	float yearIncome=0;                                   //company's year income
	float salary=0;                                       //position salary 
	float o=0;                                            //copy of company's year income
	float p,q,r,s,t,u,v;                                  //copy of salary for position 1 to 7
	float x1,x2,x3,x4,x5,x6,x7;                           //average salary for position 1 to 7

//condition and loop
	char choice1;                                         //prompt users determine continue or return
	int z=0;                                              //decide if users select 1 before 2
	int z1=0;                                             //decide if users select 3 bdfore 4
	int z2=0;                                             //decide if users select 5 before 6
	int flag=0;                                           //decide if stay in or return do while
	int menu;                                             //main menu choice


/*set color*/
	HANDLE h1 = GetStdHandle(STD_OUTPUT_HANDLE);  
	WORD wOldColorAttrs;                                                                                               
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;                                                               
	GetConsoleScreenBufferInfo(h1, &csbiInfo);                                                                                       
	wOldColorAttrs = csbiInfo.wAttributes;

	
/*Greetings*/
    system ("color F0"); //background and foreground colour
	printf("\n\n\t\t\t\t====================================================");
	printf("\n\t\t\t\t|                                                  |");											
	printf("\n\t\t\t\t|                 THE SIMS COMPANY                 |");		
	printf("\n\t\t\t\t|                 By: CHUTING WANG                 |");		
	printf("\n\t\t\t\t|                                                  |");		
	printf("\n\t\t\t\t====================================================\n\n"); 
	printf("\n\t\t\t\t            Welcome to THE SIMS COMPANY!");
	printf("\n\t\t\t\t          You can create your own company");
	printf("\n\t\t\t\tby creating and editing all positions in your company!\n");
	printf("\n\t\t\t\t             Press <ENTER> and START!");
	getch(); //hold screen until user presses enter
	system("cls"); //clear screen

/*Creating Account*/


	system ("color D"); //foreground colour
	printf("\n\t\t\t\t       .d8888b. 8888888 888b     d888  .d8888b. "); 
	printf("\n\t\t\t\t     d88P  Y88b  888   8888b   d8888 d88P  Y88b");
	printf("\n\t\t\t\t      Y88b.       888   88888b.d88888 Y88b.     ");
	printf("\n\t\t\t\t        Y888b.    888   888Y88888P888   Y888b.  ");  
	printf("\n\t\t\t\t           Y88b.  888   888 Y888P 888      Y88b.");
	printf("\n\t\t\t\t             888  888   888  Y8P  888        888"); 
	printf("\n\t\t\t\t      Y88b  d88P  888   888       888 Y88b  d88P");
	printf("\n\t\t\t\t       Y8888P  8888888 888       888   Y8888P  \n\n");
	printf("\n\t\t       .d8888b.   .d88888b.  888b     d888 8888888b.     d8888 888b    888 Y88b   d88P    "); 
	printf("\n\t\t      d88P  Y88b d88P   Y88b 8888b   d8888 888   Y88b   d88888 8888b   888  Y88b d88P     ");
	printf("\n\t\t      888    888 888     888 88888b.d88888 888    888  d88P888 88888b  888   Y88o88P      ");
	printf("\n\t\t      888        888     888 888Y88888P888 888   d88P d88P 888 888Y88b 888    Y888P       ");  
	printf("\n\t\t      888        888     888 888 Y888P 888 8888888P  d88P  888 888 Y88b888     888        ");
	printf("\n\t\t      888    888 888     888 888  Y8P  888 888      d88P   888 888  Y88888     888        "); 
	printf("\n\t\t      Y88b  d88P Y88b. .d88P 888       888 888     d8888888888 888   Y8888     888        ");
	printf("\n\t\t        Y8888P     Y88888P   888       888 888    d88P     888 888    Y888     888        ");
		
	//prompt users enter username and password
	printf("\n\n\t\t\tHello! We have noticed that you do not have your own account yet.");
	printf("\n\t\tPlease Enter your username and password following to start building your own account!");
	
	SetConsoleTextAttribute ( h1, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY); //foreground colour
	printf("\n\n\t\t\t\t\t\tUSERNAME:");
	scanf("%[^\n]",username);
	fflush(stdin);	
	printf("\n\t\t\t\t\t\tPASSWORD:");
	scanf("%[^\n]",&pin1);
	fflush(stdin);
	SetConsoleTextAttribute ( h1,FOREGROUND_RED |FOREGROUND_BLUE|FOREGROUND_INTENSITY); //foreground colour

/*log in*/
	do
	{
		system("cls");        //clear screen
		printf("\n\t\t\t\t\tHello %s!!!\n",username);
		printf("\n\t\t\tTo log in, please enter your password following.\n");
		printf("\n\t\t\t\t\tPASSWORD:");  //users enter password again
		scanf("%[^\n]",&pin2);
		fflush(stdin);
		flag = flag + 1;

		if(strcmp(pin1,pin2)==0)
		{
			system("cls");      //clear screen
			system("color D"); //foreground color
			SetConsoleTextAttribute ( h1, FOREGROUND_GREEN | FOREGROUND_INTENSITY); //foreground colour
			printf("\n\t\t\t\t\t\tCORRECT!\n\n");
			SetConsoleTextAttribute ( h1, FOREGROUND_BLUE |FOREGROUND_RED | FOREGROUND_INTENSITY ); //foreground colour
			printf("\n\t\t\t\tNow select the letter following to continue or exit.\n\n\n");
   /*start*/
			do 
			{
				printf("\n\t\t\t\tStart building company!-----------------------------'a'\n\n");
				printf("\n\t\t\t\tExit------------------------------------------------'b'\n\n");
				printf("\n\t\t\t\t                                          Your choice:");
				choice1 = _getch();  //restrict user to enter one character only
				fflush(stdin);
				if(choice1 == 'a')
				{

					system("cls");    //clear screen
					printf("\n\t\t\t\tNow let's start building your own company!\n\n");
					flag = 2;

		  /*enter year income*/
		  			do
					{   
						system("cls");
						printf("\n\t\t\t\tTo arrange employee's salary, you need to know what your");
						printf("\n\t\t\t\tcompany's income is and how many positions in the company!");
						printf("\n\t\t\t\tNow please enter your expected company's year income and ");
						printf("\n\t\t\t\t     how many position you want for your company!\n\n");
						SetConsoleTextAttribute ( h1, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY); //foreground colour
						printf("\n\t\t\t\t\tCOMPANY'S YEAR INCOME:$");
						scanf("%f",&yearIncome);
						fflush(stdin);
						o = yearIncome;
					
						if(yearIncome==0)
						{
							system("cls");
							printf("\n\n\t\t\t\t\tyou have entered an invalid number!");							
							printf("\n\t\t\t\t\tPress <ENTER> to try again!");
							flag=1;
						}
						else
						{
							flag=2;
						}
					}while(flag < 2); // if flag<2, restart this do-while, others exit

		  /*enter number of kinds of position*/
					do
					{
						printf("\n\t\t\t\t\tNUMBER OF KINDS OF POSITIONS");
						printf("\n\t\t\t\t\t (less than or equal to 7):");
						scanf("%d",&kinds);
						fflush(stdin);
						if((kinds >= 1) && (kinds <= 7))
							flag = 2;
						else
						{
							system("cls"); //clear screen
							printf("\n\t\t\t\tYour have entered an invalid number!");
							printf("\n\n\t\t\t\tPress <ENTER> to try again and enter"); 
							printf("\n\t\t\t\tnumber less than or equal to 7!");
							flag = 1;
							getch();        //hold screen
							system("cls"); //clear screen
						}
						
					}while(flag < 2); // if flag<2, restart this do-while, others exit
					SetConsoleTextAttribute ( h1,FOREGROUND_RED |FOREGROUND_BLUE|FOREGROUND_INTENSITY); //foreground colour

					printf("\n\t\t\t\tSo now you are running a company with %d kinds of positions",kinds);
					printf("\n\t\t\t\t           with a yearly income of $%.2f.",yearIncome);
					printf("\n\t\t\t\t             Press <ENTER> to continue!");
					getch();  //hold screen
					system("cls");  //clear screen
/*main menu*/
					do 
					{
						system("color B1");	//background and foreground colour
						printf("\n\n\t\t\t-----------------------------Menu-------------------------------");
						printf("\n\n\t\t\tEnter/Edit Position Name---------------------------------------1");
						printf("\n\n\t\t\tView Position Name---------------------------------------------2");
						printf("\n\n\t\t\tEnter/Edit Position Number of People --------------------------3");
						printf("\n\n\t\t\tView Position Number of people---------------------------------4");
						printf("\n\n\t\t\tEnter/Edit Position Salry--------------------------------------5");
						printf("\n\n\t\t\tView Position Salary(total and average)------------------------6");
						printf("\n\n\t\t\tView Company's Arrangement-------------------------------------7");
						printf("\n\n\t\t\tRestart building company---------------------------------------8");
						printf("\n\n\t\t\tExit-----------------------------------------------------------9");
						printf("\n\n\t\t\t                                                   Your Choice: ");
						scanf("%d",&menu);    //users select numbers
						fflush(stdin);

						switch(menu)
						{

/*users determine position name*/
						case 1:
							{
								system("color 8F"); //background and foreground colour
								system("cls");      //clear screen
								for(kind=1;kind<=kinds;kind++)
								{
									//prompt users enter position name 
									printf("\n\t\t\t\t\tPlease enter NAME for your position %d:",kind);
									scanf("%[^\n]",positionName);
									fflush(stdin);

									if(kind == 1)
										strcpy(a,positionName);  //copy position 1 name to a 
									//https://www.programmingsimplified.com/c/source-code/c-program-copy-strings

									else if(kind == 2)
										strcpy(b,positionName);  //copy position 2 name to b

									else if(kind == 3)
										strcpy(c,positionName);  //copy position 3 name to c

									else if(kind == 4)
										strcpy(d,positionName);  //copy position 4 name to d

									else if(kind == 5)
										strcpy(e,positionName);  //copy position 5 name to e

									else if(kind == 6)
										strcpy(f,positionName);  //copy position 6 name to f

									else if(kind == 7)
										strcpy(g,positionName);  //copy position 7 name to g

								}

							/*users determine to continue or exit*/
								do 
								{
									printf("\n\n\n\t\t\t\t\tPress 'a' to go back to main menu and press 'b' to exit.");
									choice1 = _getch();  //restrict user to enter one character only
									fflush(stdin);
									if(choice1 == 'a')
									{
										flag = 2;
										system("cls"); //clear screen
									}
									else if(choice1 == 'b')
										flag = 6;
									else 
									{
										system("cls");  //clear screen
										printf("\n\t\t\t\t\tYou have entered an invalid letter!");
										printf("\n\t\t\t\t\tPlease try again and enter letter 'a' or 'b'!");
										flag = 1;
									}
								}while(flag < 2);// if flag<2, restart this do-while, others exit
								z = 1; //if users select 1, z = 1, otherwise z = 0
							}
							break;
/*users view position name*/    
						case 2:
							{
								system("cls");  //clear screen
								system("color 8E"); //background and foreground colour
								if(z!=1)
								{
									//prompt users to go back and enter position name 
									printf("\n\t\t\t\t\tYou have not set up your position name yet!");
									printf("\n\t\t\t\t\tPress <ENTER> to return to main menu and");
									printf("\n\t\t\t\t\tset your position name before viewing it!");
									getch();  //hold screen
									system("cls");  //clear screen
									flag = 2;
								}
								else 
								{
									//position name printed to screen
									if(kinds == 1)
										printf("\n\n\n\t\t\t\t\tYour position 1 name is %s.",a);
									else if (kinds == 2)
									{
										printf("\n\n\n\t\t\t\t\tYour position 1 name is %s.",a);
										printf("\n\n\n\t\t\t\t\tYour position 2 name is %s.",b);
									}
									else if (kinds == 3)
									{
										printf("\n\n\n\t\t\t\t\tYour position 1 name is %s.",a);
										printf("\n\n\n\t\t\t\t\tYour position 2 name is %s.",b);
										printf("\n\n\n\t\t\t\t\tYour position 3 name is %s.",c);
									}
									else if (kinds == 4)
									{
										printf("\n\n\n\t\t\t\t\tYour position 1 name is %s.",a);
										printf("\n\n\n\t\t\t\t\tYour position 2 name is %s.",b);
										printf("\n\n\n\t\t\t\t\tYour position 3 name is %s.",c);
										printf("\n\n\n\t\t\t\t\tYour position 4 name is %s.",d);
									}
									else if (kinds == 5)
									{
										printf("\n\n\n\t\t\t\t\tYour position 1 name is %s.",a);
										printf("\n\n\n\t\t\t\t\tYour position 2 name is %s.",b);
										printf("\n\n\n\t\t\t\t\tYour position 3 name is %s.",c);
										printf("\n\n\n\t\t\t\t\tYour position 4 name is %s.",d);
										printf("\n\n\n\t\t\t\t\tYour position 5 name is %s.",e);
									}
									else if (kinds == 6)
									{
										printf("\n\n\n\t\t\t\t\tYour position 1 name is %s.",a);
										printf("\n\n\n\t\t\t\t\tYour position 2 name is %s.",b);
										printf("\n\n\n\t\t\t\t\tYour position 3 name is %s.",c);
										printf("\n\n\n\t\t\t\t\tYour position 4 name is %s.",d);
										printf("\n\n\n\t\t\t\t\tYour position 5 name is %s.",e);
										printf("\n\n\n\t\t\t\t\tYour position 6 name is %s.",f);
									}
									else if (kinds == 7)
									{
										printf("\n\n\n\t\t\t\t\tYour position 1 name is %s.",a);
										printf("\n\n\n\t\t\t\t\tYour position 2 name is %s.",b);
										printf("\n\n\n\t\t\t\t\tYour position 3 name is %s.",c);
										printf("\n\n\n\t\t\t\t\tYour position 4 name is %s.",d);
										printf("\n\n\n\t\t\t\t\tYour position 5 name is %s.",e);
										printf("\n\n\n\t\t\t\t\tYour position 6 name is %s.",f);
										printf("\n\n\n\t\t\t\t\tYour position 7 name is %s.",g);
									}
							/*users determine to continue or exit*/
									do 
									{

										printf("\n\n\n\t\t\t\t\tPress 'a' to go back to main menu and press 'b' to exit.");
										choice1 = _getch();  //restrict user to enter one character only
										fflush(stdin);
										if(choice1 == 'a')
										{
											flag = 2;
											system("cls");  //clear screen
										}
										else if(choice1 == 'b')
											flag = 6;
										else 
										{
											system("cls");  //clear screen
											printf("\n\t\t\t\t\tYou have entered an invalid letter!");
											printf("\n\t\t\t\t\tPlease try again and enter letter 'a' or 'b'!");
											flag = 1;
										}
									}while(flag < 2); // if flag<2, restart this do-while, others exit
								}
							}
							break;
/*users determine number of people for each position*/
						case 3:
							{
								system("cls"); //clear screen
								system("color 8F"); //background and foreground colour
								printf("\n\t\tPlease enter NUMBER only! Otherwise we would assume it has 0 people.");
								for(kind=1;kind<=kinds;kind++)
								{
									//prompt users enter position number of people
									printf("\n\t\t\t\t\tNumber of people you want for position %d:",kind);
									scanf("%d",&positionNum);
									fflush(stdin);

									if(kind == 1)
										h = positionNum;
									else if(kind == 2)
										i = positionNum;
									else if(kind == 3)
										j = positionNum;
									else if(kind == 4)
										k = positionNum;
									else if(kind == 5)
										l = positionNum;
									else if(kind == 6)
										m = positionNum;
									else
										n = positionNum;
								}
								/*users determine to continue or exit*/
								do 
								{

									printf("\n\n\n\t\t\t\tPress 'a' to go back to main menu and press 'b' to exit.");
									choice1 = _getch();  //restrict user to enter one character only
									fflush(stdin);
									if(choice1 == 'a')
									{
										flag = 2;
										system("cls"); //clear screen
									}
									else if(choice1 == 'b')
										flag = 6;
									else 
									{
										system("cls"); //clear screen
										printf("\n\t\t\t\t\tYou have entered an invalid letter!");
										printf("\n\t\t\t\tPlease try again and enter letter 'a' or 'b'!");
										flag = 1;
									}
								}while(flag < 2); // if flag<2, restart this do-while, others exit
								z1 = 1; //if users select 3, z1 = 1, otherwise z1 = 0
							}
							break;
/*users view number of people of each position*/
						case 4:
							{
								system("cls"); //clear screen
								system("color 8E"); //background and foreground colour
								if(z1 != 1)
								{
									//prompt users to go back and enter number of people for each position
									printf("\n\t\t\t\tSORRY! You cannot view this page yet!");
									printf("\n\t\t\t\tas we have noticed that you have not enter your number of people each position has");
									printf("\n\t\t\t\tPress <ENTER> to return to main menu and");
									printf("\n\t\t\t\tset the number of people for each position before viewing it!");
									flag = 2;
								}
								else
								{
									if(kinds == 1)
									printf("\n\n\t\t\t\tPosition 1 has %d people.",h);
									else if(kinds == 2)
									{
										printf("\n\n\n\t\t\t\tPosition 1 has %d people.",h);
										printf("\n\n\n\t\t\t\tPosition 2 has %d people.",i);
									}
									else if(kinds == 3)
									{
										printf("\n\n\n\t\t\t\tPosition 1 has %d people.",h);
										printf("\n\n\n\t\t\t\tPosition 2 has %d people.",i);
										printf("\n\n\n\t\t\t\tPosition 3 has %d people.",j);
									}
									else if(kinds == 4)
									{
										printf("\n\n\n\t\t\t\tPosition 1 has %d people.",h);
										printf("\n\n\n\t\t\t\tPosition 2 has %d people.",i);
										printf("\n\n\n\t\t\t\tPosition 3 has %d people.",j);
										printf("\n\n\n\t\t\t\tPosition 3 has %d people.",k);
									}
									else if(kinds == 5)
									{
										printf("\n\n\n\t\t\t\tPosition 1 has %d people.",h);
										printf("\n\n\n\t\t\t\tPosition 2 has %d people.",i);
										printf("\n\n\n\t\t\t\tPosition 3 has %d people.",j);
										printf("\n\n\n\t\t\t\tPosition 4 has %d people.",k);
										printf("\n\n\n\t\t\t\tPosition 5  has %d people.",l);
									}
									else if(kinds == 6)
									{
										printf("\n\n\n\t\t\t\tPosition 1 has %d people.",h);
										printf("\n\n\n\t\t\t\tPosition 2 has %d people.",i);
										printf("\n\n\n\t\t\t\tPosition 3 has %d people.",j);
										printf("\n\n\n\t\t\t\tPosition 4 has %d people.",k);
										printf("\n\n\n\t\t\t\tPosition 5 has %d people.",l);
										printf("\n\n\n\t\t\t\tPosition 6 has %d people.",m);
									}
									else
									{
										printf("\n\n\n\t\t\t\tPosition 1 has %d people.",h);
										printf("\n\n\n\t\t\t\tPosition 2 has %d people.",i);
										printf("\n\n\n\t\t\t\tPosition 3 has %d people.",j);
										printf("\n\n\n\t\t\t\tPosition 4 has %d people.",k);
										printf("\n\n\n\t\t\t\tPosition 5 has %d people.",l);
										printf("\n\n\n\t\t\t\tPosition 6 has %d people.",m);
										printf("\n\n\n\t\t\t\tPosition 7 has %d people.",n);
									}
								}
								/*users determine to continue or exit*/
								do 
								{
									printf("\n\n\n\t\t\t\tPress 'a' to go back to main menu and press 'b' to exit.");
									choice1 = _getch();  //restrict user to enter one character only
									fflush(stdin);
									if(choice1 == 'a')
									{
										flag = 2;
										system("cls");  //clear screen
									}
									else if(choice1 == 'b')
										flag = 6;
									else 
									{
										system("cls");  //clear screen
										printf("\n\n\n\t\t\t\tYou have entered an invalid letter!");
										printf("\n\n\n\t\t\t\tPlease try again and enter letter 'a' or 'b'!");
										flag = 1;
									}
								}while(flag < 2); // if flag<2, restart this do-while, others exit
							}
							break;
/*users determine position salary*/
						case 5:
							{
								do
								{	
									system("cls");  //clear screen
									system("color 8F"); //background and foreground colour
									printf("\n\t\tPlease enter NUMBER only! Otherwise we would assume it has salary of $0.00!");
									for(kind=1;kind<=kinds;kind++)
									{									
										printf("\n\n\t\t\t\tPlease set salary for all people in position %d:",kind);
										scanf("%f",&salary);
										fflush(stdin);
										yearIncome = yearIncome - salary;
										printf("\n\t\t\t\tYour current company balance is $%.2f!",yearIncome);

										if(kind == 1)
											p = salary;
										else if(kind == 2)
											q = salary;
										else if(kind == 3)
											r = salary;
										else if(kind == 4)
											s = salary;
										else if(kind == 5)
											t = salary;
										else if(kind == 6)
											u = salary;
										else
											v = salary;

										if(yearIncome<0)
										{											
											printf("\n\n\n\t\t\t\tYou do not have enough money to pay your employee!");	
											printf("\n\n\n\t\t\t\tAre you sure you want to continue with this salary?");
											do 
											{
												printf("\n\n\n\t\t\t\tPress 'a' to rearrange the salary, press 'b' to continue!");
												choice1 = _getch();  //restrict user to enter one character only
												fflush(stdin);
												if(choice1 == 'a')
												{
													flag = 1;
													kind = 0;
													yearIncome = o;
												}
												else if(choice1 == 'b')
												{
													flag = 2;
													kind = kinds;
												}
												
												else
												{
													printf("\n\n\t\t\t\tYou have entered an invalid letter!");
													printf("\n\n\t\t\t\tPlease press <ENTER> to try again and select letter 'a' or 'b'!");
													flag = 0;
												}
											}while(flag < 1); // if flag<1, restart this do-while, others exit
										}
										flag = 2;
									}
								}while(flag < 2); // if flag<3, restart this do-while, others exit

								/*users determine to continue or exit*/
								do 
								{

									printf("\n\n\t\t\t\tPress 'a' to go back to main menu and press 'b' to exit.");
									choice1 = _getch();  //restrict user to enter one character only
									fflush(stdin);
									if(choice1 == 'a')
									{
										flag = 2;
										system("cls"); //clear screen
									}
									else if(choice1 == 'b')
									{
										printf("\n\n\t\t\t\tThis is the end of the program!");
										flag = 6;
									}
									else 
									{
										system("cls"); //clear screen
										printf("\n\n\t\t\t\tYou have entered an invalid letter!");
										printf("\n\n\t\t\t\tPlease try again and enter letter 'a' or 'b'!");
										flag = 1;
									} 
								}while(flag < 2); // if flag<2, restart this do-while, others exit
								z2=1; //if users select 5, z2 = 1, otherwise z2 = 0
							}
							break;
/*users view position salary*/
						case 6:
							{
								system("cls"); //clear screen
								system("color 8E"); //background and foreground colour
								if(z1 != 1)
								{
									//prompt users to go back and enter position number of people 
									printf("\n\n\t\t\t\tSORRY! You cannot view this page yet!");
									printf("\n\n\t\t\t\tas we have noticed that you have not enter number of people for positions yet!");
									printf("\n\t\t\t\tPress <ENTER> to return to main menu and");
									printf("\n\t\t\t\tset the number of people for each position before viewing the average salary!");
									flag = 2;
								}
								else if(z2 != 1)
								{
									//prompt users to go back and enter position salary 
									printf("\n\n\t\t\t\tSORRY! You cannot view this page yet!");
									printf("\n\n\t\t\t\tas we have noticed that you have not enter salary for positions yet!");
									printf("\n\t\t\t\tPress <ENTER> to return to main menu and");
									printf("\n\t\t\t\tset the position salary before viewing it!");
									flag = 2;
								}
								else
								{
									//do calculations for average salary
									x1 = p / h;
									x2 = q / i;
									x3 = r / j;
									x4 = s / k;
									x5 = t / l;
									x6 = u / m;
									x7 = v / n;
									if(kinds == 1)
									{
										printf("\n\n\t\t\t\tPosition 1 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",p);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x1);
									}
									else if(kinds == 2)
									{
										printf("\n\n\t\t\t\tPosition 1 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",p);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x1);
										printf("\n\n\t\t\t\tPosition 2 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",q);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x2);
									}
									else if(kinds == 3)
									{
										printf("\n\n\t\t\t\tPosition 1 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",p);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x1);
										printf("\n\n\t\t\t\tPosition 2 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",q);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x2);
										printf("\n\n\t\t\t\tPosition 3 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",r);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x3);
									}
									else if(kinds == 4)
									{
										printf("\n\n\t\t\t\tPosition 1 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",p);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x1);
										printf("\n\n\t\t\t\tPosition 2 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",q);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x2);
										printf("\n\n\t\t\t\tPosition 3 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",r);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x3);
										printf("\n\n\t\t\t\tPosition 4 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",s);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x4);
									}
									else if(kinds == 5)
									{
										printf("\n\n\t\t\t\tPosition 1 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",p);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x1);
										printf("\n\n\t\t\t\tPosition 2 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",q);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x2);
										printf("\n\n\t\t\t\tPosition 3 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",r);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x3);
										printf("\n\n\t\t\t\tPosition 4 salary:");
										printf("\n\n\t\t\t\t             overal  salary: $%.2f",s);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x4);
										printf("\n\n\t\t\t\tPosition 5 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",t);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x5);
									}
									else if(kinds == 6)
									{
										printf("\n\n\t\t\t\tPosition 1 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",p);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x1);
										printf("\n\n\t\t\t\tPosition 2 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",q);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x2);
										printf("\n\n\t\t\t\tPosition 3 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",r);
										printf("\n\n\t\t\t\t             average salary: $%.2f",x3);
										printf("\n\n\t\t\t\tPosition 4 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",s);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x4);
										printf("\n\n\t\t\t\tPosition 5 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",t);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x5);
										printf("\n\n\t\t\t\tPosition 6 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",u);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x6);									
									}
									else 
									{
										printf("\n\n\t\t\t\tPosition 1 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",p);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x1);
										printf("\n\n\t\t\t\tPosition 2 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",q);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x2);
										printf("\n\n\t\t\t\tPosition 3 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",r);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x3);
										printf("\n\n\t\t\t\tPosition 4 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",s);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x4);
										printf("\n\n\t\t\t\tPosition 5 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",t);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x5);
										printf("\n\n\t\t\t\tPosition 6 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",u);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x6);
										printf("\n\n\t\t\t\tPosition 7 salary:");
										printf("\n\n\t\t\t\t              overal  salary: $%.2f",v);
										printf("\n\n\t\t\t\t              average salary: $%.2f",x7);
									}
								}
								/*users determine to continue or exit*/
								do 
								{

									printf("\n\n\t\t\tPress 'a' to go back to main menu and press 'b' to exit.");
									choice1 = _getch();  //restrict user to enter one character only
									fflush(stdin);
									if(choice1 == 'a')
									{
										flag = 2;
										system("cls"); //clear screen
									}
									else if(choice1 == 'b')
									{
										printf("\n\n\t\t\t\tThis is the end of the program!");
										flag = 6;
									}
									else 
									{
										system("cls"); //clear screen
										printf("\n\n\t\t\t\tYou have entered an invalid letter!");
										printf("\n\n\t\t\t\tPlease try again and enter letter 'a' or 'b'!");
										flag = 1;
									}
								}while(flag < 2); // if flag<2, restart this do-while, others exit									
							}
							break;
/*users view all company's information*/
						case 7:
							{
								system("cls"); //clear screen
								system("color F0"); //background and foreground colour
								if(z!=1)
								{
									//prompt users to go back and enter position name 
									printf("\n\n\t\t\t\tSorry! We have noticed that you have not finished entering your company's information!");
									printf("\n\n\t\t\t\tPress <ENTER> to go back to Main Menu and finish your Position Name first!");
									flag = 2;
								}
								else if(z1!=1)
								{
									//prompt users to go back and enter number of people each position has
									printf("\n\n\t\t\t\tSorry! We have noticed that you have not finished entering your company's information!");
									printf("\n\n\t\t\t\tPress <ENTER> to go back to Main Menu and finish your Number of People in each position first!");
									flag = 2;
								}
								else if(z2!=1)
								{
									//prompt users to go back and enter position salary
									printf("\n\n\t\t\t\tSorry! We have noticed that you have not finished entering your company's information!");
									printf("\n\n\t\t\t\tPress <ENTER> to go back to Main Menu and finish your Position Salary first!");
									flag = 2;
								}
								else
								{
									//total company's information printed to screen
									printf("\n\t\t\t\tHello %s!!! Following is your NEW COMPANY'S INFORMATION!",username);
									if(kinds == 1)
									{
										printf("\n\n\n\n");
										printf("\n\t\t|---------------------------Company's Money Arrangement----------------------------|");
										printf("\n\t\t| position # |    1    |    2    |    3    |    4    |    5    |    6    |    7    |");
										printf("\n\t\t|    NAME    |    %s   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |",a);
										printf("\n\t\t|  people #  |  %d     |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |",h);
										printf("\n\t\t|Total Salary|$%.2f    |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |",p);
										printf("\n\t\t| Ave Salary |$%.2f    |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |",x1);
										printf("\n\t\t|----------------------------------------------------------------------------------|");
									}
									else if(kinds == 2)
									{
										printf("\n\n\n\n");
										printf("\n\t\t|---------------------------Company's Money Arrangement----------------------------|");
										printf("\n\t\t| position # |    1    |    2    |    3    |    4    |    5    |    6    |    7    |");
										printf("\n\t\t|    NAME    |    %s   |    %s   |   ---   |   ---   |   ---   |   ---   |   ---   |",a,b);
										printf("\n\t\t|  people #  |  %d     |   %d    |   ---   |   ---   |   ---   |   ---   |   ---   |",h,i);
										printf("\n\t\t|Total Salary|$%.2f    |$%.2f    |   ---   |   ---   |   ---   |   ---   |   ---   |",p,q);
										printf("\n\t\t| Ave Salary |$%.2f    |$%.2f    |   ---   |   ---   |   ---   |   ---   |   ---   |",x1,x2);
										printf("\n\t\t|----------------------------------------------------------------------------------|");
									}
									else if(kinds == 3)
									{
										printf("\n\n\n\n");
										printf("\n\t\t|---------------------------Company's Money Arrangement----------------------------|");
										printf("\n\t\t| position # |    1    |    2    |    3    |    4    |    5    |    6    |    7    |");
										printf("\n\t\t|    NAME    |    %s   |    %s   |   %s    |   ---   |   ---   |   ---   |   ---   |",a,b,c);
										printf("\n\t\t|  people #  |  %d     |   %d    |   %d    |   ---   |   ---   |   ---   |   ---   |",h,i,j);
										printf("\n\t\t|Total Salary|$%.2f    |$%.2f    |$%.2f    |   ---   |   ---   |   ---   |   ---   |",p,q,r);
										printf("\n\t\t| Ave Salary |$%.2f    |$%.2f    |$%.2f    |   ---   |   ---   |   ---   |   ---   |",x1,x2,x3);
										printf("\n\t\t|----------------------------------------------------------------------------------|");
									}
									else if(kinds == 4)
									{
										printf("\n\n\n\n");
										printf("\n\t\t|---------------------------Company's Money Arrangement----------------------------|");
										printf("\n\t\t| position # |    1    |    2    |    3    |    4    |    5    |    6    |    7    |");
										printf("\n\t\t|    NAME    |    %s   |    %s   |   %s    |   %s    |   ---   |   ---   |   ---   |",a,b,c,d);
										printf("\n\t\t|  people #  |  %d     |   %d    |   %d    |   %d    |   ---   |   ---   |   ---   |",h,i,j,k);
										printf("\n\t\t|Total Salary|$%.2f    |$%.2f    |$%.2f    |$%.2f    |   ---   |   ---   |   ---   |",p,q,r,s);
										printf("\n\t\t| Ave Salary |$%.2f    |$%.2f    |$%.2f    |$%.2f    |   ---   |   ---   |   ---   |",x1,x2,x3,x4);
										printf("\n\t\t|----------------------------------------------------------------------------------|");
									}
									else if(kinds == 5)
									{
										printf("\n\n\n\n");
										printf("\n\t\t|---------------------------Company's Money Arrangement----------------------------|");
										printf("\n\t\t| position # |    1    |    2    |    3    |    4    |    5    |    6    |    7    |");
										printf("\n\t\t|    NAME    |    %s   |    %s   |   %s    |   %s    |   %s    |   ---   |   ---   |",a,b,c,d,e);
										printf("\n\t\t|  people #  |  %d     |   %d    |   %d    |   %d    |   %d    |   ---   |   ---   |",h,i,j,k,l);
										printf("\n\t\t|Total Salary|$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |   ---   |   ---   |",p,q,r,s,t);
										printf("\n\t\t| Ave Salary |$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |   ---   |   ---   |",x1,x2,x3,x4,x5);
										printf("\n\t\t|----------------------------------------------------------------------------------|");
									}
									else if(kinds == 6)
									{
										printf("\n\n\n\n");
										printf("\n\t\t|---------------------------Company's Money Arrangement----------------------------|");
										printf("\n\t\t| position # |    1    |    2    |    3    |    4    |    5    |    6    |    7    |");
										printf("\n\t\t|    NAME    |    %s   |    %s   |   %s    |   %s    |   %s    |   %s    |   ---   |",a,b,c,d,e,f);
										printf("\n\t\t|  people #  |  %d     |   %d    |   %d    |   %d    |   %d    |   %d    |   ---   |",h,i,j,k,l,m);
										printf("\n\t\t|Total Salary|$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |   ---   |",p,q,r,s,t,u);
										printf("\n\t\t| Ave Salary |$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |   ---   |",x1,x2,x3,x4,x5,x6);
										printf("\n\t\t|----------------------------------------------------------------------------------|");
									}
									else
									{
										printf("\n\n\n\n");
										printf("\n\t\t|---------------------------Company's Money Arrangement----------------------------|");
										printf("\n\t\t| position # |    1    |    2    |    3    |    4    |    5    |    6    |    7    |");
										printf("\n\t\t|    NAME    |    %s   |    %s   |   %s    |   %s    |   %s    |   %s    |   %s    |",a,b,c,d,e,f,g);
										printf("\n\t\t|  people #  |  %d     |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",h,i,j,k,l,m,n);
										printf("\n\t\t|Total Salary|$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |",p,q,r,s,t,u,v);
										printf("\n\t\t| Ave Salary |$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |$%.2f    |",x1,x2,x3,x4,x5,x6,x7);
										printf("\n\t\t|----------------------------------------------------------------------------------|");
									}
								}
								/*users determine to continue or exit*/
								do 
								{
									printf("\n\n\t\t\t\tPress 'a' to go back to main menu and press 'b' to exit.");
									choice1 = _getch();  //restrict user to enter one character only
									fflush(stdin);
									if(choice1 == 'a')
									{
										flag = 2;
										system("cls"); //clear screen
									}
									else if(choice1 == 'b')
									{
										printf("\n\n\t\t\t\tThis is the end of the program!");
										flag = 6;
									}
									else 
									{
										system("cls"); //clear screen
										printf("\n\n\t\t\t\tYou have entered an invalid letter!");
										printf("\n\n\t\t\t\tPlease try again and enter letter 'a' or 'b'!");
										flag = 1;
									}
								}while(flag < 2); // if flag<2, restart this do-while, others exit
							}
							break;
						case 8:
							flag = 5;
							break;
						case 9:
							flag = 6;
							break;
						default:
							{
								printf("\n\n\t\t\t\tYou have entered an invalid number!");
								printf("\n\n\t\t\t\tPlease Press ENTER to go back to main menu and select number 1 to 7!");
								flag = 2;
							}
							break;
						}
					}while(flag < 3); // if flag<6, restart this do-while, others exit
				}
				else if(choice1 == 'b')
					flag = 6;
				else
				{
					system("cls");//clear screen
					printf("\n\n\t\t\t\tYou have entered an inivalid number!");
					printf("\n\n\t\t\tPress <ENTER> to try again and select letter a or b!");
					flag = 1;
					getch();  //hold screen
					system("cls"); //clear screen
				}
			}while(flag < 5); // if flag<5, restart this do-while, others exit
		}
		else
		{
			system("color D"); //foreground color
			count = 4 - flag; //do calculations of how many chances left for entering password
			system("cls"); //clear screen
			SetConsoleTextAttribute ( h1, FOREGROUND_RED| FOREGROUND_INTENSITY);  //foreground colour
			printf("\n\t\t\t\t\t\tINCORRECT!");
			SetConsoleTextAttribute ( h1, FOREGROUND_BLUE |FOREGROUND_RED | FOREGROUND_INTENSITY);//foreground colour
			printf("\n\t\t\tYour have entered a different password from your account!");

			//prompt users how many chances they have left beofre exit
			printf("\n\t\t\tYou have %d chances left before you have to restart the program!",count);
			getch();  //hold screen
			if(count == 0)
				flag = 6;
		}

	}while(flag < 6); // if flag<4, restart this do-while, others exit

	system("cls");  //clear screen
	printf("\n\n\t\t\t\tPress <ENTER> to exit!");
	getch();  //hold screen
	return 0; //return integer
}//end main
//this program has run successfully

