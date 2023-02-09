#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
char *fortunes[] ={
"sizga yaqinda pul keladi.\n",
"sizga yaqinda sevgi keladi.\n",
"uzoq va baxtli baxtli hayot kechirasiz.\n",
"hozir pul tikkaniz foyde bolib qaytib keladi.\n",
"dostingiz sizni izlaydi.\n",
};
int main()
{

    int chance;
    cout <<"kelajakingizni bilish uchun hohlagan soningizni  bosing: ";
    while(!kbhit()) rand();
    cout << '\n';
    chance = rand();
    chance = chance % 5;

    cin>> chance;
     cout << fortunes[chance];
    return 0;
}
