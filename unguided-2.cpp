#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(string sentence)
{
    int count = 0;
    string vowels = "aeiou";
// Mengubah kalimat menjadi lowercase agar pencarian case insensitve
transform(sentence.begin(), sentence.end(),
sentence.begin(), ::tolower);
for (char c : sentence)
    {
        if (vowels.find(c) != string::npos)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string sentence;
    cout << "Masukkan kalimat : ";
    getline(cin, sentence);
    int vowelCount = countVowels(sentence);
    cout << " Jumlah huruf vokal dalam kalimat: " << vowelCount
         << endl;
    return 0;
}