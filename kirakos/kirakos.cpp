#include <iostream>

using namespace std;

const int x = 4, y = 4;
int tabla[x][y] = {
    { 2, 3, 4, 1 },
    { 11, 12, 7, 6 },
    { 5, 9, 10, 14 },
    { 8, 15, 13, 0 }
};

void kiir() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (tabla[i][j] == 0)
                cout << " . ";
            else
                cout << tabla[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    kiir();
}


