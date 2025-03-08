#include <iostream> 

using namespace std; 

int main() {

    string firstName; //identify string 
    string lastName; 

    cout << "Enter your first and last name: ";
    cin >> firstName >> lastName; 

    cout << "Your name is: " << lastName << " " << firstName << endl; 
    return 0; 
}