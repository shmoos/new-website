#include <iostream> 
#include <string> 
#include <math.h> 

using namespace std; 

int main() { 

    double testScore = 0;
    cout << "Please enter your test score: ";
    cin >> testScore;  

    testScore = round(testScore); 

    if (testScore >= 90 && testScore <= 100) { 

        cout << "grade: A+ \n"; // grade : A 
    }
    else if (testScore >= 80 && testScore <= 89) { 
        cout << "grade: A \n"; 

    }
    else if (testScore >= 70 && testScore <= 79) { 
        cout << "grade: B \n"; 
    }
    else if (testScore >=60 && testScore <= 69) { 
        cout << "grade: C\n"; 
    }
    else if (testScore <= 50 && testScore <= 59) { 
        cout << "gradeL D\n"; 
    }
    else if (testScore > 0 && testScore <= 49) { 
        cout << "grade: F\n"; 
    }
    else { 
        cout << "Invalid score, please try again\n"; 
    }
    return 0; 
    
     
    }
/*Please enter your test score: 89.5
grade: A+ */

    



    