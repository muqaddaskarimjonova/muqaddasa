#include <iostream>
using namespace std;

int main()
{
    int i, j;
    i = 10;
    j = 100;
    if(j > 0){
        int i; // eta peremennaya i otdela ot vneshney peremennoy
        i = j /2;
        cout << "vnutrennaya peremennaya i; " << i << '\n';
    }
    cout << "vneshney peremennaya i; " << i << '/n';

    return 0;
}
