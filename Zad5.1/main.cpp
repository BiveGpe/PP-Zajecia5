#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Pobranie ile będzie elementów
    int numberOfElements;
    cout << "Podaj liczbe elementow wektora: ";
    cin >> numberOfElements;

    // Stworzenie wektora i wypełnienie go liczbami od uzytkownika
    vector<int> vector1(numberOfElements);
    for (int i = 0; i < numberOfElements; i++) {
        cout << "Podaj element nr " << i << ": ";
        cin >> vector1[i];
    }

    // Znajduje najwiekszy element
    int maxVal = vector1[0], maxIndex = 0;
    for (int i = 0; i < numberOfElements; i++) {
        if (vector1[i] > maxVal) {
            maxVal = vector1[i];
            maxIndex = i;
        }
    }

    // Wypisuje wynik programu
    cout << "Wartosc maksymalna wektora to: " << maxVal << endl;
    cout << "Numer indeksu elementu maksymalnego to: " << maxIndex << endl;

    return 0;
}
