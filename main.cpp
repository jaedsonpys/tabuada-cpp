#include <iostream>

using namespace std;

int main() {
    cout << "Tabuada em C++:" << endl;

    for(int i = 1; i < 11; i++){
        for(int a = 1; a < 11; a++) {
            cout << i << " x " << a << " = " << i * a << endl;
        };

        cout << endl;
    }
}