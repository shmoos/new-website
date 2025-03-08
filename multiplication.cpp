#include <iostream> 
using namespace std; 


int main() { 
    int x; 

    cout << "Enter the size of the matrix: "; 
    cin >> x; 

    int matrix[x][x];
    int transpose[x][x]; 

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < x; ++i) { 
        for (int j = 0; j < x; ++j) { 
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < x; ++i) { 
        for (int j = 0; j < x; ++j) {
            cout << transpose[i][j] << " "; 
        }
        cout << endl;
    }

    return 0; 
}

/*Enter the size of the matrix: 3
Enter the elements of the matrix:
1 2 3
4 5 6
7 8 9
Original Matrix:
1 2 3 
4 5 6 
7 8 9 
Transposed Matrix:
1 4 7 
2 5 8 
3 6 9 */