#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables de entrada
    string codigoEstudiante;
    string nombreEstudiante;
    string apellidoEstudiante;
    float promedioEstudiante = 0;

    // Variables para los cursos
    string codigoCurso[4];
    string nombreCurso[4];
    string departamentoCurso[4];
    int creditosCurso[4];
    float notaCurso[4];
    int totalCreditos = 0;

    int opcion;

    do {
        // Menú de opciones
        cout << "1. Ingresar la información del estudiante" << endl;
        cout << "2. Ingresar la información de los cursos" << endl;
        cout << "3. Visualizar toda la información" << endl;
        cout << "4. Asignar una nota a un curso" << endl;
        cout << "5. Calcular el promedio del estudiante" << endl;
        cout << "6. Indicar si el estudiante está en prueba académica" << endl;
        cout << "7. Indicar si el estudiante es candidato a beca" << endl;
        cout << "8. Salir del programa" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Ingresar datos del estudiante con validación
                cout << "Ingrese el código del estudiante (6 caracteres): ";
                cin >> codigoEstudiante;
                while (codigoEstudiante.length() != 6) {
                    cout << "Error: el código debe tener exactamente 6 caracteres. Intente nuevamente: ";
                    cin >> codigoEstudiante;
                }

                cout << "Ingrese el nombre del estudiante: ";
                cin >> nombreEstudiante;
                while (nombreEstudiante == "") {
                    cout << "Error: el nombre no puede estar vacío. Intente nuevamente: ";
                    cin >> nombreEstudiante;
                }

                cout << "Ingrese el apellido del estudiante: ";
                cin >> apellidoEstudiante;
                while (apellidoEstudiante == "") {
                    cout << "Error: el apellido no puede estar vacío. Intente nuevamente: ";
                    cin >> apellidoEstudiante;
                }
                break;

            case 2:
                // Ingresar la información de los cursos con validación
                for (int i = 0; i < 4; i++) {
                    cout << "Ingrese el código del curso " << i + 1 << ": ";
                    cin >> codigoCurso[i];
                    while (codigoCurso[i] == "") {
                        cout << "Error: el código del curso no puede estar vacío. Intente nuevamente: ";
                        cin >> codigoCurso[i];
                    }

                    cout << "Ingrese el nombre del curso " << i + 1 << ": ";
                    cin >> nombreCurso[i];
                    while (nombreCurso[i] == "") {
                        cout << "Error: el nombre del curso no puede estar vacío. Intente nuevamente: ";
                        cin >> nombreCurso[i];
                    }

                    cout << "Ingrese el departamento del curso " << i + 1 << ": ";
                    cin >> departamentoCurso[i];
                    while (departamentoCurso[i] == "") {
                        cout << "Error: el departamento no puede estar vacío. Intente nuevamente: ";
                        cin >> departamentoCurso[i];
                    }

                    cout << "Ingrese los créditos del curso " << i + 1 << ": ";
                    cin >> creditosCurso[i];
                    while (creditosCurso[i] <= 0) {
                        cout << "Error: los créditos deben ser un número positivo. Intente nuevamente: ";
                        cin >> creditosCurso[i];
                    }

                    cout << "Ingrese la nota del curso " << i + 1 << " (0 a 5): ";
                    cin >> notaCurso[i];
                    while (notaCurso[i] < 0 || notaCurso[i] > 5) {
                        cout << "Error: la nota debe estar entre 0 y 5. Intente nuevamente: ";
                        cin >> notaCurso[i];
                    }
                }
                break;

            case 3:
                // Mostrar información completa del estudiante y cursos
                cout << "\nEstudiante: " << nombreEstudiante << " " << apellidoEstudiante << endl;
                cout << "Código: " << codigoEstudiante << endl;
                cout << "Promedio: " << promedioEstudiante << endl;

                for (int i = 0; i < 4; i++) {
                    cout << "\nCurso " << i + 1 << ": " << nombreCurso[i] << " (Código: " << codigoCurso[i] << ")" << endl;
                    cout << "  Créditos: " << creditosCurso[i] << endl;
                    cout << "  Departamento: " << departamentoCurso[i] << endl;
                    cout << "  Nota: " << notaCurso[i] << endl;
                }
                break;

            case 4:
                int cursoIndex;
                cout << "Seleccione el número del curso (1-4) para asignar una nueva nota: ";
                cin >> cursoIndex;
                if (cursoIndex >= 1 && cursoIndex <= 4) {
                    cout << "Ingrese la nueva nota para el curso " << nombreCurso[cursoIndex - 1] << " (0 a 5): ";
                    cin >> notaCurso[cursoIndex - 1];
                    while (notaCurso[cursoIndex - 1] < 0 || notaCurso[cursoIndex - 1] > 5) {
                        cout << "Error: la nota debe estar entre 0 y 5. Intente nuevamente: ";
                        cin >> notaCurso[cursoIndex - 1];
                    }
                } else {
                    cout << "Error: número de curso no válido." << endl;
                }
                break;

            case 5:
                promedioEstudiante = 0.0;
                totalCreditos = 0; // Resetear totalCreditos antes de calcular el promedio
                for (int i = 0; i < 4; i++) {
                    promedioEstudiante += notaCurso[i] * creditosCurso[i];
                    totalCreditos += creditosCurso[i];
                }
                if (totalCreditos > 0) {
                    promedioEstudiante /= totalCreditos;
                }
                cout << "Promedio calculado: " << promedioEstudiante << endl;
                break;

            case 6:
                if (promedioEstudiante > 0 && promedioEstudiante < 3.0) {
                    cout << "El estudiante está en prueba académica." << endl;
                } else {
                    cout << "El estudiante no está en prueba académica." << endl;
                }
                break;

            case 7:
                if (promedioEstudiante >= 4.0) {
                    cout << "El estudiante es candidato a beca." << endl;
                } else {
                    cout << "El estudiante no es candidato a beca." << endl;
                }
                break;

            case 8:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
                break;
        }
    } while (opcion != 8);

    return 0;
}
