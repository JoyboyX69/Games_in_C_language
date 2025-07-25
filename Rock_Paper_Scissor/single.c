// Question : Create a Game Rock,Paper and Scissor in C Programming Language

// header file
#include<stdio.h>

// this is standard library header file to pick the random number by computer 
#include<stdlib.h>

// In this library header life its help in generating different random number every time when the program is executed.
#include<time.h>


int main()
{
    // its help to generate the random number 
    srand(time(0));

    int random_number;
    // it helps to generate the number between 1 to 100
     random_number=(rand()%3)+1;

     int choice;
    // printf("your random number:%d",random_number);

    
    do{
        printf("\nchoose your option\n");
        
        printf("1.Rock\n2.Paper\n3.Scissor\n4.Exit");
        printf("\n");
        scanf("\n%d",&choice);        
        printf("\n");


        
        if(choice==1 && random_number==2)
        {
            printf("you choose Rock,Computer choose Paper\n");
            printf("You lose the match");
            
        }
        
        else if(choice==1 && random_number==3)
        {
            printf("you choose Rock,Computer choose Scissor\n");
            printf("you Win the match\n");
        }
        

        else if(choice==2 && random_number==1)
        {
            printf("you choose Paper,Computer choose Rock\n");
            printf("you Win the match\n");
        }

        else if(choice==2 && random_number==3)
        {
            printf("you choose Paper,Computer choose Scissor\n");
            printf("you lose the match\n");
        }

        else if(choice==3 && random_number==2)
        {
            printf("you choose Scissor,Computer choose Paper\n");
            printf("you Win the match\n");
        }

        else if(choice==3 && random_number==1)
        {
            printf("you choose Scissor,Computer choose Rock\n");
            printf("you lose the match\n");
        }

        else if(choice==4)
        exit(1);

        else
        printf("Shoot,It's a Draw\n");
        
    }

    while(random_number!=5);
    // if(random_number)
    

}
