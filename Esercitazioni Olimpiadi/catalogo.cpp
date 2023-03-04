#include <iostream>
#include <string>
#include <vector>

using namespace std;

void aggiungi(long long int id)
{
    libri[id] += 1;
}

void togli(long long int id)
{
    libri[id] -= 1;
}

int conta(long long int id)
{
    return libri[id];
}

vector<uint32_t> libri;

int main()
{
    int32_t Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        char action;
        long long id;

        cin >> action >> cin >> id;

        switch (action)
        {
        case 'a':
            aggiungi(id);
            break;

        case 't':
            togli(id);
            break;

        case 'c':
            conta(id);
            break;
        }
    }
}