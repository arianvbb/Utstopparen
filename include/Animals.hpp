#include <iostream>

class Animal{
    public:
        bool alive = true;
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout << "Woof";
        }
};

int main(){

    return 0;
}