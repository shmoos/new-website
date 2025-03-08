#include <iostream>
int main() {
    int semester; 
    std::cout << "My name is Yusuf Jabbar\n"; 
    std::cout << "I am major in Electrical Engineering\n";
    std::cout << "Please enter your current semester in Behrend:"; //this is a prompt that the user will respond to with a 1
    std::cin >> semester; //this makes it possible to use input to determine the value of the variable: semester
    std::cout << "Good luck with your semester" << semester <<" at Behrend!" << std::endl; //using std::endl to indicate that this is ending the line 
    return 0; //using return 0 to indicate that the program has successfully executed
    /*
My name is Yusuf Jabbar
I am major in Electrical Engineering
Please enter your current semester in Behrend:1
Good luck with your semester1 at Behrend!
    */
}
