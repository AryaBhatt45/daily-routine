#include <iostream>
using namespace std;

class myEmp
{
private:
    int salery;

public:
    void setSalery(int s)
    {
        salery = s;
    }
    int getSalery()
    {
        return salery;
    }
};

int main()
{

    myEmp myObj;
    myObj.setSalery(20000);
    cout << myObj.getSalery() << endl;
    return 0;
}
