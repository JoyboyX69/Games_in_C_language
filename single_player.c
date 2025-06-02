// Question: Write a program to create a game name is guess the number and also show how many times to find the number

// header file
#include<stdio.h>
// this is standard library header file to pick the random number by computer 
#include<stdlib.h>
// in this library header life its help in generating different random number every time when the program is executed 
#include<time.h>

// main file
int main()
{   
    // its help to generate the random number 
    srand(time(0));

    // Take vairable for store the random nuber ,input the number by user,and how many time you guessed the number
    int random_number,guesses_of_number=0,guessed;

    // it helps to generate the number between 1 to 100
    random_number=(rand()%100)+1;

    // printf("Random no is %d",random_number);

    // start a do while loop because atleast take one input by the user
        do
        {
            // take an input by user
            printf("\nGuess the number: ");
            scanf("%d",&guessed);
            
            // condition start if guess number is greater than random number then print pick lower number
            if(guessed>random_number)
            printf("Pick Lower Number");

            // if guess is less the random number then print pick higher number
            else if(guessed<random_number)
            printf("Pick Higher Number");

            // otherwise print you guessed the number
            else
            printf("Congratulations You Guessed a Number\n");

            
            guesses_of_number++;
        }
        while(guessed != random_number);

        printf("You guesses a number in the %d times",guesses_of_number);
    return 0;
}