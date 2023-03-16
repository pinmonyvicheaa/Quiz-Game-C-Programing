#include<stdio.h>
#include<conio.h>
#include<ctype.h> 
#include<stdlib.h> //standard library for c programming
#include<string.h>
void show_record(); //show the highest money won by user
void reset_score(); //to reset the highest scores to default
void help(); //help menu with game rules
void edit_score(float , char []); // Add the current winning money to the previous number when giving the correct answer to a question
int main()
     {
     int countr,r,r1,count,i,n;
     system("color 6");
     float score;
     char choice;
     char playername[10];
     mainhome:
     system("cls"); 
	
	 printf("\n\n\t\t\t\t    Team8:         ");
	 printf("\n\t\t\t\t1.Rann David         ");
	 printf("\n\t\t\t\t2.Pok Leanghak       ");
	 printf("\n\t\t\t\t3.Pin Monyvichea     ");
	 printf("\n\t\t\t\t4.Phearun Chanmakara ");
	 printf("\n\t\t\t\t5.Phat Sophong       ");
	 //RUPP-Year1-M7 BY TEAM8 
	 
     printf("\n\n\t\t\t  C PROGRAM QUIZ GAME:\n         ");
     printf("\n\t\t_____________________________________");
     printf("\n\t\t\t        WELCOME                    ");
     printf("\n\t\t\t      </>  to  </>                 ");
     printf("\n\t\t\t        THE GAME                   ");
     printf("\n\t\t_____________________________________");
     printf("\n\t\t_____________________________________");
     printf("\n\t\t         BECOME A MILLIONAIRE!       ");
     printf("\n\t\t_____________________________________");
     printf("\n\t\t_____________________________________");
     printf("\n\t\t > Press S to start the game         ");
     printf("\n\t\t > Press V to view the highest score ");
     printf("\n\t\t > Press R to reset score            ");
     printf("\n\t\t > press H for help                  ");
     printf("\n\t\t > press Q to quit                   ");
     printf("\n\t\t_____________________________________\n\n");
     
     choice=toupper(getch()); // Get all the upper letters of the alphabet
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your name:");
     gets(playername);

    system("cls");
    printf("\n-------------------------  Welcome %s's to C Program Quiz Game -----------------------",playername);
    printf("\nHere are some time tips you might wanna know before playing:                     ");
    printf("\n___________________________________________________________________________________");
    printf("\n| >> There are 2 rounds in the game,WARMUP ROUND & CHALLANGE ROUND                |");
    printf("\n| >> In warmup round you will be asked a total of 3 questions to test your        |");
    printf("\n|   general knowledge. You are eligible to play the game if you can give atleast 2|");
    printf("\n|   right answers otherwise you can't proceed further to the Challenge Round.     |");
    printf("\n| >> Your game starts with the CHALLANGE ROUND. In this round you will be asked a |");
    printf("\n|    total 10 questions. Each right answer will be awarded $100,000!              |");
    printf("\n|    By this way you can win upto ONE MILLION cash prize!..........               |");
    printf("\n| >> You will be given 4 options and you have to press A, B ,C or D for the       |");
    printf("\n|    right option.                                                                |");
    printf("\n| >> You will be asked questions continuously, till right answers are given       |");
    printf("\n| >> No negative marking for wrong answers!                                       |");
	printf("\n|                             </> ALL THE BEST </>                                |");
    printf("\n|_________________________________________________________________________________|");
    printf("\n\n\n Press Y to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=2;i++)
     {
    system("cls");
     r1=i;


     switch(r1) // warmup question
		{
		case 1:
		printf("\nRound 1:");
		printf("\n\nWhat is a pointer?");
		printf("\n\nA.A keyword used to create variables\t\t\t\tB.A variable used to store address of an instruction\n\nC.A variable used to store address of other variable\t\tD.A variable used to store address of a structure");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect ^_^");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong :( The correct answer is C.");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nWhat is a correct syntax to output 'Hello World' in C?");
		printf("\n\nA.System.out.printline('Hello World');\t\tB.cout << 'Hello World';\n\nC.printf('Hello World');\t\t\tD.Console.WriteLine('Hello World');");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect ^_^");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong :( The correct answer is C.");
		       getch();
		       break;}    
 }
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU CAN'T TO PLAY ROUND 2 BECAUSE YOUR ANSWERS IS WRONG, PLEASE TRY AGAIN");
	printf("\n\nPress any other key to return to the main menu!");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t^_^ Congratuations %s's Round 1 is completed now Let's play Round 2 ^_^",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\nRound 2:");
		printf("\n\nHow do you insert COMMENTS in C code?");
		printf("\n\nA.// This is a comment\t\tB./* This is a comment\n\nC.-- This is a comment\t\tD.# This is a comment");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect ^_^");countr++;getch();
		    break;getch();}
		else
		       {printf("\n\nWrong :( The correct answer is A.");getch();
		       goto score;
		       break;}
			
		case 2:
		printf("\n\nHow can you create a variable with the numeric value 5?");
		printf("\n\nA.int num = 5;\t\tB.val num = 5;\n\nC.num = 5;\t\tD.num = 5 int;");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect ^_^");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong :( The correct answer is A.");getch();
		       goto score;
		       break;}

		case 3:
		printf("\n\n\nHow can you create a variable with the floating number 2.8?");
		printf("\n\nA.val num = 2.8;\t\tB.float num = 2.8;\n\nC.num = 2.8 float;\t\tD.num = 2.8 double;");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect ^_^");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong :( The correct answer is B.");getch();
		      goto score;
		       break;
		       }

        case 4:
		printf("\n\n\nC language is a __________");
		printf("\n\nA.High level language\t\tB.Middle Level Language\n\nC.Low level language\t\tD.Machine level language");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect ^_^");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong :( The correct answer is B.");getch();
		       goto score;
		       break;}

        case 5:
		printf("\n\n\nWhich operator can be used to compare two values?");
		printf("\n\nA. <>\t\tB. ><\n\nC. ==\t\tD. =");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect ^_^");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong :( The correct answer is C.");getch();
		       goto score;
		       break;
		       }

        case 6:
		printf("\n\n\n How do you start writing an if statement in C?");
		printf("\n\n A. if x > y \t\t B. if (x > y) \n\n C. if x > y() \t\t D. if x > y then ");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect ^_^");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong :( The correct answer is B.");
		       getch();
		       goto score;
		       break;
		       }

		case 7:
		printf("\n\n\nWhich of the following method used to receiving input values from keyboard?");
		printf("\n\nA.scanf\t\tB.printf\n\nC.scan\t\tD.print");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect ^_^");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong :( The correct answer is A.");goto score;
		       getch();
		       break;}
        case 8:
		printf("\n\n\nWhich keyword is used to create a structure?");
		printf("\n\nA.structure\t\tB.structs\n\nC.str\t\t\tD.struct");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect ^_^");countr++;getch(); break;}
		else
		       {printf("\n\nWrong :( The correct answer is D.");getch();break;goto score;}
		       
		case 9:
		printf("\n\n\nWhat is the general form for declaring a variable in C language?");
		printf("\n\nA.Type name\t\tB.Type name;\n\nC.name type;\t\tD.name type");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect ^_^");countr++;getch(); break;}
		else
		       {printf("\n\nWrong :( The correct answer is B.");getch();break;goto score;}
		       
		case 10:
		printf("\n\n\nWhich of the following is the correct to compare two variables?");
		printf("\n\nA.:=\t\tB.=\n\nC.equal\t\tD.==");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect ^_^");countr++;getch(); break;}
		else
		       {printf("\n\nWrong :( The correct answer is D.");getch();break;goto score;}
}}

	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t^_^ CONGRATULATION ^_^");
	     printf("\n\t  You won $%.2f",score);
		 goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t^_^ Congratuations ^_^");
	    printf("\n\t\t YOU ARE A MILLIONAIRE!");
	    printf("\n\t\t You won $%.2f Thank you",score);
	}
	 else
{
	 printf("\n\n\t:( SORRY YOU DIDN'T GET ANY MONEY :( ");
	 printf("\n\tThanks for your playing");
	 printf("\n\t\tTRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[10];
	float scr;
	FILE *f;
	f=fopen("scores.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t___________________________________________");
	printf("\n\n\t\t %s's your Highest Score is: %0.2f",name,scr);
	printf("\n\n\t\t___________________________________________");
	printf("\n\n\t\tPress any other key to return to the main menu!");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
  char nm[20];
  FILE *f;
    f=fopen("scores.txt","r+");
    long pos = ftell(f); //Save the current position
while (fgets(nm,500, f) != NULL) {
    sc = 0;
    fseek(f, pos, SEEK_SET); //move to beginning of lines
    fprintf(f, "%f", sc);
    fflush(f);
    pos = ftell(f); //Save the current position
    fclose(f);
    printf("\n\n\t\t Reset Successfully Press any other key to return to the main menu!");
}}
	

void help()
	{system("cls");
    printf("\nHere are some time tips you might wanna know before playing:                       ");
    printf("\n___________________________________________________________________________________");
    printf("\n|>> There are 2 rounds in the game,WARMUP ROUND & CHALLANGE ROUND                 |");
    printf("\n|>> In warmup round you will be asked a total of 3 questions to test your         |");
    printf("\n|   general knowledge. You are eligible to play the game if you can give atleast 2|");
    printf("\n|   right answers otherwise you can't proceed further to the Challenge Round.     |");
    printf("\n| >> Your game starts with the CHALLANGE ROUND. In this round you will be asked a |");
    printf("\n|    total 10 questions. Each right answer will be awarded $100,000!              |");
    printf("\n|    By this way you can win upto ONE MILLION cash prize!..........               |");
    printf("\n| >> You will be given 4 options and you have to press A, B ,C or D for the       |");
    printf("\n|    right option.                                                                |");
    printf("\n| >> You will be asked questions continuously, till right answers are given       |");
    printf("\n| >> No negative marking for wrong answers!                                       |");
	printf("\n|                             </> ALL THE BEST </>                                |");
    printf("\n|_________________________________________________________________________________|");
    printf("\n\nPress any other key to return to the main menu!");
	}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[10];
	FILE *f;
	f=fopen("scores.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("scores.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
	    
