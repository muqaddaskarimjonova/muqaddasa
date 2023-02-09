#include <iostream>
#include <cstdlib>
using namespace std;
void drill();

int son;
int num_right;
int main()
{
	cout << "Skolko prakticheskih uprajneniy ";
	cin >> son;
	num_right = 0;
	do {
		drill(); son;
	} while (son);
	cout << "Vi dali" << num_right << "Togri javob.\n";
	return 0;

}
void drill()
{
	int count;
	int a, b, ans;
	a = rand() % 100;
	b = rand() % 100;
	for (count = 0; count < 3; count++) {
		cout << "Nechi baladi " << a << " + " << b << "? ";
		cin >> ans;
		if (ans == a + b) {
			cout << "Togri\n";
			num_right++;
			return;
		}
	}
	cout << "Siz hamma urinishingizni ishlatingiz.\n";
	cout << " Javobi barobar" << a + b << '\n';
}
