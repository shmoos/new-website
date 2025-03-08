#include <iostream> 
#include <string>
#include <iomanip> 

using namespace std; 

int main () { 


    string item1; 
    string item2; 
    string item3; 
    string item4; 

    double price1;  
    double price2; 
    double price3; 
    double price4; 
    double total; 

    cout << "Enter names of 4 one-word (maximum 10 letters) items to purchase:" << endl; 
    cin >> item1 >> item2 >> item3 >> item4; 
    
    cout <<"Enter their prices in US Dollars (<= $1,000):" << endl; 
    cin >> price1 >> price2 >> price3 >> price4; 
    cout << fixed << setprecision(2); 

    total = price1 + price2 + price3 + price4; 
    

    cout << "+---------------+-----------+\n";
    cout << "|           Receipt         |\n";
    cout << "+---------------+-----------+\n";
    cout << fixed << showpoint << setprecision(2);
    cout << "|" << left << setw(15) << item1 << "|$" << right << setw(10) << price1 << "|" <<"\n"; 
    cout << "|" << left << setw(15) << item2 << "|$" << right << setw(10) << price2 << "|" <<"\n"; 
    cout << "|" << left << setw(15) << item3 << "|$" << right << setw(10) << price3 << "|" <<"\n"; 
    cout << "|" << left << setw(15) << item4 << "|$" << right << setw(10) << price4 << "|" <<"\n"; 
    cout << "+---------------+-----------+\n";
    cout << "|" << left << setw(15) << "Total" << "|$" << right <<setw(10) << total << "|" << "\n"; 
    cout << "+---------------+-----------+\n";

    return 0; 
}

/* 
Enter names of 4 one-word (maximum 10 letters) items to purchase:
Yogurt Apple Butter Bread 
Enter their prices in US Dollars (<= $1,000):
0.75
8.00
12.99
2.85
+---------------+-----------+
|           Receipt         |
+---------------+-----------+
|Yogurt         |$      0.75|
|Apple          |$      8.00|
|Butter         |$     12.99|
|Bread          |$      2.85|
+---------------+-----------+
|Total          |$     24.59|
+---------------+-----------+
*/