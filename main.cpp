#include <iostream>
#include "temp.h"
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
        cout << "2. Bangun Datar dan Ruang\n";
        cout << "3. Diskon\n";
        cout << "4. Temperatur\n";
        cout << "5. Konversi Mata Uang (Coming Soon)\n";
        cout << "6. Trigonometri (Coming Soon)\n";
        cout << "0. Exit\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            menuDasar(); // Panggil fungsi dasar di dasar.h
            break;
        case 2:
            menuBangun(); // Panggil fungsi bangun di bangun.h
            break;
        case 3:
            menuDiskon(); // Panggil fungsi diskon di diskon.h
            break;
        case 4:
            menuTemp(); // Panggil fungsi temperatur di temp.h
            break;
        case 0:
            cout << "Terima kasih telah menggunakan Smart Calculator. Sampai jumpa!\n";
            loopMain = false; // Keluar dari loop utama
            break;
        default:
            cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
            break;
        }
        if (pilihan != 0)
        {
            cout << "Tekan Enter untuk kembali ke menu utama...";
            cin.ignore(); // Hilangkan buffer
            cin.get(); // Tunggu user
        }
    }
    system("pause");
    return 0;
}