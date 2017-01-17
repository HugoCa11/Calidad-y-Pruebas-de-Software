#include <iostream> 
#include <string> 
 
using namespace std; 
 
//Función para buscar la palabra 
void buscar(int n, string & cadena) 
{ 
    for (int i = 0; i < cadena.length(); i++) { 
        if (cadena[i] >= 'a' && cadena[i] <= 'z') { 
            if (cadena[i] + n > 'z') { 
                cadena[i] = 'a' - 'z' + cadena[i] + n - 1; 
            } else if (cadena[i] + n < 'a') { 
                cadena[i] = 'z' - 'a' + cadena[i] + n + 1; 
            } else { 
                cadena[i] += n; 
            } 
        } else if (cadena[i] >= 'A' && cadena[i] <= 'Z') { 
            if (cadena[i] + n > 'Z') { 
                cadena[i] = 'A' - 'Z' + cadena[i] + n - 1; 
            } else if (cadena[i] + n < 'A') { 
                cadena[i] = 'Z' - 'A' + cadena[i] + n + 1; 
            } else { 
                cadena[i] += n; 
            } 
        } 
    } 
} 
 
//Funcion descodificar 
void descodifica(int n, string & cadena) 
{ 
    buscar(-n, cadena); 
} 
 
//Programa principal 
int main() 
{ 
    string cadena; 
    int n; 
 
    cout << "Mensaje: " << endl; 
    getline(cin, cadena); 
 
    cout << "desplazamientos; " << endl; 
    cin >> n; 
 
    buscar(n, cadena); 
    cout << cadena << endl; 
    descodifica(n, cadena); 
    cout << cadena << endl; 
 
} 