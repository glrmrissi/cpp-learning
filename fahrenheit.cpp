#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Digite o Celsius para conversao em Fahrenheit \n";
    cin >> celsius;
    double res = celsius * 1.8 + 32;
    cout << res;
}