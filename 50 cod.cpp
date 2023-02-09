#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int magic;
    int guess;
    magic = rand();
    do {
        cout <<"vvedite svoy variant magiceskogo cisla:";
        cin >> guess ;
        if(guess == magic){
            cout << "** pravilno **";
            cout << magic << "i yest to samoe magiceskoye cislo.\n";
        }
        else{
            cout << "...ocen jal no vi owiblis.";
            if(guess > magic)
                cout <<"vaw variant previwayet magiceskoe cislo.\n";
            else cout <<"vaw variant menwe magiceskogo cisla.\n";
        }
    }while(guess !=magic);
    return 0;
}
