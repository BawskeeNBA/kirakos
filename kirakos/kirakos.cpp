#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

const int x = 4, y = 4;
int tabla[x][y] = {
    { 2, 3, 4, 1 },
    { 11, 12, 7, 6 },
    { 5, 9, 10, 14 },
    { 8, 15, 13, 0 }
};

int uresSor = 3;
int uresOszlop = 3;
char irany;



void kiir() {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (tabla[i][j] == 0)
                cout << setw(3) << "_";   // üres mezõ
            else
                cout << setw(3) << tabla[i][j];
        }
        cout << endl;
    }
}


void mozgat(char irany) {
    int ujSor = uresSor;
    int ujOszlop = uresOszlop;

    if (irany == 'w') ujSor--;      // fel
    else if (irany == 's') ujSor++; // le
    else if (irany == 'a') ujOszlop--; // bal
    else if (irany == 'd') ujOszlop++; // jobb

    // hatar ellenorzes
    if (ujSor >= 0 && ujSor < 4 && ujOszlop >= 0 && ujOszlop < 4) {
        int temp = tabla[uresSor][uresOszlop];
        tabla[uresSor][uresOszlop] = tabla[ujSor][ujOszlop];
        tabla[ujSor][ujOszlop] = temp;

        // ures mezo frissitese
        uresSor = ujSor;
        uresOszlop = ujOszlop;
    }
}


int main()
{
    while (true)
    {
        system("cls");
        kiir();

        std::cout << "\n(billentyuk: w a s d, '-' = kilepes)\n";

        char beker = _getch();//_getch olvassa a karaktert egybol
        beker = tolower(beker);

        if (beker == '-')
            break;

        if (beker == 'w' || beker == 'a' || beker == 's' || beker == 'd')
        {
            mozgat(beker);
        }
    }

    std::cout << "\nKileptel a jatekbol.\n";
    return 0;
}



