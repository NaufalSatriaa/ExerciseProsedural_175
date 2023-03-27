#include <iostream>
#include <string>
using namespace std;

double hitungRataRata(int a, int b) {
    return (a + b) / 2.0;
}

void tampilkanStatus(string nama, bool diterima) {
    if (diterima) {
        cout << nama << " DITERIMA\n";
    }
    else {
        cout << nama << " TIDAK DITERIMA\n";
    }
}

int main() {
    string nama[20];
    int nilai_mat[20], nilai_ing[20], diterima = 0, tidak_diterima = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Masukkan nama kandidat ke-" << i + 1 << ": ";
        getline(cin, nama[i]);
        cout << "Masukkan nilai Matematika: ";
        cin >> nilai_mat[i];
        cout << "Masukkan nilai Bahasa Inggris: ";
        cin >> nilai_ing[i];
        cin.ignore(); 
        double rata_rata = hitungRataRata(nilai_mat[i], nilai_ing[i]);
        if (rata_rata >= 70 || nilai_mat[i] >= 80) {
            tampilkanStatus(nama[i], true);
            diterima++;
        }
        else {
            tampilkanStatus(nama[i], false);
            tidak_diterima++;
        }
    }

    cout << endl;
    cout << "Jumlah kandidat diterima: " << diterima << endl;
    cout << "Jumlah kandidat tidak diterima: " << tidak_diterima << endl;

    return 0;
}