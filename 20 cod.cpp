#include <iostream>
using namespace std;

void total( int x);
int main()
{
    cout << "vichislenie summi chisel ot 1 do 9.\n";
    total ( 9 );
    cout <<"n  vichislenie summi chisel ot  1 do 10. \n";
    total ( 10 );
    cout << "n  vichislenie summi chisel ot  1 do 13. \n";
    total ( 13 );

    return 0;
}

void total( int x)
{
    int sum=0;
    int i, count;
    for(i=1; i<=x; i++) {
    sum = sum + i;
    for(count=0; count<10; count++) cout << '.';

    cout << " promejutochnaya summa ravna " << sum << '\n';
    }
}



