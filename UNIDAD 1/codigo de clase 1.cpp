#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Definir la clase de usuario
class Usuario {
public:
    string nombreUsuario;
    string contrasena;
    string archivo;
};
// Funci�n para realizar el login
bool realizarLogin(const string& nombreUsuario, const string& contrasena, const string& archivo) {
    ofstream archivoUsuarios("archivo");
    if (archivoUsuarios.is_open()) {
        Usuario usuarioActual;
        while (archivoUsuarios >> usuarioActual.nombreUsuario >> usuarioActual.contrasena) {
            if (usuarioActual.nombreUsuario == nombreUsuario && usuarioActual.contrasena == contrasena) {
                archivoUsuarios.close();
                return true; // Usuario autenticado correctamente
            }
        }
        archivoUsuarios.close();
    } else {
        cout << "Error al abrir el archivo.\n";
    }
    return false; // Usuario no encontrado o contrase�a incorrecta
}
int main() {
    // Datos de prueba
    string nombreUsuarioIngresado;
    string contrasenaIngresada;
    // Solicitar al usuario que ingrese sus credenciales
    cout << "Ingrese el nombre de usuario: ";
    cin >> nombreUsuarioIngresado;
    cout << "Ingrese la contrasena: ";
    cin >> contrasenaIngresada;
    // Verificar las credenciales usando la funci�n de login
    if (realizarLogin(nombreUsuarioIngresado, contrasenaIngresada, "usuarios.txt")) {
        cout << "Inicio de sesi�n exitoso.\n";
    } else {
        cout << "Inicio de sesi�n fallido. Usuario no encontrado o contrase�a incorrecta.\n";
    }
    return 0;
}
