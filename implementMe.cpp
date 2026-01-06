#include <iostream>
#include <stdexcept>

using namespace std;



// Implement me team member 1
int add(int a, int b) {



    // Type the correct logic
    return 0;
}

// Implement me team member 2
int subtract(int a, int b) {


    // Type the correct logic
    return 0;
}

// Implement me team member 3
int multiply(int a, int b) {

    // Type the correct logic
    return 0;
}

// Implement me team member 4
int divide(int a, int b) {

    if(b==0) {
        cout<<"Error" << endl;
        return 0;
    }
    return a/b;
}

// Implement me team leader
int main() {
    int a = 10;
    int b = 5;


    //                  Write the team members names
    cout << "Addition: (By Mohammad Abushehada) " << add(a, b) << endl;
    cout << "Subtraction: (By Thimar Arda) " << subtract(a, b) << endl;
    cout << "Multiplication: (By Mohammad Maraabah) " << multiply(a, b) << endl;
    cout << "Division: (By Abdulrahman Nassar) " << divide(a, b) << endl;

    
    return 0;
}
