#include<stdio.h>
#include<stdlib.h>



#include "library.h"

void main()
{
	int i,dice,cur_pos1=0,cur_pos2=0;
	char ch;
	while(1)
	{	printf("		** Snake And Ladder Game ** \n\n");
		printf("Snakes:- 23 to 8,\t 72 to 36,\t 99 to  1.\nLadder:- 12 to 43,\t 56 to 81,\t 72 to 96.\n");
		printf("Choose your option\n");
		printf("1. Player 1 plays\n");
		printf("2. Player 2 plays\n");
		printf("3. Exit\n");
		scanf("%s",&ch);
	
		switch(ch)
		{
			
			case '1':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n\n",dice);
					if(dice==6)
					printf("Dice=6: You have earned a chance to play one more time.\n");
					cur_pos1=dice+cur_pos1;
					if(cur_pos1<101){
						if(cur_pos1==99)
						{
						displaychart(1,"$P1$");//snake
						}
						if(cur_pos1==65)
						{
						displaychart(40,"$P1$");//snake
						}
						if(cur_pos1==25)
						{
						displaychart(9,"$P1$");//snake
						}
						if(cur_pos1==70)
						{
						displaychart(93,"$P1$");//ladder
						}
						if(cur_pos1==60)
						{
						displaychart(83,"$P1$");//ladder
						}
						if(cur_pos1==13)
						{
						displaychart(42,"$P1$");//ladder
						}
						else{
							displaychart(cur_pos1,"$P1$");
						}
						
					}
					else{
						cur_pos1=cur_pos1-dice;
						printf("Range exceeded of Player 1.\n");
						displaychart(cur_pos1,"$P1$");
					}
					printf("Player 2 position is %d\n",cur_pos2);
			
				break;
			case '2':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n\n",dice);
					cur_pos2=dice+cur_pos2;
					if(cur_pos2<101){
						if(cur_pos2==99)	//snake
						{
						displaychart(1,"$P2$");
						}
						if(cur_pos2==65)	//snake
						{
						displaychart(40,"$P2$");
						}
						if(cur_pos2==25)	//snake
						{
						displaychart(9,"$P2$");
						}
						if(cur_pos2==70)	//ladder
						{
						displaychart(93,"$P2$");
						}
						if(cur_pos2==60)	//ladder
						{
						displaychart(83,"$P2$");
						}
						if(cur_pos2==13) 	//ladder
						{
						displaychart(42,"$P2$");
						}
						else{
							displaychart(cur_pos2,"$P2$");
						}
					}
						
					else{
						cur_pos2=cur_pos2-dice;
						printf("Range exceeded of Player 2.\n");
						displaychart(cur_pos2,"$P2$");
					}
					printf("Player 1 position is %d\n",cur_pos1);
				break;
			case '3':exit(0);
				break;
			
			default:printf("Incorrect choice.Try Again\n");
				
		}
		
	}
	
}