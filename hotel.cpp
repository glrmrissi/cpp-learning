#include <iostream>
using namespace std;

void listRooms() {
    cout << "Qual quarto voce quer escolher, temos os seguintes quartos: \n";
    cout << "-----------------------<--------->------------------------- \n";
    cout << "-----------------------| Quartos |------------------------- \n";
    cout << "-----------------------<--------->------------------------- \n";
    cout << "1. Basic - 130 R$ \n";
    cout << "2. Casal - 150 R$ \n";
    cout << "3. Deluxe - 180 R$ \n";
    cout << "4. Presidencial - 230 R$ \n";
    cout << "----------------------------------------------------------- \n";
}

int main() {
    char response;
    cout << "Oi, posso te ajudar? ";
    cin >> response;
    if (response == 'y')
    {
        listRooms();
    } else {
        cout << "Cya";
    }
}