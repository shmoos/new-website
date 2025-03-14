#include <iostream> 

using namespace std; 

void sumbyref(int& sum, int num) { 
    sum += num; 

}

int main() { 
    int maxNum, sum = 0; 
    cout << "Enter a number: "; 
    cin >> maxNum; 
    cout << endl; 

    if (maxNum < 0) { 
        cout << "Invalid input. Please enter a positive number." << endl; 
        return 1;
    }

    for(int i = 0; i <= maxNum; i++) { 
        sumbyref(sum, i); 
    }
    cout << "The cumalative sum: " << sum << endl; 
    return 0; 
}
/*
Enter a number: 10
The cumalative sum: 55
*/