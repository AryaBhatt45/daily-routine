#include <iostream>

using namespace std;

// int fact(int n)
// {
//     if (n == 0 || n==1)
//         return 1;

//    return n * fact(n-1);
    
// }
// int sum(int n) {
//     if(n==0)
//     return 0;
//     return n+sum(n-1);
// }
int fib(int n ){
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    return fib(n-1)+fib(n-2);

}

int main()
{
    int n;
    cout << "Enter the N: ";
    cin >> n;
    cout <<n  <<" The Fbonacci is "<<fib(n);
    return 0;
}