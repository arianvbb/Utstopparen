#include <iostream>
#include "Spawning.hpp"
#include "Problems.hpp"
#include "Saving&Del.hpp"
#include "UI.hpp"
#include "CaptureAndStuffing.hpp"

std::uniform_int_distribution<int> Chance(1, 1000);

int main(){

    int solves = 0;
    int needed_solves = 3;
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
                solves -= needed_solves;
                int num = Chance(gen);
                CaptureBird(num);
            }
            else{
                std::cout << "Ikkje nok oppgaver løyst\n";
                std::cout << '\n';
            }
            break;
        }
        case 5: {
            Clear();
            break;
        }
        case 6: game_state = false; break;
        default: break;
    };
    }while(game_state == true);
    return 0;
}