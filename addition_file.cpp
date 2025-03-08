#include <iostream> 
#include <iomanip> 

using namespace std; 

int main() { 
    //int row;  
    int numCols; 
    int numRows;

    cout << "Lets build an addition table!" << endl; // greeting 
    cout << "Enter the number of columns: ";  
    cin >> numCols;  
    cout << "Enter the number of rows: "; 
    cin >> numRows; 

    if (numCols <= 1 || numCols >= 12) { 
        cout << "  | ";
        for (int col = 1; col <= numCols; ++col) {  // has to be in a condition set to <= of the declared variable 
            cout << setw(3) << col; // supposed to print column header 
    }
    cout << endl; 
    }
    else { 
        cout << "Invalid input, try again" << endl; 
        cout << "Enter the number of columns: "; 
        cin >> numCols; 
    }
    
    if (numRows >= 1 || numRows <= 12 ) { 
        
    }

    cout << "---"; 
    for (int col = 1; col <= numCols; ++col) {
        cout << "----"; 
    }
    cout << endl; 
// primary focus is row headers 

    cout << "  | " << endl;
    for (int row = 1; row <= numRows; row ++) { 
        cout << "  | " << endl;
    }
   
   // table values later 
   
    /*if (row >=1 && row <=12) { 
        cout << "Enter the number of columns: ";
        cin >> col; 
    }
    else { 
        cout << "Invalid input, try again" << endl; 
        cout << "Enter the number of columns: ";
        cin >> col;
    }*/ 





    return 0; 
}