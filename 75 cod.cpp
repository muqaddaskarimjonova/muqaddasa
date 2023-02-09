#include <iostream>
using namespace std;
void swap(int *x, int *y);

int main()

{
    int i, j;
    i = 10;
    j = 20;
    cout << "ishodni znacheniya peremennix i j: ";
    cout << i << ' ' << j << '\n';

    swap(&j, &i);
    cout << "znacheniya peremennix i j posle obmena: ";
    cout << i << ' ' << j << '\n';
    return 0;
}


void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
