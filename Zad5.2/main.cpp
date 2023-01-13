#include <iostream>

using namespace std;

int main() {
    // Pobiera rozmiar tablicy
    int tableLenght;
    cout << "Podaj rozmiar tablicy: ";
    cin >> tableLenght;

    // Sprawdza czy rozmiar jest parzysty
    if (tableLenght % 2 != 0)
    {
        cout << "rozmiar tablicy musi byc parzysty ";
        return 0;
    }

    // Pobiera elementy tablicy
    int userArray[tableLenght];
    for (int i = 0; i < tableLenght; i++) {
        cout << "Podaj element nr " << i << ": ";
        cin >> userArray[i];
    }

    // Tworzy dwie tablice z jednej
    int firstTable[tableLenght / 2], seccondTable[tableLenght / 2], i;
    for (i = 0; i < (tableLenght/2); ++i) {
        firstTable[i] = userArray[i];
    }
    for (; i < tableLenght; ++i) {
        seccondTable[i - (tableLenght / 2)] = userArray[i];
    }

    // Wypisuje tablice
    cout << "tablica przed zmiana:" << endl;
    for (int j = 0; j < (tableLenght / 2); j++) {
        cout << firstTable[j] << " " << seccondTable[j] << endl;
    }

    cout << "tablica po zmianie:" << endl;
    for (int j = 0; j < (tableLenght / 2); j++) {
        cout << seccondTable[j] << " " << firstTable[j] << endl;
    }

    return 0;
}
