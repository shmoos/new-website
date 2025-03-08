#include <iostream> 
#include <string> 
#include <iomanip> 

using namespace std; 

int main() { 
    
    char drinkName;
    double cash;

    double change1; 
    double change2; 
    double change3; 
    double change4;  

    cout << "Enter the soda name (sprite = s, fanta = f, coca-cola = c, Drpepper = d):"; 
    cin >> drinkName;
    cout << "Input the money: $";  
    cin >> cash;
    switch (drinkName) { 
        case 's':
            cout << "You ordered Sprite" << endl;
             change1 = cash - 2.68;
            cout << "Your change is $" << change1 << endl;
            break; 
        case 'f':
            cout << "You ordered Fanta" << endl; 
             change2 = cash - 1.78;
            cout << "Your change is $" << change2 << endl;
            break; 
        case 'c': 
            cout << "You ordered Coca-cola" << endl; 
             change3 = cash - 2.68;
            cout << "Your change is $" << change3 << endl;
            break;
        case 'd':
            cout << "You ordered Dr.Pepper" << endl;
             change4 = cash - 1.98; 
            cout << "Your change is $" << change4 << endl;
            break;
        default: // used to catch any invalid inputs 
            cout <<"The drink your ordered is out of stock. Please try again";
            break; 

    }
    return 0; 
}
//Sample Output 1 
/*Enter the soda name (sprite = s, fanta = f, coca-cola = c, Drpepper = d):s
Input the money: $5
You ordered Sprite
Your change is $2.32*/

//Sample Output 2 
/*Enter the soda name (sprite = s, fanta = f, coca-cola = c, Drpepper = d):a
Input the money: $5
The drink your ordered is out of stock. Please try again%*/