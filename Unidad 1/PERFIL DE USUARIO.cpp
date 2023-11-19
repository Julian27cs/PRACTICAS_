#include<iostream>
#include"fstream"
using namespace std;

class Usuario {
public:
    string nombre;
    string apellido;
    
    int edad;
    
    void mostrarPerfil() {
        cout << "Nombre:" << nombre << endl;
        cout << "Apellido:" << apellido << endl;
        cout << "Edad: " << edad << " años" << endl;
        
    }
};
int main() {
    
    Usuario usuario;
  
    cout << "Ingrese el nombre: ";
    getline(cin, usuario.nombre);
    cout << "Ingrese el apellido: ";
    getline(cin, usuario.apellido);
    cout << "Ingrese la edad: ";
    getline(cin,usuario,edad:);
    cout<<"ingrese su direccion";
    cin >> usuario.edad;
 
    cout << "\nPerfil del Usuario:\n";
    usuario.mostrarPerfil();
  
    fstream archivo("perfil_usuario.txt");
   
    if (archivo.is_open()) {
       
        archivo << "Nombre: " << usuario.nombre << endl;
        archivo << "Apellido: " << usuario.apellido << endl;
        archivo << "Edad: " << usuario.edad << " años" << endl;
        archivo << "direccion:" <<usuario.direccion  <<endl;
        archivo << "numero:" << usuario.numero  << endl;
        archivo << "correo:" << usuario.correo<<endl;
        archivo.close();
        cout << "\nPerfil del usuario guardado en 'perfil_usuario.txt'.\n";
    } else {
        cout << "Error al abrir el archivo.\n";
    }
    return 0;
}
