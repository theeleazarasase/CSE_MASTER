#include <iostream>
#include <cmath>

int main(){
    int n;
    // prompt the user for a number
    std::cout << "enter a number";
    std::cin >> n;
    // do the math, get the sqaure
    //print out the results:
    double sqaured;
    sqaured = std::pow(n,2);
    std::cout << " the number enterd is: " << n<<"\n";
    std::cout << " the number sqaured is: " << sqaured;

}