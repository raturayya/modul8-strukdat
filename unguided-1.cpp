#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool binarySearch(string sentence, char target)
{
    int kiri = 0;
    int kanan = sentence.length() - 1;
    while (kiri <= kanan)
    {
        int mid = kiri + (kanan - kiri) / 2;
        if (sentence[mid] == target)
        {
            return true;
        }
        if (sentence[mid] < target)
        {
            kiri = mid + 1;
        }
        else
        {
            kanan = mid - 1;
        }
    }
    return false;
}
int main()
{
    string sentence;
    char tuju;
    cout << "Masukkan Kalimat atau nama lengkap: ";
    getline(cin, sentence);
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> tuju;
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower); // Mengubah kalimat menjadi lowercase agar pencariancase intensitive
    bool found = binarySearch(sentence, tolower(tuju)); // Mencari huruf dalam kalimat menggunakan Binary
    if (found)
    {
        cout << "Huruf " << tuju << " ditemukan dalam kalimat." << endl;
    }
    else
    {
        cout << "Huruf " << tuju << " tidak ditemukan dalam kalimat." << endl;
    }
    return 0;
}