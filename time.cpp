#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(0);

    tm *ltm = localtime(&now);

    cout << "Year: " << 1900 + ltm->tm_year << endl;
    cout << "Month: " << 1 + ltm->tm_mon << endl;
    cout << "Date: " << ltm->tm_mday << endl;

    cout << "Formatted Date: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << endl;

    return 0;
}