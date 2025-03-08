#include <iostream>
#include <string>

using namespace std;

int main() {
    string full_name;
    int experiance; 
    int tenure;
    int salary;  

    cout << "Enter your full name:"; 
    getline(cin,full_name); 

    cout << "How many years of experiance of do you have: "; 
    cin >> experiance; 

    cout << "How long (in years) is your tenure: "; 
    cin >> tenure; 

    salary = (2000 * experiance) + (1000 * tenure ) + 50000; 

    cout << full_name + "'s" <<  " salary is $" << salary << "\n"; 


    /*
    Enter your full name:Yusuf Jabbar
    How many years of experiance of do you have: 5
    How long (in years) is your tenure: 4
    Yusuf Jabbar's salary is $64000 
    */

    return 0;
} 

