#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        // Menú de opciones
        cout << "1. Visualizar la información del estudiante" << endl;
        cout << "2. Visualizar la información de los cursos." << endl;
        cout << "3. Modificar la información de un curso." << endl;
        cout << "4. Asignar una nota a un curso." << endl;
        cout << "5. Calcular el promedio del estudiante." << endl;
        cout << "6. Indicar si el estudiante está en prueba académica." << endl;
        cout << "7. Indicar si el estudiante es candidato a beca." << endl;

        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Visualizar la información del estudiante
                break;
            case 2:
                // Visualizar la información de los cursos
                break;
            case 3:
                // Modificar la información de un curso
                break;
            case 4:
                // Asignar una nota a un curso
                break;
            case 5:
                // Calcular el promedio del estudiante
                break;
            case 6:
                // Indicar si el estudiante está en prueba académica
                break;
            case 7:
                // Indicar si el estudiante es candidato a beca
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}
