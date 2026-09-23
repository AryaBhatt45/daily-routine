#include <iostream>

using namespace std;

class Solution
{
public:
    // int count(int n)
    // {
    //     int cnt = 0;

    //     while (n > 0)
    //     {
    //         int ld = n % 10;
    //         cnt = cnt + 1;
    //         n = n / 10;
    //     }
    //     return cnt;
    // }
    int revNum(int n)
    {
        int rev= 0;
        int dup=n;

        while (n > 0)
        {
            int ld = n % 10;
            rev=(rev*10)+ld;
            n = n / 10;
        }
        if(dup==rev){
            cout <<"is palindrome"<<endl;

        }else{
            cout<<"not a palindrome number "<<endl;
        }
        return rev;
    }
};

int main(){
    Solution obj;
    int number=151;
    int ans = obj.revNum(number);
    cout <<ans;
    return 0;
}
