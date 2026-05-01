#include <iostream>
#include "luas.h"
using namespace std;

double LuasSegitiga(double alas, double tinggi) {
return 0.5 * alas * tinggi;
}

double LuasPersegiPanjang(double panjang, double lebar) {
return panjang * lebar;
}

void menuLuas() {
    int pilihan;

    cout << "===Menu Luas===\n";
    cout << "1. Luas Segitiga\n";
    cout << "2. Luas Persegi Panjang\n";
    cout << "Pilih: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            double alas, tinggi;
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;

            cout << "Luas Segitiga: " << LuasSegitiga(alas, tinggi) << endl;
            break;
        }
        
        case 2: {
            double panjang, lebar;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;

            cout << "Luas Persegi Panjang: " << LuasPersegiPanjang(panjang, lebar) << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
            break;
    
    }
}