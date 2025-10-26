#include <iostream>

int main() {
    std::cout << "***********\n";
    std::cout << "x  f(x)\n";
    std::cout << "***********\n";

    for (int x = 0; x <= 5; ++x) {
        int fx = x*x*x - x*x + 5; // aritmética entera, sin pow()
        std::cout << x << "  " << fx << '\n';
    }

    std::cout << "***********\n";
    return 0;
}
