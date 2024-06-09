#include <iostream>
#include <iomanip>
using namespace std;

int arr[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for (i = 0; i < 7; i++) {
        min = i;
        for (j = i + 1; j < 7; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void binarysearch() {
    int awal, akhir, tengah;
    bool found = false;
    awal = 0;
    akhir = 6; // Corrected from 7 to 6
    while (!found && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == cari) {
            found = true;
        } else if (arr[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if (found) {
        cout << "\nData ditemukan pada indeks ke-" << tengah << endl;
    } else {
        cout << "\nData tidak ditemukan\n";
    }
}

int main() {
    cout << "\tBINARY SEARCH\n" << endl;
    cout << "\nData: ";
    // Tampilkan data awal
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << arr[x];
    }
    cout << endl;

    cout << "\nMasukkan data yang ingin Anda cari: ";
    cin >> cari;

    cout << "\nData diurutkan: "; // Urutkan data dengan selection sort
    selection_sort(); // Tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << arr[x];
    }
    cout << endl;

    binarysearch();
    
    return 0;
}
