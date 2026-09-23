#include<iostream>

using namespace std;
// class test{
//     public:
    
//         int a , b , c;
//         // default constructor
//         test(){
//             a=12;
//             b=11;
//             c=a+b;
//             cout<<"Constructor called! Values Initialized."<<endl;
//         }

    
// };
class test{
    public:
    
        int a , b, result;
        // parameterized constructor
        test(int x, int y){
            a=x;
            b=y;
            result=a+b;
            cout<<"Constructor called! Values Initialized."<<endl;
        }

    
};

//   paramerized constructor is a constructor that takes parameters to initialize an object with specific values. In the provided code, the `test` class has a parameterized constructor that takes two integers `x` and `y`, assigns them to the member variables `a` and `b`, and calculates their sum, storing it in the member variable `result`. When an object of the `test` class is created with specific values, this constructor is called, and it initializes the object's state accordingly.
int main(){
    test obj(12, 11);
    cout<<obj.result<<endl;    
    return 0;
}