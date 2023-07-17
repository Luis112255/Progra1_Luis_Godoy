#include <iostream>
#include <vector>
#include <algorithm>

void mostrarVector(const std::vector<int>& vector) {
    for (int numero : vector) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numeros;
    std::vector<int> numerosOrdenadosDesc;
    std::vector<int> numerosOrdenadosAsc;


    for (int i = 0; i < 15; i++) {
        int numero;
        std::cout << "Ingrese el número " << i + 1 << ": ";
        std::cin >> numero;
        numeros.push_back(numero);
    }


    numerosOrdenadosDesc = numeros;
    numerosOrdenadosAsc = numeros;


    std::sort(numerosOrdenadosDesc.begin(), numerosOrdenadosDesc.end(), std::greater<int>());
    std::cout << "Vector ordenado de mayor a menor: ";
    mostrarVector(numerosOrdenadosDesc);


    std::sort(numerosOrdenadosAsc.begin(), numerosOrdenadosAsc.end());
    std::cout << "Vector ordenado de menor a mayor: ";
    mostrarVector(numerosOrdenadosAsc);





