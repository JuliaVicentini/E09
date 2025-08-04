#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int quantidade;
    
    cin >> quantidade;

    cout << fixed << setprecision(2);

    if (quantidade < 12) {
        cout << "Preco da unidade: R$0.80" << endl;
        cout << "Preco total: R$" << (quantidade * 0.80) << endl;
    } 
    else {
        cout << "Preco da unidade: R$0.65" << endl;
        cout << "Preco total: R$" << (quantidade * 0.65) << endl;
    }

    return 0;
}
