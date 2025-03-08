#include <iostream> 
#include <string> 
#include <iomanip> 


using namespace std;

int main() { 

    string item_name; 
    double item_cost; 
    double amount_paid; 
    double tax_rate; 
    double total_cost; 
    double change; 

    


    cout << "What is the item? "; 
    getline(cin, item_name); 

    cout << "How much did it cost? "; 
    cin  >>  item_cost; 


    cout << "How much was paid? "; 
    cin  >> amount_paid; 
    cout << endl; 

    tax_rate = item_cost * 0.06; 
    total_cost = item_cost + tax_rate; 
    change = amount_paid - total_cost; 

    cout << "Reciept" << "\n"; 
    cout << left << setw(13) << item_name << right << setw(3) << "$" << fixed << setprecision(2) << item_cost << "\n";
    cout << left << setw(13) << "Tax (6%)" << right << setw(3) << "$" << tax_rate << "\n";
    cout << left << setw(13) << "Total" << right << setw(3) << "$" << total_cost << "\n"; 
    cout << left << setw(13) << "Amount Given" << right << setw(3) << "$" << amount_paid << "\n"; 
    cout << left << setw(13) << "Change" << right << setw(3) << "$" << change << "\n";

   /* 
    Sample Output: 
    
    What is the item? Space Jam DVD
    How much did the item cost? 5.00
    How much was paid? 10.00


    Reciept
    Space Jam DVD  $5.00
    Tax (6%)       $0.30
    Total          $5.30
    Amount Given   $10.00
    Change         $4.70
*/
   

    return 0; 
}