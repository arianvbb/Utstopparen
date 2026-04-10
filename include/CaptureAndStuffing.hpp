#pragma once
#include <iostream>

inline void CaptureBird(int num){
    int user_choice;
    auto bird = spawnBird(num);
    std::cout << "Grattis, du fange ein " << bird.Name << " som e ein " << bird.Rarity << " i sjeldenhet, ka ønske du å gjør me an?\n";
    std::cout << "1. Utstoppa an\n";
    std::cout << "2. Frysa an\n";
    std::cin >> user_choice;
    if(user_choice == 1){
        if(UserTest() == true){
        std::cout << '\n';
        bird.State = "Utstoppa";
        Save(bird);      
    }
    }
    else if(user_choice == 2){
        std::cout << '\n';
        bird.State = "Fryst";
        Save(bird);
    }
}

/*
inline void StuffBird(){
    if(UserTest() == true){
        bird.State = "Utstoppa";
    }
}
    */