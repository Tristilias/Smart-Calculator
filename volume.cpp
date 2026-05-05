#include <iostream>
#include <cmath>
#include "bangun.h"
using namespace std;

constexpr double pi = 3.14159265358979323846;

void menuVolume() {
    int pilihan;
    double r, t, a, b, c;

    cout << "===Menu Volume===\n";
    cout << "Silahkan memilih bangun ruang yang tersedia: \n";
    cout << "1. Kubus\n";
    cout << "2. Balok\n";
    cout << "3. Tabung\n";
    cout << "4. Kerucut\n";
    cout << "5. Bola\n";
    cout << "0. Exit\n";
    cout << "Pilih: "; cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Masukkan sisi kubus: "; cin >> a;
            cout << "Volume kubus: " << pow(a, 3) << endl;
            break;
        case 2:
            cout << "Masukkan panjang balok: "; cin >> a;
            cout << "Masukkan lebar balok: "; cin >> b;
            cout << "Masukkan tinggi balok: "; cin >> c;
            cout << "Volume balok: " << a * b * c << endl;
            break;
        case 3:
            cout << "Masukkan jari-jari tabung: "; cin >> r;
            cout << "Masukkan tinggi tabung: "; cin >> t;
            cout << "Volume tabung: " << pi * pow(r, 2) * t << endl;
            break;
        case 4:
            cout << "Masukkan jari-jari kerucut: "; cin >> r;
            cout << "Masukkan tinggi kerucut: "; cin >> t;
            cout << "Volume kerucut: " << (1.0/3.0) * pi * pow(r, 2) * t << endl;
            break;
        case 5:
            cout << "Masukkan jari-jari bola: "; cin >> r;
            cout << "Volume bola: " << (4.0/3.0) * pi * pow(r, 3) << endl;
            break;
        case 0:
            cout << "Keluar dari menu volume.\n";
            break;
        default:
            cout << "Pilihan tidak valid, silahkan coba lagi.\n";
            menuVolume();
            break;
    }
}