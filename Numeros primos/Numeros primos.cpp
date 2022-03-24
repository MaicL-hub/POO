// Numeros primos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingresa hasta que numero se imprimiran los numeros primos"<< endl;
    cin >> n;
    
    if (n < 2) {
        return 0;
    }
    else
    {
        cout << endl << '2';
    }
    
    for (int i = 2; i < n; i++)
    {
        bool primo = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) {
                primo = false;
            }
        }
        if (primo) {
            cout << i << endl;
        }
    }
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
