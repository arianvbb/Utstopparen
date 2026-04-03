#include <iostream>
#include "Spawning.hpp"
#include "Problems.hpp"
#include "Saving.hpp"
#include "UI.hpp"

std::uniform_int_distribution<int> Chance(1, 1000);

void CaptureBird(std::uniform_int_distribution<int>& dist);

int main(){

    int solves = 0;
    int needed_solves = 10;
    bool game_state = true;
    do{
    switch(MainMenu(solves, needed_solves)){
        case 1: DisplayCollection(); break;

        case 2: {
                int user_reply;
                auto [question, answer] = Problem();
                std::cout << question << '\n';
                std::cin >> user_reply;
                if(user_reply == answer){
                std::cout << "Bra jobba!\n";
                std::cout << '\n';
                solves ++;
                }
                else{
                    std::cout << "Feil svar\n";
                    std::cout << '\n';
                    MainMenu(solves, needed_solves);
                }
                break;
            }
        case 3: {
            if(solves >= needed_solves){
                solves -= 10;
                CaptureBird(Chance);
            }
            else{
                std::cout << "Ikkje nok oppgaver løyst\n";
                std::cout << '\n';
            }
            break;
        }
        case 5: game_state = false; break;
        default: break;
    };
    }while(game_state == true);
    return 0;
}

void CaptureBird(std::uniform_int_distribution<int>& dist){
    int user_choice;

    int num = Chance(gen);
    auto bird = spawnBird(num);
    std::cout << "Congrats, you caught a " << bird.Name << " which is a " << bird.Rarity << " in rarity, what do you wanna do?\n";
    std::cout << "1. Utstoppa an\n";
    std::cout << "2. Frysa an\n";
    std::cin >> user_choice;
    if(user_choice == 1){
        if(UserTest() == true){
        bird.State = "Utstoppa";
        Save(bird);      
    }
    }
    else if(user_choice == 2){
        bird.State = "Fryst";
        Save(bird);
    }
}