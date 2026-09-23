#include<iostream>

using namespace std;

class Father{
    public:
    void House(){
        cout <<"Father have chocolate"<< endl;

    }
};

class Child :public Father{

};

class subChild : public Child{

};

int main(){
    Child myObj;
    myObj.House();

    return 0;
    
}
