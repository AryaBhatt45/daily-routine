// #include <iostream>
// using namespace std;

// // Base Class (Parent)
// class Vehicle {
// public:
//     void start() {
//         cout << "Vehicle started." << endl;
//     }
// };

// // Derived Class (Child)
// class Car : public Vehicle {
// public:
//     void drive() {
//         cout << "Car is running." << endl;
//     }
// };

// int main() {
//     Car myCar;
//     myCar.start(); // Parent ka function
//     myCar.drive(); // Child ka apna function
//     return 0;
// }

// #include <iostream>

// using namespace std;

// class Car
// {
// public:
//     void start(){
//         cout << "car started:";
//     }
// };

// class Music
// {
// public:
//     void sing() 
//     {  
//         cout << "singing:"<< endl;
//     }
// };

// class smartCar : public Car, public Music
// {
//     public:
//     void drive()
//     {
//         cout << "arya are you ready:" << endl;
//     }
// };

// int main()
// {
//     smartCar obj;
//     obj.start();
//     obj.sing();
//     obj.drive();
//     return 0;


// }

#include<iostream>

using namespace std;

// class grandFather {
//     public:
//     void House(){
//         cout<<"Dadu have house "<<endl;

//     } 
// };

// class Father{
//     public:
//     void Car() {
//         cout <<"Father have car"<<endl;

//     }

// };

// class Son : public grandFather, public Father {
//     public:
//     void myBike(){
//         cout<<"I have bike "<< endl;
//     }
// };

// int main (){
//     Son myObj;
//     myObj.House();
//     myObj.Car();
//     myObj.myBike();

//     return 0;



// }
class grnadParent {
    public:
    int a=10;
    void display(){
        cout<<"grandparent class"<<endl;
    }
};
class parent : public grnadParent {
    public:
    int b=20;
    // void display(){
    //     cout<<"parent class"<<endl;
    // }
};

class  child : public parent {
    public:
    int c=30;
    // void show(){
    //     cout<<"child class"<<endl;
    // }
};

int main(){
    child obj;
    obj.display();
    
    cout<<obj.a<<endl<<obj.b<<endl<<obj.c<<endl;
    

    return 0;
}
