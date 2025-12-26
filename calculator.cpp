#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    if (b == 0)
    {
        cout << "Erro: Divisao por zero nao e permitida.\n";
        return 0;
    }
    return static_cast<double>(a) / b;
}

int main()
{
    cout << "Ola qual operacao voce gostaria de realizar? \n";
    cout << "1. Adicao \n";
    cout << "2. Subtracao \n";
    cout << "3. Multiplicacao \n";
    cout << "4. Divisao \n";
    int operation;
    cin >> operation;
    int a, b;

    switch (operation)
    {
    case 1:
        cout << "Digite dois numeros para adicionar: \n";
        cin >> a >> b;
        cout << "Resultado: " << add(a, b);
        break;
    case 2:
        cout << "Digite dois numeros para subtrair: \n";
        cin >> a >> b;
        cout << "Resultado: " << subtract(a, b);
        break;
    case 3:
        cout << "Digite dois numeros para multiplicar: \n";
        cin >> a >> b;
        cout << "Resultado: " << multiply(a, b);
        break;
    case 4:
        cout << "Digite dois numeros para dividir: \n";
        cin >> a >> b;
        cout << "Resultado: " << divide(a, b);
        break;
    default:
        cout << "Operacao invalida.";
        break;
    }
}