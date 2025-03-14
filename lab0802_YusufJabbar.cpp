#include <iostream> 

using namespace std; 

void swap(int &a, int &b){
    int temp = a; 
    a = b; 
    b = temp;
}

void sortDescending(int &num1, int &num2, int &num3) { 
    if (num1 < num2) { 
        swap(num1, num2); 
    }
    if (num1 < num3) { 
        swap(num1, num3); 
    }
    if (num2 < num3) { 
        swap(num2, num3); 
    }
}

int main() {
    int num1, num2, num3;

    cout << "Enter the 1st number: "; 
    cin >> num1; 
    cout << "Enter the 2nd number: "; 
    cin >> num2; 
    cout << "Enter the 3rd number: "; 
    cin >> num3; 

    sortDescending(num1, num2, num3);

    cout << "The numbers (from biggest to smallest): " << num1 << " " << num2 << " " << num3 << endl; 

    return 0; 

}
/*
Enter the 1st number: 10
Enter the 2nd number: 20
Enter the 3rd number: 30
The numbers (from biggest to smallesat): 30 20 10
*/