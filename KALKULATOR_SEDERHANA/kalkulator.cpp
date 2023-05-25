#include <iostream>
using namespace std;

int Penjumlahan (int a, int b)
{
    return a + b;
}

int Pengurangan (int a, int b)
{
    return a - b;
}

int Perkalian (int a, int b)
{
    return a * b;
}

int Pembagian (int a, int b)
{
    return a / b;
}


int main ()
{
//KAMUS LOKAL
    int a;
    int b;
    char operatr;
    int Hasil;

//DISKIRPSI
    cout << "KALKULATOR SEDERHANA" << endl;
    cout << "Input angka ke-1: ";
    cin >> a;
    cout << "Input operator: ";
    cin >> operatr;
    cout << "Input angka ke-2: ";
    cin >> b;

    switch (operatr)
    {
    case 'x':
        Hasil = Perkalian(a,b);
        cout << "Hasil: " << a << " x " << b << ": " << Hasil;
        break;
    case '/':
        Hasil = Pembagian(a,b);
        cout << "Hasil: " << a << " / " << b << ": " << Hasil;
        break;
    case '+':
        Hasil = Penjumlahan(a,b);
        cout << "Hasil: " << a << " + " << b << ": " << Hasil;
        break;
    case '-':
        Hasil = Pengurangan(a,b);
        cout << "Hasil: " << a << " - " << b << ": " << Hasil;
        break;
    default:
        cout << "Operator tidak ditemukan";
        break;
    }

    return 0;
}
