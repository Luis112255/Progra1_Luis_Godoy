#include <iostream>

int main() {
    const int MAX_NOMBRES = 5;
    const int MAX_LONGITUD = 100;

    char nombres[MAX_NOMBRES][MAX_LONGITUD];

    for (int i = 0; i < MAX_NOMBRES; ++i) {
        std::cout << "Ingrese el nombre " << i + 1 << ": ";
        std::cin.getline(nombres[i], MAX_LONGITUD);
    }

    std::cout << "Numero de letras y espacios en cada nombre:" << std::endl;
    for (int i = 0; i < MAX_NOMBRES; ++i) {
        int contador = 0;
        for (int j = 0; nombres[i][j] != '\0'; ++j) {
            if (nombres[i][j] != ' ') {
                contador++;
            }
        }
        std::cout << "Nombre " << i + 1 << ": " << nombres[i] << " - " << contador << " letras y espacios." << std::endl;
    }

    return 0;
}
