#include <iostream>
#include <cstdlib>  // Untuk menggunakan fungsi rand()
#include <ctime>    // Untuk menggunakan fungsi time()

using namespace std;

int main() {
    // Inisialisasi generator angka acak dengan waktu saat ini
    srand(time(0));

    // Meminta pemain untuk menebak "head" atau "tail"
    cout << "head or tail: ";
    string tebakan;
    cin >> tebakan;

    // Menghasilkan angka acak antara 0 dan 1 (0 untuk "head" dan 1 untuk "tail")
    int hasil = rand() % 2;

    // Menentukan hasil berdasarkan angka acak
    string hasilLemparan = (hasil == 0) ? "head" : "tail";

    // Menampilkan hasil lemparan dan memeriksa apakah pemain benar
    cout << "simsalabim: " << hasilLemparan << endl;
    if (tebakan == hasilLemparan) {
        cout << "anying bener, hoki taek!\n";
    } else {
        cout << "mampus salah, suram\n";
    }

    return 0;
}

