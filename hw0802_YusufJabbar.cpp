#include <iostream> 

using namespace std;

void circle2(double radius, double& area); 

int main() { 
    double radius, area; 

    cout << "Enter the radius of the circle: ";
    cin >> radius; 

    circle2(radius, area); 

    cout << "The area of the circle is: " << area << endl;
    return 0; 
}

void circle2(double radius, double& area) { 
    area = 3.14 * radius * radius; 

    return; 
}
// Output
/*Enter the radius of the circle: 2
The area of the circle is: 12.56*/