#include <iostream>
#include <string>

using namespace std;

int main() {
  double promedio;
  double suma;
  string nombre[2];
  double notas[3];

  for (int i = 0; i < 2; i++) {
    cout << "Ingresa el nombre del estudiante número " << i + 1 << ": " << endl;
    cin >> nombre[i];
    suma = 0;
    for (int j = 0; j < 3; j++) {
      cout << "Ingresa la nota número " << j + 1 << ": " << endl;
      cin >> notas[j];
      suma = suma + notas[j];
    }
    promedio = suma / 3;
    cout << "El promedio de " << nombre[i] << " es " << promedio << endl;
    if (promedio >= 60) {
      cout << "APROBADO" << endl;
    } else {
      cout << "REPROBADO" << endl;
    }
  }

  cout << "\nResultados\n";
  cout << "Nombre\tNota 1\tNota 2\tNota 3\tAprobado/Reprobado\n";
  for (int k = 0; k < 2; k++) {
    cout << nombre[k] << "\t" << notas[0] << "\t" << notas[1] << "\t" << notas[2] << "\n";
  }

  getch();
  return 0;
}

