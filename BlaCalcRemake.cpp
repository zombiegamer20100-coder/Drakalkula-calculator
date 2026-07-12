#include <iostream>                                                     //to do: make language selector, upgrade to cont. calc.
using namespace std;                                                    //upgrade to multi-number calc,upgrade to scient. calc.
int main ()                                                             //ADD MENU TOP PTIORITY
{ //test test branch test here haha
    float br1, br2;
    char op;
    cout << "Unesi prvi i drugi broj" << endl;
    cin >> br1 >> br2;
    cout << "Unesi operator" <<endl;
    cin >> op;
    switch(op){
    case '+':
    cout << br1 << " + " << br2 << " = " << br1 + br2;
      break;

    case '-':
      cout << br1 << " - " << br2 << " = " << br1 - br2;
      break;

    case '*':
      cout << br1 << " * " << br2 << " = " << br1 * br2;
      break;

    case '/':
    if (br2==0)
    {
      cout << "Ne sme se deliti sa nulom!" << endl;
      break;
    }
    else
    {
      cout << br1 << " / " << br2 << " = " << br1 / br2;
      break;
    }

    default:
      //ako je znak koji nije +,-,* ili / pokazuje se error poruka
      cout << "Znak ne postoji!";
      break;
    }
    return 0;
}