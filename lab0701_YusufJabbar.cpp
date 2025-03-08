#include <iostream> 


using namespace std; 

void sumbyvalue(int num) { 
    int sum = 0; 
    for (int i = 0;i <= num; i++) { 
        sum += i; 
    }
        cout << sum << endl; 
    } 
int main () { 
    int num; 

    cout << "Enter a number: "; 
    cin >> num; 
    cout << "The cumulative sum: ";   
    sumbyvalue(num);
    return 0;  
}
/*Enter a number: 3
The cumulative sum: 6*/