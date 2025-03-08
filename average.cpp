#include <iostream> 
using namespace std; 
int main() { 
    double num1, num2, num3, num4, num5;
    double sum; 
    double avg; 
    cout << "Please enter Number 1: ";
    cin >> num1;
    cout << "Please enter Number 2: ";
    cin >> num2; 
    cout << "Please enter Number 3: ";
    cin >> num3; 
    cout << "Please enter Number 4: "; 
    cin >> num4; 
    cout << "Please enter Number 5: "; 
    cin >> num5; 

    sum = num1 + num2 + num3 + num4 + num5; 
    avg = sum / 5;

    cout << "The sum of the 5 numbers = " << sum << "\n";
    cout << "The average of the 5 numbers = " << avg << "\n";

    return 0; 

    /* 
    Please enter Number 1: 23
    Please enter Number 2: 75
    Please enter Number 3: 90
    Please enter Number 4: 87
    Please enter Number 5: 11
    The sum of the 5 numbers = 286
    The average of the 5 numbers = 57.2
    */

    

}