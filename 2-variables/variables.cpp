#include<iostream>
using namespace std;

int main(){
    // Declaring a variable and assign value
    int numberOfCats = 2;
    int foodPerCats = 3;
    
    // We can add mathematich operation in declaring variable
    int foodPerDay = numberOfCats * foodPerCats;

    // Declaring a variable without assign a value
    string catName;

    // Print text with variable
    cout << "I have " << numberOfCats << ", i love them all." << endl;

    // Assign a value in catName variable
    catName = "Brown";

    cout << "My oldest cat called " << catName << ". She sleep all day." << endl;

    // Assign a second value in catName variable, it will replace the first value (Brown)
    catName = "Toothless";

    cout << "My second cat is " << catName << ". He can bite you." << endl;

    cout << "Everyday i spend " << foodPerDay << " packs of food per day for them."  << endl;
    
    return 0;
}