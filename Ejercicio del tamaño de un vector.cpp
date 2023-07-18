#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Ingrese el tamaño del vector: ";
    std::cin >> size;

    std::vector<int> vectorOriginal(size);

    std::cout << "Ingrese los elementos del vector, uno por uno:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vectorOriginal[i];
    }

    std::cout << "\nEl vector original es: ";
    for (int i = 0; i < size; ++i) {
        std::cout << vectorOriginal[i] << " ";
    }

    std::cout << "\nEl vector en orden inverso es: ";
    for (int i = size - 1; i >= 0; --i) {
        std::cout << vectorOriginal[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

