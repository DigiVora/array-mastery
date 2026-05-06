#include <iostream>
#include <iomanip>
#include <string>
// Project Gerobak Fried Chicken

using namespace std;

int main() {
    int banyakJenis;
    char kodePotong[10];
    int banyakBeli[10];
    string jenisPotong[10];
    long hargaSatuan[10];
    long jumlahHarga[10];
    long jumlahBayar = 0;
    float pajak, totalBayar;

    cout << "========================" << endl;
    cout << " GEROBAK FRIED CHICKEN " << endl;
    cout << "========================" << endl;
    cout << "------------------------" << endl;
    cout << " Kode  Jenis   Harga    " << endl;
    cout << "------------------------" << endl;
    cout << " D     Dada    Rp.2500  " << endl;
    cout << " P     Paha    Rp.2000  " << endl;
    cout << " S     Sayap   Rp.1500  " << endl;
    cout << "------------------------" << endl;

    // Validasi input: minimal 1, maksimal 3
    do {
        cout << "Banyak Jenis [1-3]   : ";
        cin >> banyakJenis;
        if (banyakJenis < 1 || banyakJenis > 3) {
            cout << ">> Input salah! Masukkan angka 1 sampai 3." << endl;
        }
    } while (banyakJenis < 1 || banyakJenis > 3);

    cout << endl;

    for (int i = 0; i < banyakJenis; i++) {
        cout << "Jenis Ke - " << i + 1 << endl;
        cout << "Jenis Potong [D/P/S] : ";
        cin >> kodePotong[i];
        cout << "Banyak Potong        : ";
        cin >> banyakBeli[i];

        if (kodePotong[i] == 'D' || kodePotong[i] == 'd') {
            jenisPotong[i] = "Dada";
            hargaSatuan[i] = 2500;
        } else if (kodePotong[i] == 'P' || kodePotong[i] == 'p') {
            jenisPotong[i] = "Paha";
            hargaSatuan[i] = 2000;
        } else if (kodePotong[i] == 'S' || kodePotong[i] == 's') {
            jenisPotong[i] = "Sayap";
            hargaSatuan[i] = 1500;
        } else {
            jenisPotong[i] = "Salah Kode";
            hargaSatuan[i] = 0;
        }
        jumlahHarga[i] = hargaSatuan[i] * banyakBeli[i];
        jumlahBayar += jumlahHarga[i];
        cout << endl;
    }

    // Membersihkan layar (opsional, tergantung OS)
    // system("cls"); 

    cout << "\n\n=======================================================" << endl;
    cout << "                GEROBAK FRIED CHICKEN                " << endl;
    cout << "=======================================================" << endl;
    cout << "No.  Jenis        Harga        Banyak       Jumlah     " << endl;
    cout << "     Potong       Satuan       Beli         Harga      " << endl;
    cout << "-------------------------------------------------------" << endl;

    for (int i = 0; i < banyakJenis; i++) {
        cout << setiosflags(ios::left) << setw(5) << i + 1;
        cout << setw(13) << jenisPotong[i];
        cout << "Rp. " << setw(10) << hargaSatuan[i];
        cout << setw(13) << banyakBeli[i];
        cout << "Rp. " << jumlahHarga[i] << endl;
    }

    pajak = 0.1 * jumlahBayar;
    totalBayar = jumlahBayar + pajak;

    cout << "-------------------------------------------------------" << endl;
    cout << setw(35) << "" << "Jumlah Bayar Rp. " << jumlahBayar << endl;
    cout << setw(35) << "" << "Pajak 10%    Rp. " << (long)pajak << endl;
    cout << setw(35) << "" << "Total Bayar  Rp. " << (long)totalBayar << endl;
    cout << "-------------------------------------------------------" << endl;

    return 0;
}
