#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero entre 0 e 50: ";
    cin >> numero;

    if (numero < 0 || numero > 50) {
        cout << "Valor invalido! O numero deve estar entre 0 e 50." << endl;
        return 1; 
    }

    if (numero == 0) {
        cout << "Nao ha antecessores maiores que 0 para o numero 0." << endl;
        return 0;
    }

    for (int i = numero - 1; i >= 1; i--) {
        cout << "Resto da divisao de " << numero << " por " << i << ": " << (numero % i) << endl;
    }

    return 0;
}
