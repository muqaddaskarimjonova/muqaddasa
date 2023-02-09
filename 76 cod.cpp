#include <iostream>
using namespace std;

void display(int a[50]);
int main()
{
	system("color 0A");
	int t[50], i;
	for (i = 0; i < 50; i++) t[i] = i;
	display(t);

	return 0;
}
void display(int a[50])
{
	int i;
	for (i = 0; i < 50; i++) cout << a[i] << ' ';
}
