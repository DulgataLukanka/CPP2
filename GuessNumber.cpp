// основен вход - изход
#include <iostream>
// генериране на произволни числа
#include <cstdlib>
// получаване и обработване на информация за дата и час
#include <ctime>
// използвай стандартен списък от имена
using namespace std;

int main()
{
	// присвояване на началната стойност използвайки часовника за реално време на компютъра като основа
    srand(time(0));
    // деклариране на долна и горна граница
    int mini, maxi;

    cout << "Guess My Number Game\n\n";
    // вход на минимално и максимално число
    cout << "Enter minimum number: ";
    cin >> mini;
    cout << "\nEnter maximum number: ";
    cin >> maxi;
    cout << endl;

    // избиране на число между минимум и максимум
    int num = rand() % (maxi - mini) + mini;

	// декларирай броя познавания и въведеното число
    int guess = 0, guess_count = 0;

    // продължи въвеждането до познаване на числото
    while (guess != num) {
    	// увеличи броя на познаванията
        guess_count++;
		// вход на предположението
        cout << "Enter a guess between " << mini << " and  "<< maxi << ": ";
        cin >> guess;
		// ако се въведе 0 играта приключва
        if (guess == 0) {
            cout << "\nGame ended\n";
            break;
        }
        // проверяваме дали предположеното е по-голямо от числото
        if (guess > num) {
            cout << "Too high!\n\n";
        }
        // проверяваме дали предположеното е по-малко от числото
        else if (guess < num) {
                cout << "Too low!\n\n";
        }
        // ако предишните две не са изпълнени предположеното е равно на числото
        else {
            cout << "\nCorrect! You got it in " << guess_count << " guesses";
        }
    }

	// излизане от програмата
    return 0;
}
