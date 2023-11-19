#include <iostream>
#include <fstream>
using namespace std;
// Definición de la clase Usuario
class Usuario {
public:
    string nombre;
    string apellido;
    int edad;
    void mostrarPerfil() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};
int main() {
    // Crear un objeto de la clase Usuario
    Usuario usuario;
    // Obtener la información del usuario
    cout << "Ingrese el nombre: ";
    getline(cin, usuario.nombre);
    cout << "Ingrese el apellido: ";
    getline(cin, usuario.apellido);
    cout << "Ingrese la edad: ";
    cin >> usuario.edad;
    // Mostrar el perfil del usuario
    cout << "\nPerfil del Usuario:\n";
    usuario.mostrarPerfil();
    // Crear o abrir un archivo de texto para escribir el perfil del usuario
    ofstream archivo("perfil_usuario.txt");
    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        // Escribir la información del usuario en el archivo
        archivo << "Nombre: " << usuario.nombre << endl;
        archivo << "Apellido: " << usuario.apellido << endl;
        archivo << "Edad: " << usuario.edad << " años" << endl;
        // Cerrar el archivo
        archivo.close();
        cout << "\nPerfil del usuario guardado en 'perfil_usuario.txt'.\n";
    } else {
        cout << "Error al abrir el archivo.\n";
    }
    return 0;
}
