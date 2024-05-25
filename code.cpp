#include <iostream>
#include <cstdlib>

int main() {
    int a, b;
    std::cout << "Enter 2 integer numbers:\n"; 
    std::cin >> a >> b;
    std::cout << "Sum of these numbers is " << a + b << std::endl;
    system("pause"); // So that the program does not close instantly
    return 0;
}