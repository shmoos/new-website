#include <iostream> 


using namespace std; 

int main() { 

    int number; 
    int n1, n2, n3, n4, n5, n6; 
    int sum; 
    int sum2; 


    cout << "Please enter a six-digit number: "; 
    cin >> number; 

    n1 = number / 100000;  //5731
    n2 = number / 10000 % 10; 
    n3 = number / 1000 % 10;
    n4 = number / 100 % 10; 
    n5 = number / 10 % 10; 
    n6 =  number % 10;
    sum = n1 + n2 + n3 + n4 + n5 + n6; 
    sum2 = n1 * n2 * n3 * n4 * n5 * n6; 

    
    cout << "Sum of the digits " << n1 << " + " << n2 << " + " << n3 << " + " << n4 << " + " << n5 << " + " << n6 <<  " = " << sum << endl; 
    cout << "Multiplication of the digits: " << n1 << " * " << n2 << " * " << n3 << " * " << n4 << " * " << n5 << " * " <<  n6 << " = " << sum2 << endl; 


    return 0; 
}
    /* 
    Sample Output: 
    Please enter a four-digit number: 2345
    Sum of the digits 2 + 3 + 4 + 5 = 14
    Multiplication of the digits: 2 * 3 * 4 * 5 = 120
    */