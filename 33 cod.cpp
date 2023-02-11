#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
char *fortunes[] ={
"sizga yaqinda ...... keladi.\n",
"sizga yaqinda bilm keladi.\n",
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
