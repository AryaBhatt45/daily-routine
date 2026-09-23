#include <bits/stdc++.h>

using namespace std;

// int cnt = 0;
// void f()
// {
//    if( cnt ==10){
//    return;
//    }

//    cout<<cnt<<" ";
//    cnt++;

//    f();
// };

int sumOfN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
   

    return n + sumOfN(n - 1);
}
int main()
{
    int n = 10;
    int sum=sumOfN(n);

    cout << "The reverse sum is  :"<<sum;
    sumOfN(n);
    return 0;
}