#include <iostream>

class Animal{
    public: 
        bool alive = true;

    void eat(){
        std::cout << "This animal is eating!\n";
    }
};

class Dog : public Animal{
    public:

    void bark(){
        std::cout << "The dog goes woof!\n";
    }
};

class Cat : public Animal{
    public:

    void meow(){
        std::cout << "The cat said meow!\n";
    }
};

int main(){

    // inheritance : A class can recieve attributes and methods from another class
    // Children classes inherit from a parent class
    // Helps to reuse similar code found within multiple classes

    Dog dog;

    std::cout << dog.alive << std::endl;
    dog.eat();
    dog.bark();

    Cat cat;
    std::cout << cat.alive << std::endl;
    cat.eat();
    cat.meow();

    return 0;
}