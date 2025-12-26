#include <iostream>
using namespace std;

int fibonacci(int number, int limit = 10) {
    int count;
    int last_number;
    count = 0;
    last_number = 1;
    while(count < limit) { 
        int res = number + last_number;
        cout << number << "\n";        
        last_number = number;
        number = res;
        count++;
        if(count >= limit) {
            break;
        }
    }
    return number;
}

int main() {
    fibonacci(1, 100);
}