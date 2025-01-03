void determineWinner(char playerChoice, char computerChoice) {
    if (playerChoice == computerChoice)
    {
        printf("It's a tie! Both chose %c.\n", playerChoice);
    }
    else if ((playerChoice == 'S' && computerChoice == 'K') ||
               (playerChoice == 'K' && computerChoice == 'P') ||
               (playerChoice == 'P' && computerChoice == 'S'))
    {
        printf("You win! %c beats %c.\n", playerChoice, computerChoice);
    }
    else
    {
        printf("Computer wins! %c beats %c.\n", computerChoice, playerChoice);
    }
}

int main()
{
    char playerChoice;
    char computerChoice;

    srand(time(0));

    computerChoice = getComputerChoice();
    playerChoice = getPlayerChoice();

    printf("You chose: %c\n", playerChoice);
    printf("Computer chose: %c\n", computerChoice);

    determineWinner(playerChoice, computerChoice);

    return 0;
}
