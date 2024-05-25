#include <iostream>
#include <cstdlib>
#include "BESTfunction.h"

int main() {
    int a, b;
    std::cout << "Enter 2 integer numbers (catheters of the right triangle):\n"; 
    std::cin >> a >> b;
    std::cout << "Hypotenuse: " << calculateHypotenuse(a, b) << std::endl;
    system("pause"); // So that the program does not close instantly
    return 0;
}