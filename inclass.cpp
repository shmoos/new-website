#include <iostream> 
#include <string> 

using namespace std; 

int main() { 

    string name; 
    int classGrade;
    cout << "Enter your name: "; 
    cin >> name; 
    cout << "Hello," << " " << name << "!" << endl;
    cout << "Enter your grade: "; 
    cin >> classGrade; 
    cout << endl; 


    cout << "The output: " << "\n"; 
    if (classGrade >= 90) { 
        cout << char(65) << endl; 
    }else { 
        if (classGrade >= 80) { 
            cout << char(66) << endl; 

        }
    }


    return 0; 

}