#include<iostream>
using namespace std;

class Employee {
    private:
    int salery;
    public:
    Employee(int s) {
        salery=s;

    }
    friend void displaySalery(Employee emp);
};
void displaySalery(Employee emp){
    cout << "salery : " << emp.salery;
}

int main(){
    Employee myEmp(400000);
    displaySalery(myEmp);
    return 0;
}