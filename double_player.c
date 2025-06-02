// Question: Write a program in C to create a guess number for double player1 and also print how many time you take to guess the number

// header file
#include<stdio.h>

// this is standard library header file to pick the random number by computer
#include<stdlib.h>

// In this library header life its help in generating different random number every time when the program is executed.
#include<time.h>

// declare the player function
int player1();

// main file
int main()

    // take a vairable of player 1 and player 2
{   int p1,p2;
    
    // first play player 1
    printf("PLAYER 1");

    // call the player funtion for player 1 
   p1=player1();
//    print the how many time to take a guess the number
   printf("\nyou want to guessed in %d time\n",p1);
   
//    then player 2 play
   printf("\nPLAYER 2\n");
 
//    call the player function for player 2 
   p2=player1();

   print the how many time to take a guess the number
   printf("\nyou want to guessed in %d time",p2);

// this command is used for new line
   printf("\n");

    // condition start if player1 is less than player 2 than player 1 is win the game
   if(p1<p2)
   printf("\nPlayer 1 is the winner of this game");
   
//    otherwise player 2 win this game
   else 
   printf("\nPlayer 2 is the winner is this game");

   return 0;
}

// define function
int player1()
{
    // this is used for generate random number when the program is executed
    srand(time(0));

    // take a vairable for guess by user,how many time you guess the number and last store the random number to generate by computer
    int guessed,no_of_guesses=0;
    int random_number;
    
    // this is for generate number between 1 to 100
    random_number=(rand()%100)+1;
    // printf("%d",random_number);
    
    start a do while loop beca
    do
    {
        printf("\nGuess the number: ");
        scanf("%d",&guessed);
        
        if(guessed>random_number)
        printf("PICK LOWER NO");
        
        else if(guessed<random_number)
        printf("PICK HIGHER NO");
        
        else
        printf("\nCONGRATULATION YOU GUESSED THE RIGHT NO");
        
        no_of_guesses++;
        
}
while(guessed!=random_number);

return no_of_guesses;

}