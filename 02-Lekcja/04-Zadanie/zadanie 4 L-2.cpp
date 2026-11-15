#include <iostream>
using namespace std;

int main()
{
    int sekundy;
    int minuty;
    int reszta;

    cout << "Podaj liczbe sekund: ";
    cin >> sekundy;

    minuty = sekundy / 60;
    reszta = sekundy % 60;

    cout << "Pelne minuty: " << minuty << endl;
    cout << "Pozostale sekundy: " << reszta << endl;

    return 0;
}