/*
Nama Mahasiswa  : Armada Satya Permana
NIM             : 220401010131
Kelas           : IT204
Mata Kuliah     : Struktur Data dan Algoritma
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> linearSearch(const vector<int>& arr, int input) {
    vector<int> index;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == input) {
            index.push_back(i);
        }
    }

    return index;
}

int main() {
    vector<int> arr = {19, 40, 10, 90, 2, 50, 60, 50, 1};

    int input;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> input;

    vector<int> index = linearSearch(arr, input);

    if (index.size() > 0) {
        cout << "Angka " << input << " ada di indeks ke ";
        for (int i = 0; i < index.size(); i++) {
            cout << index[i] + 1;
            if (i != index.size() - 1) {
                cout << " dan ";
            }
        }
    } else {
        cout << "Angka " << input << " tidak ada dalam array";
    }

    cout << endl;

    return 0;
}