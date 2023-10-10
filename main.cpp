#include <iostream>

using namespace std;

int main (void)
{
    int numero1 = 0;
    int numero2 = 0;

    // pedir dois números 
    cout << "Digite um número inteiro: ";
    cin >> numero1;
    cout << "Digite outro número inteiro: ";
    cin >> numero2;
    cout << endl;

    cout << "A soma dos números é: " << numero1 + numero2 << endl;
    cout << endl;

    cout << "A subtração dos números é: " << numero1 - numero2 << endl;
    cout << endl;

    return 0;
}