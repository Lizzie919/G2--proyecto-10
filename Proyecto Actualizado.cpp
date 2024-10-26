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
        // Men� de opciones
        cout << "1. Ingresar la informaci�n del estudiante" << endl;
        cout << "2. Ingresar la informaci�n de los cursos" << endl;
        cout << "3. Visualizar toda la informaci�n" << endl;
        cout << "4. Asignar una nota a un curso" << endl;
        cout << "5. Calcular el promedio del estudiante" << endl;
        cout << "6. Indicar si el estudiante est� en prueba acad�mica" << endl;
        cout << "7. Indicar si el estudiante es candidato a beca" << endl;
        cout << "8. Salir del programa" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Ingresar datos del estudiante
                cout << "Ingrese el c�digo del estudiante: ";
                cin >> codigoEstudiante;
                cout << "Ingrese el nombre del estudiante: ";
                cin >> nombreEstudiante;
                cout << "Ingrese el apellido del estudiante: ";
                cin >> apellidoEstudiante;
                break;

            case 2:
                // Ingresar la informaci�n de los cursos
                for (int i = 0; i < 4; i++) {
                    cout << "Ingrese el c�digo del curso " << i + 1 << ": ";
                    cin >> codigoCurso[i];
                    cout << "Ingrese el nombre del curso " << i + 1 << ": ";
                    cin >> nombreCurso[i];
                    cout << "Ingrese el departamento del curso " << i + 1 << ": ";
                    cin >> departamentoCurso[i];
                    cout << "Ingrese los cr�ditos del curso " << i + 1 << ": ";
                    cin >> creditosCurso[i];
                    cout << "Ingrese la nota del curso " << i + 1 << ": ";
                    cin >> notaCurso[i];
                }
                break;

            case 3:
                // Mostrar informaci�n completa del estudiante y cursos
                cout << "\nEstudiante: " << nombreEstudiante << " " << apellidoEstudiante << endl;
                cout << "C�digo: " << codigoEstudiante << endl;
                cout << "Promedio: " << promedioEstudiante << endl;

                for (int i = 0; i < 4; i++) {
                    cout << "\nCurso " << i + 1 << ": " << nombreCurso[i] << " (C�digo: " << codigoCurso[i] << ")" << endl;
                    cout << "  Cr�ditos: " << creditosCurso[i] << endl;
                    cout << "  Departamento: " << departamentoCurso[i] << endl;
                    cout << "  Nota: " << notaCurso[i] << endl;
                }
                break;
        }
    } while (opcion != 8);

    return 0;
}
