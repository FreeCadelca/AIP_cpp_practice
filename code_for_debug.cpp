#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;
    int e = 25;
    for(int i = 0; i < a; i++) {
        b += i;
        if (b > c) {
            d++;
        }
        if (d > e) {
            b = 10;
            d = 20;
        }
        printf("Iteration %d: a=%d, b=%d, c=%d, d=%d, e=%d\n", i, a, b, c, d, e);
	// Да, я старый...
    }
    return 0;
}