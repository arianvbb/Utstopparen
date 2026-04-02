#include <iostream>
#include "Spawning.hpp"
#include "Problems.hpp"
#include "Saving.hpp"

int main(){
    auto bird = spawnBird(800);
    std::cout << bird.Name << '\n';

    auto [question, answer] = Problem();
    std::cout << question << '\n';
    std::cout << answer << '\n';

    Save(bird);

    return 0;
}