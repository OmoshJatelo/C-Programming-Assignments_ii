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