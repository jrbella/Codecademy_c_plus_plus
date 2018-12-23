#include <iostream>
#include <stdlib.h>
#include <string>

int main(){
    //Program that depicts a winner of the game
    //rock, paper, scissor, lizard, spock
    srand(time(NULL));

    int computer = rand() % 3 + 1;
    int user = 0;
    int user_score = 0;
    int computer_score = 0;

    //Region for game
    std::cout << "====================\n";
    std::cout << "Rock paper scissors!\n"; 
    std::cout << "====================\n"; 
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot! ";
    std::cin >> user;

    switch (user) {
        case 1 :
            if(computer == 3){
                std::cout << "Computer throws scissors,You win!\n";
                user_score += 1;
            }
        else{
            std::cout << "Computer throws paper, You lose\n";
            computer_score += 1;
        }
        break;
        case 2 :
            if(computer == 1){
                std::cout << "The computer throws rock, You win!\n";
                user_score += 1;
            }
            else{
                std::cout << "The computer throws scissor,You lose\n";
                computer_score += 1;
            }
        break;
        case 3:
            if(computer == 2){
                std::cout << "The computer throws paper, You win!\n";
                user_score += 1;
            }
            else{
                std::cout << "The computer throws rock, You lose\n";
                computer_score += 1;
            }
        break;
        default:
            if(user == computer){
                std::cout << "You and the computer have thrown " << user << "!\n";
            }
            else{
                std::cout << "An error has occured please try again\n";
            }
        break;
    }
    std::cout << "The current score is: Computer " << computer_score << " User " << user_score << "\n";
}