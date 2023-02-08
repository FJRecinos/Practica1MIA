#include <iostream>
#include <string>
using namespace std;

string instruction;

void WriteInstruction() {
  cout << "Escribe una instrucción: ";
  getline(cin, instruction);
}

void ReviewInstruction() {
  cout << "La instrucción escrita es: " << instruction << endl;
}

int main() {
  int choice = 0;
  while (choice != 3) {
    cout << "Menú:" << endl;
    cout << "1. Escribir instrucción" << endl;
    cout << "2. Revisar instrucción" << endl;
    cout << "3. Salir" << endl;
    cout << "Elige una opción: ";
    cin >> choice;
    cin.ignore();

    switch (choice) {
      case 1:
        WriteInstruction();
        break;
      case 2:
        ReviewInstruction();
        break;
      case 3:
        cout << "Saliendo del programa." << endl;
        break;
      default:
        cout << "Opción inválida." << endl;
        break;
    }
  }

  return 0;
}
