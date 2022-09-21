//tic tac toe game
#include <stdio.h>
char square[10]={'o','1','2','3','4','5','6','7','8','9'};
int check=0,player=1,i,k=0;
void board();
void checkwin();
void gameplay();
void declare();
int main()
{
	printf("\n\n\tTic Tac Toe\n\n");
	printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
	while (7)
	{
		gameplay();
		checkwin();
		declare();
		if (k==1)
		{
			break;
		}
	}
}
void gameplay()
{
	if (player==1)
		{
			board();
			printf("Player 1, Enter the number : ");
			scanf("%d",&i);
			if (i<1 || i>9)
			{
				printf("Invalid place!\n");
				player=1;
			}
			else if (square[i]!='X'&&square[i]!='O')
			{
				square[i]='X';
				player=2;
			}
			else
			{
				printf("Invalid Move\n");
				player=1;
			}
		}
	else if (player==2)
		{
			board();
			printf("Player 2, Enter the number : ");
			scanf("%d",&i);
			if (i<1 || i>9)
			{
				printf("Invalid place!\n");
				player=2;
			}
			else if (square[i]!='X'&&square[i]!='O')
			{
				square[i]='O';
				player=1;
			}
			else
			{
				printf("Invalid Move\n");
				player=2;
			}
		}
}
void checkwin()
{	
      if (square[1] == square[2] && square[2] == square[3])
         if (square[1]=='X')
         	check=1;
        else
        	check=2;
        
    else if (square[4] == square[5] && square[5] == square[6])
        if (square[4]=='X')
         	check=1;
        else
        	check=2;
        
    else if (square[7] == square[8] && square[8] == square[9])
        if (square[7]=='X')
         	check=1;
        else
        	check=2;
        
    else if (square[1] == square[4] && square[4] == square[7])
        if (square[1]=='X')
         	check=1;
        else
        	check=2;
        
    else if (square[2] == square[5] && square[5] == square[8])
        if (square[2]=='X')
         	check=1;
        else
        	check=2;
        
    else if (square[3] == square[6] && square[6] == square[9])
        if (square[3]=='X')
         	check=1;
        else
        	check=2;
        
    else if (square[1] == square[5] && square[5] == square[9])
        if (square[1]=='X')
         	check=1;
        else
        	check=2;
        
    else if (square[3] == square[5] && square[5] == square[7])
        if (square[3]=='X')
         	check=1;
        else
        	check=2;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')
		{
			check=-1;
		}
}
void declare()
{
	if (check==1 || check==2)
	{
		board();
		printf("Player %d won the game",check);
		k=1;
	}
	else if (check==-1)
	{
		board();
		printf("Game Draw!!");
		k=1;
	}
	else
	{
		k=0;
	}
}
void board()
{
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    printf("\t     |     |     \n\n");
}