#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <ctype.h>

//a function that generates the computer choice
char get_computer_choice()
{
    
    int random_number=rand()%3;  //generate a random nuumber between o and 3 
    if(random_number==0)
        return 'S';   
    else if(random_number==1)
        return 'K';
    else
        return 'P';
    
}
//a function that gets the user input
char get_user_choice()
{
    char user_input; 
    printf("Hey there! Welcome to the pro game of the Knife, stone and paper\n Enter 's' for stone, 'p' for paper or 'k' for knife:\n");
    scanf(" %c",&user_input);
    user_input=toupper(user_input); //change the user's input to upper case
   /*promt the user for the correct input untill the input is correct*/
    while ((user_input!='S')&&(user_input!='P')&&(user_input!='K'))
    {
        printf("invalid input! Please enter K, S or P");
        printf("enter your choice:\n");
        scanf(" %c",&user_input);
        user_input=toupper(user_input);
        
    }
    return user_input;  
}  
/*Creating a function that determines the winner between the user and the computer*/
void obtain_winner (char computer_choice, char user_choice)
{
    printf("You chose: %c\n", user_choice);
    printf("Computer chose: %c", computer_choice);

    if ((user_choice == 'K' && computer_choice == 'P') || (user_choice == 'P' && computer_choice == 'S') || (user_choice == 'S' && computer_choice == 'K'))
    {
        printf("\n Congrats, you win\n");
    }
    else if (user_choice == computer_choice)
    {
        printf("\n You almost got him! Try again\n");
    }
    else
    {
        printf("\n You'll get 'em next time");
    }
}

int main()
{
    srand (time(0));      //initialize a random number with current time to prevent repeating numbers every time
    
    char user_choice = get_user_choice();
    char computer_choice = get_computer_choice();

    obtain_winner(computer_choice, user_choice);

    return 0;
}