#include <iostream>

int main() {
    using VEC = int*;
    using MATRIX = VEC*;

    int a = 5;
    VEC v = &a;  // v points to a
    MATRIX m = &v;  // m points to v

    std::cout << "Value of a using v: " << *v << std::endl;
    std::cout << "Value of a using m: " << **m << std::endl;

    return 0;
}
