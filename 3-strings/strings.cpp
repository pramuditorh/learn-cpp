#include<iostream>
using namespace std;

int main(){

    string text1 = "Visit";
    string text2 = "pramuditorh.com";

    //This is called concatenation
    string text3 = text1 + " " + text2;
    
    //Print the text
    cout << text1 << " " << text2 << endl;

    //Print concatenated text
    cout << text3 << endl;

    //We also can use method in string. Eg: size()
    cout << "Number of character in text2 is " << text2.size() << endl;

    return 0;
}