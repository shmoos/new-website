#include <iostream> 

using namespace std; 

void circle1 (int r) { 

    int r2 = r*r; 
    double area = 3.14*r2;

    cout << "The area of a circle is " << area << endl;
    
}


int main() { 
    int r; 
    
    cout << "Enter a number: ";
    cin >> r; 
    cout << "The area of a circle is"; 
    circle1(r); 
    return 0; 
}