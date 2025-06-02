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

    Take vairable
    int random_number,guesses_of_number=0,guessed;

    random_number=(rand()%100)+1;

    // printf("Random no is %d",random_number);

        do
        {
            printf("\nGuess the number: ");
            scanf("%d",&guessed);
            
            if(guessed>random_number)
            printf("Pick Lower Number");

            else if(guessed<random_number)
            printf("Pick Higher Number");

            else
            printf("Congratulations You Guessed a Number\n");

            guesses_of_number++;
        }
        while(guessed != random_number);

        printf("You guesses a number in the %d times",guesses_of_number);
    return 0;
}