#include <iostream> 

using namespace std; 

void circle1(double radius);

int main() { 
    double radius; 

    cout << "Enter the radius of the circle: "; 
    cin >> radius; 

    circle1(radius); 

    return 0;
}

void circle1(double radius) { 
    double area = 3.14 * radius * radius; 
    cout << "The area of the circle is: " << area << endl;

    return; 
}

/*
Enter the radius of the circle: 2
the area of the circle is: 12.56*/