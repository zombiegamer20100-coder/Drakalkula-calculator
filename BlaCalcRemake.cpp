#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float br1, br2, result = 0;
    char key;
    bool hasResult = false;
    while (true)
    {
        cout << "Dobrodosao u divni drakulin kalkulator\n\n";
        cout << "Valjda znas kako radi menu\n\n";
        cout << "1.Sabiranje\n";
        cout << "2.Oduzimanje\n";
        cout << "3.Mnozenje\n";
        cout << "4.Deljenje\n";
        cout << "5.Exit/Back\n";
        cout << "Pritisni broj 1-5: ";
        while (!_kbhit())
        {
        }
        key = _getch();
        cout << key << endl;
        if (key == '5')
        {
            cout << "Ako ti se izlazi, izadji." << endl;
            return 0;
        }
        while (true)
        {
            cout << "Trenutni rezultat: " << (hasResult ? result : 0) << endl;
            cout << "Pritisni'r' da koristiš prethodni rezultat, 'n' za novu kalkulaciju, 'e' za izlaz: ";
            char choice;
            cin >> choice;
            if (choice == 'e')
            {
                break;
            }
            if (choice == 'r')
            {
                if (!hasResult)
                {
                    cout << "Nema prethodnog rezultata. Koristi 'n'." << endl;
                    continue;
                }
                cout << "Unesi broj: ";
                cin >> br2;
                switch (key)
                {
                case '1':
                    result += br2;
                    break;
                case '2':
                    result -= br2;
                    break;
                case '3':
                    result *= br2;
                    break;
                case '4':
                    if (br2 == 0)
                    {
                        cout << "Ne sme se deliti sa nulom pametni moj." << endl;
                        continue;
                    }
                    result /= br2;
                    break;
                }
                hasResult = true;
            }
            else if (choice == 'n')
            {
                cout << "Unesi brojeve koje zelis da uradis." << endl;
                cin >> br1 >> br2;
                switch (key)
                {
                case '1':
                    result = br1 + br2;
                    break;
                case '2':
                    result = br1 - br2;
                    break;
                case '3':
                    result = br1 * br2;
                    break;
                case '4':
                    if (br2 == 0)
                    {
                        cout << "Ne sme se deliti sa nulom pametni moj." << endl;
                        continue;
                    }
                    result = br1 / br2;
                    break;
                }
                hasResult = true;
            }
            else
            {
                cout << "Nesto si sjebo" << endl;
            }
            cout << result << endl;
        }
    }
    return 0;
}