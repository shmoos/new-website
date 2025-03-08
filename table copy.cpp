#include <iostream> 
#include <iomanip> 
#include <string> 


using namespace std; 

int main () { 

    int row; 
    int column; 

    cout << "Lets build a multiplication Table!" << endl; 

    cout << "Enter the number of rows (1 to 12 inclusive): "; 
    cin >> row; 

    while (row < 1 || row > 12) { // row 
        cout << "Invalid input, try a different number" << endl; 
        cout << "Enter the number of rows (1 to 12 inclusive): "; 
        cin >> row; 
}

    cout << "Enter the number of columns (1 to 12 inclusive): "; 
    cin >> column; 

    while (column < 1 || column > 12) { // column 
        cout << "Invalid input, try a different number" << endl; 
        cout << "Enter the number of columns (1 to 12 inclusive): ";
        cin >> column;
    } 
    
    cout << endl; 

    cout << setw(4) << " "; 
    for ( int j = 1; j <= column; ++j) { 
        cout << setw(4) << j; 
    }
    cout << endl; 

    int cellAmount = row * column; 
    int i = 1, j =1; 

    while (i * j <= cellAmount) { 
        if (j == 1) { 
            cout << setw(4) << i; 
        }

        cout << setw(4) << i * j; 

        j++; 

        if(j > column) { 
            cout << endl; 
            j = 1; 
            i++; 
        }
        if (i > row) break; 
    }
    return 0; 
} 
    
/*Lets build a multiplication Table!
Enter the number of rows (1 to 12 inclusive): 4
Enter the number of columns (1 to 12 inclusive): 4

       1   2   3   4
   1   1   2   3   4
   2   2   4   6   8
   3   3   6   9  12
   4   4   8  12  16*/