#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        // Men� de opciones
        cout << "1. Visualizar la informaci�n del estudiante" << endl;
        cout << "2. Visualizar la informaci�n de los cursos." << endl;
        cout << "3. Modificar la informaci�n de un curso." << endl;
        cout << "4. Asignar una nota a un curso." << endl;
        cout << "5. Calcular el promedio del estudiante." << endl;
        cout << "6. Indicar si el estudiante est� en prueba acad�mica." << endl;
        cout << "7. Indicar si el estudiante es candidato a beca." << endl;

        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Visualizar la informaci�n del estudiante
                break;
            case 2:
                // Visualizar la informaci�n de los cursos
                break;
            case 3:
                // Modificar la informaci�n de un curso
                break;
            case 4:
                // Asignar una nota a un curso
                break;
            case 5:
                // Calcular el promedio del estudiante
                break;
            case 6:
                // Indicar si el estudiante est� en prueba acad�mica
                break;
            case 7:
                // Indicar si el estudiante es candidato a beca
                break;
            default:
                cout << "Opci�n no v�lida. Intente de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}
