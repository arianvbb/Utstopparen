#pragma once
#include <iostream>
#include "Birds.hpp"
#include <array>

inline const std::array<Bird, 5> Gråstein = 
{
    Gråspurv(),
    Kjøttmeis(),
    Bokfink(),
    Stær(),
    Gråmåke()
};

inline const std::array<Bird, 5> Sølvfjær = 
{
    Isfugl(),
    Hærfugl(),
    Nøtteskrike(),
    Pilfink(),
    Rødstrupe()
};

inline const std::array<Bird, 5> Jernklo = 
{
    Tårnfalk(),
    Vandrefalk(),
    Hornugle(),
    Gråhegre(),
    UngHavørn()
};

inline const std::array<Bird, 5> Gullvinge = 
{
    Kongeørn(),
    Snøugle(),
    Lunde(),
    Svartspett(),
    Papegøye()
};

inline const std::array<Bird, 5> Kongeblikk = 
{
    VoksenHavørn(),
    Kondor(),
    Kakapo(),
    Vandrealbatross(),
    Paradisfugl()
};

inline const std::array<Bird, 1> Odins_minne = 
{
    HaastØrn()
};

inline Bird spawnBird(int percent){
    // Percent will be 1 - 1000
    if(percent == 1000){
        return Odins_minne[0];
    }
    else if(percent >= 990){
        return Kongeblikk[rand() % 5];
    }
    else if(percent >= 950){
        return Gullvinge[rand() % 5];
    }
    else if(percent >= 850){
        return Jernklo[rand() % 5];
    }
    else if(percent >= 650){
        return Sølvfjær[rand() % 5];
    }
    else{
        return Gråstein[rand() % 5];
    }
};