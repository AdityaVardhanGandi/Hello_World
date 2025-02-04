#include <iostream>
#include <cstdlib>
#include <ctime>

char getComputerChoice() {
    char choices[3] = {'r', 'p', 's'};
    return choices[std::rand() % 3];
}

std::string determineWinner(char player, char computer) {
    if (player == computer) return "It's a tie!";
    if ((player == 'r' && computer == 's') || (player == 'p' && computer == 'r') || (player == 's' && computer == 'p'))
        return "You win!";
    return "Computer wins!";
}

void playGame() {
    char playerChoice;
    std::srand(std::time(0));
    
    std::cout << "\nRock, Paper, Scissors Game!" << std::endl;
    std::cout << "Choose (r)ock, (p)aper, or (s)cissors: ";
    std::cin >> playerChoice;
    
    char computerChoice = getComputerChoice();
    
    std::cout << "Computer chose: " << computerChoice << std::endl;
    std::cout << determineWinner(playerChoice, computerChoice) << std::endl;
}

int main() {
    char choice;
    do {
        playGame();
        std::cout << "\nDo you want to play again? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    std::cout << "Thanks for playing!" << std::endl;
    return 0;
}
