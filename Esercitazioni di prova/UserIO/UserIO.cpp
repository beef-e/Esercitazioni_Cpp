#include <string>   //include la possibilità di usare stringhe
#include <iostream> //                          usare input e output

using namespace std; // permette di non dover aggiungere ogni volta la namespace

int main()
{
    cout << "Inserisci il tuo nome" << endl; // endl chiude la linea
    string nome;
    cin >> nome;                              // cin viene usato per avere in input
    cout << "Il tuo nome è " << nome << endl; // cout viene usato per stampare

    cout << "Inserisci un numero\n";
    int a;
    cin >> a;
    cout << "Inserisci un altro numero\n";
    int b;
    cin >> b;
    cout << "a+b=" << a + b << endl; //<<viene usato amche per concatenare
    cout << "a-b=" << a - b << endl;
    cout << "a*b=" << a * b << endl;
    cout << "a/b=" << a / b << endl;
}