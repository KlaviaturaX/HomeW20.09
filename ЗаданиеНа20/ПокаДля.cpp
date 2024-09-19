#include <iostream>

using namespace std;

int main() {
    // Primer 1: Arifmeticheskie operatory
    int a = 10, b = 5;

    // Tsikl while
    int i = 0;
    while (i < a) {
        cout << "while (a = " << a - i << ", i = " << i << "): " << a - i << endl; // Vychitanie
        i++;
    }

    // Tsikl for
    for (int j = 0; j < b; j++) {
        cout << "for (b = " << b * j << ", j = " << j << "): " << b * j << endl; // Umnozhenie
    }

    // Primer 2: Sostavnoe pr assigned 
    int x = 20, y = 20;

    // Tsikl while
    int m = 0;
    while (m < 5) {
        x += 5; // Slozhenie
        cout << "while (x = " << x << ", m = " << m << "): " << x << endl;
        m++;
    }

    // Tsikl for
    for (int n = 0; n < 5; n++) {
        y *= 2; // Umnozhenie
        cout << "for (y = " << y << ", n = " << n << "): " << y << endl;
    }

    // Primer 3: Logicheskie operatory
    int z = 10, w = 15;

    // Tsikl while
    int p = 0;
    while (p < 5) {
        if (z < w && w > 10) { // Logicheskoe "I"
            cout << "while (w - z = " << w - z << ", z = " << z << ", w = " << w << "): " << w - z << endl;
        }
        p++;
    }

    // Tsikl for
    for (int q = 0; q < 5; q++) {
        if (z > 5 || w < 20) { // Logicheskoe "ILI"
            cout << "for (z + w = " << z + w << ", z = " << z << ", w = " << w << "): " << z + w << endl;
        }
    }

    // Primer 4: Inkrement i dekrement
    int p1 = 0, p2 = 10;

    // Tsikl while
    while (p1 < 5) {
        cout << "while (inkrement, p1 = " << ++p1 << "): " << p1 << endl; // Inkrement
    }

    // Tsikl for
    for (int r = p2; r > 0; r--) {
        cout << "for (dekrement, r = " << r << "): " << r << endl; // Dekrement
    }

    // Primer 5: Poisk maksimuma
    int maxVal = 0;

    // Tsikl while
    int k = 1;
    while (k <= 10) {
        if (k > maxVal) {
            maxVal = k; // Obnovlenie maksimuma
        }
        cout << "while (maxVal = " << maxVal << ", k = " << k << "): " << maxVal << endl;
        k++;
    }

    // Primer 1: Poisk faktoriala
    int n = 5;
    int factorial = 1;

    // Tsikl for
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Umnozhenie
        cout << "Faktorial (i = " << i << "): " << factorial << endl; // Vychislenie faktoriala
    }

    // Primer 2: Kvadrovyie chisla do 10
    cout << "Kvadrovyie chisla do 10:" << endl;

    // Tsikl while
    int j = 1;
    while (j <= 10) {
        cout << "Kvadrovaia chislo (j = " << j << "): " << j * j << endl; // Vychislenie kvadrata
        j++;
    }

    // Primer 3: Raspredelenie chisla po znaku
    int number = -7;

    // Uslovnyi operator if
    if (number > 0) {
        cout << "Chislo polozhitel'noe: " << number << endl; // Chislo polozhitel'noe
    }
    else if (number < 0) {
        cout << "Chislo otritsatel'noe: " << number << endl; // Chislo otritsatel'noe
    }
    else {
        cout << "Chislo ravno 0: " << number << endl; // Chislo ravno nul'
    }

    // Primer 4: Proverka chisel na chetnost'
    cout << "Proverka chisel na chetnost' do 10:" << endl;

    // Tsikl for
    for (int k = 0; k <= 10; k++) {
        if (k % 2 == 0) {
            cout << k << " - chetnoe chislo." << endl; // Chislo chetnoe
        }
        else {
            cout << k << " - nechetnoe chislo." << endl; // Chislo nechetnoe
        }
    }

    // Primer 5: Sposob ravnogo raspredeleniya
    int arr[5] = { 1, 2, 3, 4, 5 };
    int sum = 0;

    // Tsikl for
    for (int l = 0; l < 5; l++) {
        sum += arr[l]; // Slozhenie elementov massiva
    }

    cout << "Summa elementov massiva: " << sum << endl; // Vychislenie summi

    // Primer 6: Obratnaya pechat' massiva
    cout << "Obratnyi poryadok massiva:" << endl;

    // Tsikl for
    for (int m = 4; m >= 0; m--) {
        cout << arr[m] << " "; // Pechat' elementov massiva v obratnom poryadke
    }
    cout << endl; // Perenos stroki

    {
        int arr[5] = { 1, 2, 3, 4, 5 };
        int target = 3;
        bool found = false;

        // Tsikl for
        cout << "Pervyi primer: proverka nalichiya elementa v massive s pomoshch'yu for." << endl;
        for (int i = 0; i < 5; i++) {
            if (arr[i] == target) {
                found = true; // Element znale
                break; // Vyhod iz tsikla, esli element nayden
            }
        }

        if (found) {
            cout << "Element " << target << " nayden v massive." << endl; // Element nayden
        }
        else {
            cout << "Element " << target << " ne nayden v massive." << endl; // Element ne nayden
        }

        // Tsikl while
        found = false; // Snova obnulyaem peremennuyu
        cout << "Vtoroi primer: proverka nalichiya elementa v massive s pomoshch'yu while." << endl;
        int j = 0; // Schetchik
        while (j < 5) {
            if (arr[j] == target) {
                found = true; // Element znale
                break; // Vyhod iz tsikla, esli element nayden
            }
            j++; // Uvelichenie schetchika
        }

        if (found) {
            cout << "Element " << target << " nayden v massive." << endl; // Element nayden
        }
        else {
            cout << "Element " << target << " ne nayden v massive." << endl; // Element ne nayden
        }
    }
}