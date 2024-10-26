#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string codigo;
    string nombre;
    string apellido;
    float promedio;
};

struct Curso {
    string codigo;
    string nombre;
    string departamento;
    int creditos;
    float nota;
};

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
                // Ingresar datos del estudiante
                cout << "Ingrese el código del estudiante: ";
                cin >> codigoEstudiante;
                cout << "Ingrese el nombre del estudiante: ";
                cin >> nombreEstudiante;
                cout << "Ingrese el apellido del estudiante: ";
                cin >> apellidoEstudiante;
                break;

            case 2:
                // Ingresar la información de los cursos
                for (int i = 0; i < 4; i++) {
                    cout << "Ingrese el código del curso " << i + 1 << ": ";
                    cin >> codigoCurso[i];
                    cout << "Ingrese el nombre del curso " << i + 1 << ": ";
                    cin >> nombreCurso[i];
                    cout << "Ingrese el departamento del curso " << i + 1 << ": ";
                    cin >> departamentoCurso[i];
                    cout << "Ingrese los créditos del curso " << i + 1 << ": ";
                    cin >> creditosCurso[i];
                    cout << "Ingrese la nota del curso " << i + 1 << ": ";
                    cin >> notaCurso[i];
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
        }
    } while (opcion != 8);

    return 0;
}
