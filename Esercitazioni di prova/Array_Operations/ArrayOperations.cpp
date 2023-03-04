#include <iostream>
#include <string>
#include <cstdlib>       //*libreria per randomizing dei numeri
#include <bits/stdc++.h> //*libreria per sortare l'array

using namespace std;

//*Le funzioni debbono essere dichiarate prima del main
//*anche se possono essere scritte successivamente

int somma(int array[], int n);           //*calcolo della somma dei valori
int calcoloMaggiore(int array[], int n); //*calcolo del valore maggiore all'interno del vettore

int main()
{
    cout << "Inserire grandezza del vettore" << endl;
    int n;
    cin >> n;
    int array[n]; // *Gli array sono di grandezza fissa e vanno dichiarati con essa

    for (int i = 0; i < n; i++)
    {
        int random = rand() % 100; // *creazione numero random da 0 a 100
        array[i] = random;
    }

    cout << "L'array presenta i seguenti valori:\n";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    sort(array, array + n); //*ordinamento array con funzione autonoma della libreria

    cout << "\narray ordinato:\n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << "\nSomma dei numeri dell'array: \n";
    cout << somma(array, n) << endl;

    cout << "\nCalcolo del numero maggiore all'interno del vettore: \n";
    cout << calcoloMaggiore(array, n) << endl;
}

int somma(int array[], int n)
{
    int somma = 0;

    for (int i = 0; i < n; i++)
    {
        somma = somma + array[i];
    }

    return somma;
}

int calcoloMaggiore(int array[], int n)
{
    int max = array[0];

    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
            max = array[i];
    }

    return max;
}