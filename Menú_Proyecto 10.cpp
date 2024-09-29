#include <iostream>
#include <string>
using namespace std;

struct Curso{
    string codigo, nombre;
    int creditos;
    float nota = -1;
    
};

struct Estudiante{
    string nombre, apellido;
    Curso cursos[4];
    float promedio = 0;
};
 void CalcularPromedio(Estudiante &est) {
     float totalPuntos = 0;
     int TotalCreditos = 0;
     for (int i=0; i<4; i++) { 
         if (est.cursos[i].nota !=-1){
             totalPuntos += est.cursos[i].nota * est.cursos[i].creditos;
             TotalCreditos += est.cursos[i].creditos;
         }
 }
 est.promedio = TotalCreditos> 0 ? totalPuntos/TotalCreditos : 0;
 
 }
 
 void menu(Estudiante &est) {
    int opcion;
    do {
        cout << "\n1. Ver estudiante\n2. Ver cursos\n3. Asignar nota\n4. Calcular promedio\n5. Salir\nOpcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1: // Ver información del estudiante
                cout << "Estudiante: " << est.nombre << " " << est.apellido << endl;
                cout << "Promedio: " << est.promedio << endl;
                break;
                
                case 2: // Ver cursos
                for (int i = 0; i < 4; i++) {
                    cout << "Curso: " << est.cursos[i].nombre << " (Creditos: " << est.cursos[i].creditos << ")" << endl;
                    cout << "Nota: " << (est.cursos[i].nota == -1 ? "No asignada" : to_string(est.cursos[i].nota)) << endl;
                }
                break;

            case 3: { // Asignar nota
                int cursoIdx; float nota;
                cout << "Asignar nota a curso (0-3): "; cin >> cursoIdx;
                cout << "Nota (1.5 - 5.0): "; cin >> nota;
                if (cursoIdx >= 0 && cursoIdx < 4 && nota >= 1.5 && nota <= 5.0) {
                    est.cursos[cursoIdx].nota = nota;
                } else {
                    cout << "Entrada invalida.\n";
                }
                break;
            }

            case 4: // Calcular promedio
                CalcularPromedio(est);
                cout << "Promedio calculado: " << est.promedio << endl;
                break;

            case 5:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion no valida\n";
        }

    } while (opcion != 5);
}

int main() {
    Estudiante est = {"Fernanda", "Perez", {
                        {"MAT101", "MATEMÁTICAS", 4}, 
                        {"FIS101", "FÍSICA", 3},
                        {"SIS101", "SISTEMAS", 4},
                        {"BIO101", "BIOLOGÍA", 2}}};

    menu(est);
    return 0;
}
 
