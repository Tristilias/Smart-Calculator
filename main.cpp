#include <iostream>
#include "bangun.h"
#include "dasar.h"
#include "diskon.h"
using namespace std;
// test
int main()
{
    int pilihan;
    bool loopMain = true;

    while (loopMain)
    {
        cout << "===Smart Calculator===\n";
        cout << "Silahkan memilih opsi yang tersedia:\n";
        cout << "1. Operasi Dasar\n";
        cout << "2. Luas\n";
        cout << "3. Keliling\n";
        cout << "4. Volume\n";
        cout << "5. Diskon\n";
        cout << "6. Exit\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            menuDasar(); // Panggil fungsi dasar di dasar.cpp
            break;
        case 2:
            menuLuas(); // Panggil fungsi luas di luas.cpp
            break;
        case 3:
            menuKeliling(); // Panggil fungsi keliling di keliling.cpp
            break;
        case 4:
            menuVolume(); // Panggil fungsi volume di volume.cpp
            break;
        case 5:
            menuDiskon(); // Panggil fungsi diskon di diskon.cpp
            break;
        case 6:
            cout << "Terima kasih telah menggunakan Smart Calculator. Sampai jumpa!\n";
            loopMain = false; // Keluar dari loop utama
            break;
        default:
            cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
            break;
        }
        if (pilihan != 6)
        {
            cout << "Tekan Enter untuk kembali ke menu utama...";
            cin.ignore(); // Hilangkan buffer
            cin.get(); // Tunggu user
        }
    }
    system("pause");
    return 0;
}