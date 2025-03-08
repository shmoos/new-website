#include <iostream> 
#include <iomanip> 
#include <cmath> 


using namespace std; 

int main() { 

    double princAmount; 
    double interestRate; 
    int compoundAmount; 
    double totalAmount; 
    double interest; 


    cout << "Please enter the principal amount: "; 
    cin  >> princAmount; 
    
    cout << "Please enter the interest rate: "; 
    cin >> interestRate; 

    cout << "Please enter the number of times compounded: ";
    cin >> compoundAmount; 
    cout << endl; 

    double rate = interestRate / 100;

    totalAmount = princAmount * pow((1 + rate / compoundAmount), compoundAmount); 

    interest = totalAmount - princAmount; 



    cout << fixed << showpoint << setprecision(2);
    cout << "Interest Rate:" << right  << setw(16) << interestRate << "%" << endl;
    cout << "Times Compounded:" << right << setw(13) << compoundAmount << endl; 
    cout << "Principal:         $"<< right << setw(10)  <<  princAmount << endl; 
    cout << "Interest:          $" << right << setw(10) << interest << endl; 
    cout << "Amount in Savings: $" << right << setw(10) << totalAmount << endl;

    return 0 ; 
}
/*Please enter the principal amount: 1000.00
Please enter the interest rate: 4.25
Please enter the number of times compounded: 12

Interest Rate:            4.25%
Times Compounded:           12
Principal:         $   1000.00
Interest:          $     43.34
Amount in Savings: $   1043.34*/