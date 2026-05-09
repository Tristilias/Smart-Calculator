#include <iostream>
#include "bmi.h"
using namespace std;

void menuBMI()
{
    int jenisKelamin;
    double tinggiCm;

    cout << "=== Ideal Weight Calculator ===\n";
    cout << "1. Pria\n";
    cout << "2. Wanita\n";
    cout << "Pilih jenis kelamin (1/2): ";
    cin >> jenisKelamin;

    if (jenisKelamin != 1 && jenisKelamin != 2)
    {
        cout << "Pilihan tidak valid. Silahkan jalankan kembali dan pilih 1 atau 2.\n";
        return;
    }

    cout << "Masukkan tinggi badan dalam cm: ";
    cin >> tinggiCm;

    if (tinggiCm <= 0)
    {
        cout << "Tinggi badan harus lebih besar dari 0.\n";
        return;
    }

    double idealWeight;
    if (jenisKelamin == 1)
    {
        idealWeight = 50.0 + 0.9 * (tinggiCm - 152.0);
    }
    else
    {
        idealWeight = 45.5 + 0.9 * (tinggiCm - 152.0);
    }

    if (idealWeight < 0)
    {
        idealWeight = 0.0;
    }

    cout << "\nHasil:\n";
    if (jenisKelamin == 1)
    {
        cout << "Berat badan ideal untuk pria dengan tinggi " << tinggiCm << " cm adalah " << idealWeight << " kg.\n";
    }
    else
    {
        cout << "Berat badan ideal untuk wanita dengan tinggi " << tinggiCm << " cm adalah " << idealWeight << " kg.\n";
    }
}