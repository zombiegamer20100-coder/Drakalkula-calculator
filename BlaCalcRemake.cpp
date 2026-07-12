#include <iostream>                                                     //to do: make language selector, upgrade to cont. calc.
using namespace std;                                                    //upgrade to multi-number calc,upgrade to scient. calc.
int main ()                                                             //ADD MENU TOP PTIORITY
{ 
    float br1, br2;
    char op;
    char menu;
    cout << "Dobrodosao u divni drakulin kalkulator\n\nValjda znas kako radi menu\n\n1.Sabiranje\n2.Oduzimanje\n3.Mnozenje\n4.Deljenje\n5.Exit/Back" << endl;
    cin >> menu;
    switch(menu){
      case '1':
      cout << "Unesi brojeve koje zelis da saberes." << endl;
      cin >> br1 >> br2;
      cout << br1 << "+" << br2 << "=" << br1 + br2;
      break;

      case '2':
      cout << "Unesi brojeve koje zelis da oduzmes." << endl;
      cin >> br1 >> br2;
      cout << br1 << " - " << br2 << " = " << br1 - br2;
      break;

    case '3':
    cout << "Unesi brojeve koje zelis da pomnozis." << endl;
      cin >> br1 >> br2;
      cout << br1 << " * " << br2 << " = " << br1 * br2;
      break;

    case '4':
    cout << "Unesi brojeve koje zelis da podelis." << endl;
      cin >> br1 >> br2;
    if (br2==0)
    {
      cout << "Ne sme se deliti sa nulom pametni moj." << endl;
      break;
    }
    else
    {
      cout << br1 << " / " << br2 << " = " << br1 / br2;
      break;
    }
    case '5':
    cout << "Ako ti se izlazi, izadji." << endl;
    break;

    default:
      //ovde je pre bio beskorisni komentar, sad je ovde jos beskorisniji komentar *bat sound effect*
      cout << "Nesto si sjebo";
      break;
    }
    return 0;
}