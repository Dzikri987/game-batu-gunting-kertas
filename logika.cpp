#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int acakKomputer() {
    return rand() % 3;
}

int tentukanPemenang(int pemain, int komputer) {
    if (pemain == komputer) return 0;

    if ((pemain == 0 && komputer == 2) ||
        (pemain == 1 && komputer == 0) ||
        (pemain == 2 && komputer == 1))
        return 1;

    return 2;
}

int main() {
    srand(time(0));

    int pemain;
    cout << "Pilih angka (0=Gunting, 1=Batu, 2=Kertas): ";
    cin >> pemain;

    if (pemain < 0 || pemain > 2) {
        cout << "Pilihan tidak valid!";
        return 0;
    }

    int komputer = acakKomputer();
    int hasil = tentukanPemenang(pemain, komputer);

    cout << "Pilihan komputer: " << komputer << endl;

    if (hasil == 0)
        cout << "SERI!";
    else if (hasil == 1)
        cout << "KAMU MENANG!";
    else
        cout << "KOMPUTER MENANG!";

    return 0;
}