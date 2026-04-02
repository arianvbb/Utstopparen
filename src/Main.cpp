#include <iostream>
#include "Spawning.hpp"
#include "Problems.hpp"

int main(){
    auto bird = spawnBird(800);
    std::cout << bird.Name << '\n';

    auto [question, answer] = Problem();
    std::cout << question << '\n';
    std::cout << answer << '\n';

    return 0;
}