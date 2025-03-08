#include <iostream> 
#include <string> 

using namespace std; 

int main() { 

    string firstName; 
    string middleName; 
    string lastName; 
    
    cout << "Enter your first, middle, and last name: "; 
    cin >> firstName >> middleName >> lastName; 

    cout << "Your name is: " << firstName << " " << middleName << " " << lastName << endl; 

}