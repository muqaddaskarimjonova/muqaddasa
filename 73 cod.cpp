#include <iostream>
using namespace std;
void f(int &i);
int main()
{
    int val = 1;
    cout << "staroe znaceniye peremennoy val:  "  << val << '\n';

    f(val); // peredayom adres peremennoy val funksii f()
    cout << "novoe znaceniye peremennoy val: " << val <<'\n';
    return 0;

}
void f(int &i)
{
    i = 10;//modificatsiya argumenta zadannogo pri vizove
}
