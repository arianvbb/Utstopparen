#include <iostream>
#include <fstream>
#include "Birds.hpp"

inline void Save(const Bird& bird){
    std::fstream File;
    File.open("Collection.txt", std::ios::app);

    if(File.is_open()){
        File << bird.Name << " " << bird.Rarity << " " << bird.State << " " << bird.Difficulty << " " << bird.Weight << " " << bird.Length << " " << bird.Wingspan << '\n';
    }
    else{
        std::cout << "Couldn't open file.\n";
    }
}

inline void Clear(){
    std::ofstream File;
    File.open("Collection.txt", std::ios::trunc);

    if(!File.is_open()){
        std::cout << "Couldn't open file.\n";
    }
    File.close();
}