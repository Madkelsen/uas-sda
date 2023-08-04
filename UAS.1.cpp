/*
Nama Mahasiswa  : Armada Satya Permana
NIM             : 220401010131
Kelas           : IT204
Mata Kuliah     : Struktur Data dan Algoritma
*/

#include <iostream>
#include <string>
using namespace std;

struct Person {
    string nama;
    string alamat;
};

void bubbleSort(Person arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].nama > arr[j + 1].nama) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(Person arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].nama < arr[min_idx].nama) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    const int n = 8;
    Person people[n] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };

    cout << "Data sebelum diurutkan:" << endl;
    cout << "=================================================" << endl;
    cout << "|        Nama           |         Alamat        |" << endl;
    cout << "=================================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "| " << people[i].nama << string(22 - people[i].nama.length(), ' ');
        cout << "| " << people[i].alamat << string(22 - people[i].alamat.length(), ' ') << "|" << endl;
    }
    cout << "=================================================" << endl;

    bubbleSort(people, n);

    cout << endl << "Data setelah diurutkan dengan Bubble Sort:" << endl;
    cout << "=================================================" << endl;
    cout << "|        Nama           |         Alamat        |" << endl;
    cout << "=================================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "| " << people[i].nama << string(22 - people[i].nama.length(), ' ');
        cout << "| " << people[i].alamat << string(22 - people[i].alamat.length(), ' ') << "|" << endl;
    }
    cout << "=================================================" << endl;

    Person people2[n] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };

    selectionSort(people2, n);

    cout << endl << "Data setelah diurutkan dengan Selection Sort:" << endl;
    cout << "=================================================" << endl;
    cout << "|        Nama           |         Alamat        |" << endl;
    cout << "=================================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "| " << people2[i].nama << string(22 - people2[i].nama.length(), ' ');
        cout << "| " << people2[i].alamat << string(22 - people2[i].alamat.length(), ' ') << "|" << endl;
    }
    cout << "=================================================" << endl;

    return 0;
}