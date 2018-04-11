#include <iostream>
#include "Figura.h"
#include "Punkt.h"

int main() {
    Figura F = Figura("f",Punkt(1,2));
    std::cout << "Hello, World!" << std::endl;
    return 0;
}