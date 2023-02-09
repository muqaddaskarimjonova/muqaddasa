#include <iostream>
using namespace std;
 
int main() {
    int n; // Количество бегунов
    cout << "Введите количество бегунов: ";
    cin >> n;

    int numbers[n]; // Массив с номерами бегунов

    cout << "Введите номера бегунов: " << endl;

    for (int i = 0; i < n; i++) { // Заполняем массив с номерами
        cin >> numbers[i];
    }

    double speed[n]; // Массив со скоростями

    cout << "Введите скорость бегунов: " << endl;

    for (int i = 0; i < n; i++) { // Заполняем массив скоростями
        cin >> speed[i];
    }

    int winnerIndex = 0, loserIndex = 0; // winnerIndex - index of the fastest runner, loserIndex - index of the slowest runner.

    double maxSpeed = speed[0], minSpeed = speed[0]; // maxSpeed - maximum speed, minSpeed - minimum speed.

    for (int i = 1; i < n; i++) { // Finding the fastest and slowest runners.
        if (speed[i] > maxSpeed) {
            maxSpeed = speed[i];
            winnerIndex = i;
        } else if (speed[i] < minSpeed) {
            minSpeed = speed[i];
            loserIndex = i;                             }   }

    cout << "Winner number is: " << numbers[winnerIndex] << endl; // Outputting the winner's number.   
    cout << "Loser number is: " << numbers[loserIndex] << endl; // Outputting the loser's number.   
    return 0;}