#include <iostream> 
#include <string> 

using namespace std; 

int main() { 
    int intx, inty; 
    double doublex, doubley; 
    string stringx, stringy; 

    intx = 5; 
    inty = 6; 

    doublex = 1.1;
    doubley = 2.2; 

    stringx = "firstname"; 
    stringy = "lastname"; 


    cout << "These are the swapped values: " << endl;
    swap(intx,inty); 
    swap(doublex,doubley);
    swap(stringx,stringy);
    cout << "Integers" << endl; 
    cout << "intx:" << intx << " "<< "inty:" << inty << " " << endl; 
    cout << "Doubles" << endl; 
    cout << "doublex:" << doublex << " "<< "doubley:" << doubley << " " << endl;
    cout << "Strings" << endl; 
     cout << "stringx:" << stringx << " " << "stringy:" << stringy << " " << endl; 
    

    return 0; 
}
/*
These are the swapped values: 
Integers
intx:6 inty:5 
Doubles
doublex:2.2 doubley:1.1 
Strings
stringx:lastname stringy:firstname */