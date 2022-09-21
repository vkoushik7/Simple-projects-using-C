//guess the number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n,number,flag=0,c=1;
void guess();
void gameplay();
int main()
{
	guess();
	while (7)
	{
		printf("Enter a number between 1 to 100: ");
		scanf("%d",&n);
		gameplay();
		if (c==11 || flag==1)
		{
			if (c==11 && flag==0)
			{
				printf("Your game is over as no. of attempts completed!!");
				printf("\nThe answer is %d.",number);
				break;
			}
			else
			{
				break;
			}
		}
	}
}
void guess()
{
	srand(time(0));
	number = rand()%100;
}
void gameplay()
{
	if (n>number)
	{
		printf("It is lower than you entered!");
	}
	else if (n<number)
	{
		printf("It is higher than you entered!");
	}
	else 
	{
		printf("You guessed it right in %d attempts!!!",c);
		flag=1;
	}
	c=c+1;
	printf("\n");	
}
