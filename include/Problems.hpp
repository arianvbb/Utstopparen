#include <chrono>
#include <random>
#include <iostream>

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::mt19937 gen(seed);
std::uniform_int_distribution NumChance(1, 10);

inline std::tuple<std::string, int> Problem(){
    int Num1 = NumChance(gen);
    int Num2 = NumChance(gen);
    std::string Equation = "What's " + std::to_string(Num1) + " + " + std::to_string(Num2) + "?";
    int Answer = Num1 + Num2;
    return {Equation, Answer};
};