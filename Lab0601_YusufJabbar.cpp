#include <iostream> 
using namespace std; 

int main() { 
    int stump;
    int num; 
     // mount of asteriks for the stump 

    cout << "Enter number of rows: "; //greeting 
    cin >> num; 
    
    for(int row = 1;row <= num;row++) 
    { 
        for ( int col = 1; col <= num; col++) { 
            if (col <= row) {
                cout << "*";
            }
            }
            cout << endl; 
        }
    stump = num / 2;
    for(int row = 1;row <= stump;row++) { 
        cout << "*" << endl; 

    }

    return 0; 
}

/*
Enter number of rows: 5
*
**
***
****
*****
*
*
*/
