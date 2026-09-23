#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    // 1. File me data write karna
    ofstream myfile("filename.txt"); // ✅ Dono jagah small letter 'f' rakha
    myfile << "this is the first example of files:";
    myfile.close(); // ✅ Sabse important: Pehle file ko CLOSE karo taaki data save ho jaye!

    string myText;

    // 2. File se data read karna
    ifstream MyReadFile("filename.txt");

    // Loop chala kar line by line read karna
    while (getline (MyReadFile, myText)) {
        cout << myText << endl; // ✅ Output screen par dikhega
    }

    // Close the read file
    MyReadFile.close();

    return 0;
}
