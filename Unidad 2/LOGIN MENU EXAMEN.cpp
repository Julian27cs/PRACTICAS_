#include <iostream>
#include <string>

using namespace std;

// Función para validar el inicio de sesión
bool validarInicioSesion(string usuario, string contrasena) {
    // En un sistema real, esta información se compararía con una base de datos
    // para verificar la autenticidad del usuario.
    return (usuario == "u" && contrasena == "c");
}

// Función para imprimir números del 0 al 100
void imprimirNumeros0Al100() {
    for (int i = 0; i <= 100; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// Función para imprimir números de 100 a 0
void imprimirNumeros100Al0() {
    for (int i = 100; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;
}

// Función para determinar si un carácter es vocal o consonante
void esVocalOConsonante(char caracter) {
    if ((caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z')) {
        switch (caracter) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cout << "Es una vocal." << endl;
                break;
            default:
                cout << "Es una consonante." << endl;
                break;
        }
    } else {
        cout << "No es una letra válida." << endl;
    }
}

// Función para calcular un promedio
void calcularPromedio() {
   int a,b,c,d,e,suma,promedio;
	cout<<"bienvenido a esta rutina la cual calculara tu promedio"<<endl;
	cout<<"por favor digita la primera evaluacion"<<endl;
	cin>> a;
	cout<<"porfavor digita la segunda evaluacion"<<endl;
	cin>> b;
	cout<<"porfavor digita la tercera evaluacion"<<endl;
	cin>> c; 
	cout<<"porfavor digitaliza la cuarta evaluacion"<<endl;
	cin>>d;
	cout<<"porfavor digita la quinta evaluacion"<<endl;
	cin>>e;
	promedio =(a+b+c+d+e)/5;
	cout<<"tu promedio general es de:"<<promedio<<endl;
	cout<<"gracias por usar esta aplicacion";
}

// Función para imprimir "Hola, mundo!"
void imprimirHolaMundo() {
    cout << "Hola, mundo!" << endl;
}

// Función para imprimir números pares del 0 al 100
void imprimirNumerosPares() {
    for (int i = 0; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

// Función para imprimir números impares del 0 al 100
void imprimirNumerosImpares() {
    for (int i = 1; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

// Función para encontrar el número mayor entre 3 números
void encontrarNumeroMayor() {
    double num1, num2, num3;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;
    double mayor = num1;
    if (num2 > mayor) mayor = num2;
    if (num3 > mayor) mayor = num3;
    cout << "El número mayor es: " << mayor << endl;
}

// Función para imprimir la tabla de multiplicar
void imprimirTablaMultiplicar(int numero) {
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
}

int main() {
    string usuario, contrasena;

    // Solicitar registro al usuario
    cout << "Por favor, ingrese su nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese su contraseña: ";
    cin >> contrasena;

    // Validar el inicio de sesión
    if (validarInicioSesion(usuario, contrasena)) {
        cout << "Inicio de sesión exitoso. Bienvenido, " << usuario << "!" << endl;

        int opcion;
        do {
            cout << "Menú:" << endl;
            cout << "1. Imprimir números del 0 al 100" << endl;
            cout << "2. Imprimir números de 100 a 0" << endl;
            cout << "3. Determinar si un carácter es vocal o consonante" << endl;
            cout << "4. Calcular un promedio" << endl;
            cout << "5. Imprimir 'Hola, mundo!'" << endl;
            cout << "6. Imprimir números pares del 0 al 100" << endl;
            cout << "7. Imprimir números impares del 0 al 100" << endl;
            cout << "8. Encontrar el número mayor entre 3 números" << endl;
            cout << "9. Imprimir la tabla de multiplicar de un número" << endl;
            cout << "10. Salir" << endl;
            cout << "Seleccione una opción: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    imprimirNumeros0Al100();
                    break;
                case 2:
                    imprimirNumeros100Al0();
                    break;
                case 3:
                    char caracter;
                    cout << "Ingrese un carácter: ";
                    cin >> caracter;
                    esVocalOConsonante(caracter);
                    break;
                case 4:
                    calcularPromedio();
                    break;
                case 5:
                    imprimirHolaMundo();
                    break;
                case 6:
                    imprimirNumerosPares();
                    break;
                case 7:
                    imprimirNumerosImpares();
                    break;
                case 8:
                    encontrarNumeroMayor();
                    break;
                case 9:
                    int numero;
                    cout << "Ingrese un número para imprimir su tabla de multiplicar: ";
                    cin >> numero;
                    imprimirTablaMultiplicar(numero);
                    break;
                case 10:
                    cout << "Saliendo del programa." << endl;
                    break;
                default:
                    cout << "Opción no válida. Intente de nuevo." << endl;
                    break;
            }
        } while (opcion != 10);
    } else {
        cout << "Inicio de sesión fallido. Usuario o contraseña incorrectos." << endl;
    }

    return 0;
}

