#include <iostream>
#include <string>
#include "diskon.h"
using namespace std;

constexpr double HitungDiskon(double harga, double persenDiskon) {
    return harga * (persenDiskon / 100.0);
}

void menuDiskon() {
    double harga, persenDiskon, potongan, hargatotal;
    string lagi = "y";

    while (lagi == "y" || lagi == "Y") {
        cout << "===Menu Diskon===\n";
        cout << "Masukkan harga barang: ";
        cin >> harga;
        cout << "Masukkan diskon dalam persen: ";
        cin >> persenDiskon;
        cout << "Jumlah diskon: " << HitungDiskon(harga, persenDiskon) << endl;

        potongan = HitungDiskon(harga, persenDiskon);
        hargatotal = harga - potongan;
        cout << "Harga setelah diskon: " << hargatotal << endl;

        cout << "Apakah Anda ingin menghitung diskon lagi? (y/n): ";
        cin >> lagi;
    }
}