//  Polymorphism
//  Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

// Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.

// For example, imagine a base class Animal with a method called makeSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds, etc. Every animal can "make a sound", but each one sounds different:


#include<iostream>

using namespace std;

class Animal{
    public:
    void animalSound(){
        cout <<"Animal makes Sounds :"<<endl;

    }
};

class pig : public Animal{
    public:
    void animalSound(){
        cout <<"Pigs Says : wee weeeee"<<endl;

    }
};

   
class dog : public Animal{
    public:
    void animalSound(){
        cout <<"Dog barks : boww woww"<<endl;

    }
};

int main(){
    Animal myAnimal;
    pig myPig;
    dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    return 0;
    

}