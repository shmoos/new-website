#include <iostream>
using namespace std; 
int main() { 
    string first_name; 
    cout << "Please enter your first name:"; 
    cin >> first_name; 
    cout << "Hello there, " << first_name << "!" << endl; 
    cout << "Different ways of outputs:" << endl << endl;
    cout << first_name << "  " << first_name << "  " << first_name; 
    cout << endl << endl; 
    cout << first_name << "\n"; 
    cout << first_name << "\n"; 
    cout << first_name << "\n"; 
    /*
    Answer 1: it allows the user to input their name with characters 
    Answer 2: inserts 2 new lines making it the same as "\n"
    Outputs: 
    Please enter your first name:Yusuf Jabbar 
    Hello there, Yusuf!
    Different ways of outputs:

    Yusuf  Yusuf  Yusuf

    Yusuf
    Yusuf
    Yusuf */


    
    }