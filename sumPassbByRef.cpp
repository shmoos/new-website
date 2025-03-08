#include <iostream> 


using namespace std; 

void sumbyref(int num) { 
    int sum = 0; 
    for (int i = 0; i < num; i++) { 
        sum += i; 
        
    }
    cout << sum << endl; 
}
int main() { 
    int num; 

    cout << "Enter a number"; 
    cin >> num; 
    cout << "The cumilative sum: "; 
    sumbyref(num);
    return 0; 
}
