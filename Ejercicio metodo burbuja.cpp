#include <iostream>

using namespace std;

int main() {
  
  int edades[10];

 
  for (int i = 0; i < 10; i++) {
    cout << "Ingrese la edad " << i + 1 << ": ";
    cin >> edades[i];
  }

 
  for (int i = 0; i < 10 - 1; i++) {
    for (int j = 0; j < 10 - i - 1; j++) {
      if (edades[j] > edades[j + 1]) {
        int temp = edades[j];
        edades[j] = edades[j + 1];
        edades[j + 1] = temp;
      }
    }
  }

 
  cout << "El arreglo ordenado es: ";
  for (int i = 0; i < 10; i++) {
    cout << edades[i] << " ";
  }

  cout << endl;

  return 0;
}

