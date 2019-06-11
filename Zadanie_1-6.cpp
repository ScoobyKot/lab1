// W pliku o nazwie program.cpp
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>


using namespace std;

int rekurencja(int factorial)
{
    if (factorial<2) return factorial;
    return factorial*rekurencja(factorial-1);
}
int potega_rek(int number,int potega)
{
    if (potega == 1) return number;
    return number=number*potega_rek(number, --potega);
}

void reverse (string s)
{
    for (int q=s.length()-1; q>=0;q--)
        cout<<s[q];

}

bool is_polindrom(string polindrom)
 {
    int a,b;
    for (a = 0, b = polindrom.length()-1; a<b ; a++,b--)
    {
        if (polindrom[a] != polindrom[b])
            break;
    }
    if (a<b)

        return false;

    else

        return true;

 }


int main(int argv, char* arg[]){
    int zadanie ;
    
    cout<< "Witam"<<endl
    <<"Wpis 1 dla sprawdaznia Silni"
    <<endl<<"Wpis 2 dla sprawdzania Potęgi"
    <<endl<<"Wpis 3 dla sprawdzania Reversu"
    <<endl<<"Wpis 4 dla sprawdzania Polindroma"
    <<endl<<"Wpis 5 dla sprawdzania Multiplication Table"
    <<endl<<"Wpis 6 dla sprawdzania Double Base Palindromes"<<endl;
    cin >> zadanie;
    if (zadanie == 1) {
        cout << endl << "Zadanie 1. Silna." << endl;
        int factorial;
        long long silnia = 1;
        cout << "podaj liczbe" << endl;
        cin >> factorial;

        for (int i = 1; i <= factorial; i++)
            silnia *= i;

        cout << silnia << endl;
        cout << " Silna Rekurencja " << endl;
        cout << rekurencja(factorial) << endl;
    }
    if (zadanie == 2) {
        cout << endl << "Zadanie 2. Potęga" << endl;

        int potega;
        int number;
        cout << "Wpis liczbe " << endl;
        cin >> number;
        cout << "Potega " << endl;
        cin >> potega;
        int suma = number;
        for (int j = 1; j < potega; j++) {
            suma *= number;
        }

        cout << "Potega Iteracja = " << endl << suma << endl;

        cout << "Potega rekurencja" << endl << potega_rek(number, potega) << endl;
    }
    if (zadanie == 3) {
        cout << "Zadanie 3. Reverse String. " << endl;

        string s;
        cout << " Podaj wyraz: " << endl;
        cin >> s;

        reverse(s);
    }
    if (zadanie == 4) {
        cout << endl << "Zadanie 4. Palindrome" << endl;

        int menu;
        string polindrom;
        cout << endl << endl << "Menu" << endl;
        cout << "Wpisz 1 , jezeli chcesz sprawdzić polindrom" << endl;
        cout << "Wpisz 2 , jezeli chcesz wyjść " << endl;
        cin >> menu;
        if (menu == 1) {
            cout << " Wpisz słowo: " << endl;
            cin >> polindrom;

            if (is_polindrom(polindrom) == true)
                cout << "Wyraz jest polindromem" << endl;
            else
                cout << "Wyraz nie jest polindromem" << endl;


        } else {
            cout << "Dowidzenia" << endl;
        }
    }
    if (zadanie == 5)
    {
        cout << endl << "Zadanei 5.Multiplication Table" << endl;

        int tab[10][10];
        int a, b;
        for (a = 1; a <= 10; a++) {
            for (b = 1; b <= 10; b++) {
                tab[a][b] = a * b;
                cout << tab[a][b] << "\t";
            }
            cout << endl;
        }
    }
    if (zadanie == 6)
    {
        cout << endl << " Zadanie 6. Double Base Palindromes" << endl;

        int liczba;
        cin >> liczba;


        string wynik;

        while (liczba) {
            wynik = (liczba % 2 ? "1" : "0") + wynik;
            liczba /= 2;
        }
        cout << wynik;
        cout << endl;
        if (is_polindrom(wynik) == true)
            cout << "Liczba jest polindromem" << endl;
        else
            cout << "Liczba nie jest polindromem" << endl;
    }
    return 0;
    }