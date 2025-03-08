#include <iostream>

using namespace std; 

int main() { 
    int num1; // declaring integer variables 
    int num2; 

    
    cout <<"Enter two numbers: " << endl;
    cin >> num1; 
    cin >> num2; 

    int sum = num1 + num2; // has to be put after the user input not before 
    int diff = num1 -num2; // composition of the two numbers 

    cout << num1 << "+" << num2 << "=" << sum << endl; 
    cout << num1 << "-" << num2 << "=" << diff << endl; 

    return 0; // always 
}