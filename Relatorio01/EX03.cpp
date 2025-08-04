#include <iostream>
using namespace std;

void analisarNumeros(int a, int b, int c, int d, int e) {
    int numeros[5] = {a, b, c, d, e};
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0)
            pares++;
        else
            impares++;

        if (numeros[i] >= 0)
            positivos++;
        else if (numeros[i] < 0)
            negativos++;
    }

    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;
    cout << "Quantidade de numeros positivos: " << positivos << endl;
    cout << "Quantidade de numeros negativos: " << negativos << endl;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        analisarNumeros(a, b, c, d, e);
    }

    return 0;
}
