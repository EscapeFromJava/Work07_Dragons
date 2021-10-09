#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int i, del1, del2, max, result2 = 1, result3 = 1;
	cout << "Введите количество голов драконьей стаи" << endl;
	cin >> i;
	if (i <= 2 || i >= 100) {
		cout << "Введено неверное значение" << endl;
		return 0;
	}

	if (i % 2 == 0) {
		del1 = i / 2;
		for (int i = 0; i < del1; i++) {
			result2 *= 2;
		}
	}
	else {
		del1 = i / 2;
		del2 = i % 2;
		if (del2 == 2) {
			for (int i = 0; i < del1; i++) {
				result2 *= 2;
			}
			for (int i = 1; i < del2; i++) {
				result2 *= 3;
			}
		}
		if (del2 == 1) {
			del1 -= 1;
			for (int i = 0; i < del1; i++) {
				result2 *= 2;
			}
			for (int i = 0; i < del2; i++) {
				result2 *= 3;
			}
		}
	}
	if (i % 3 == 0) {
		del1 = i / 3;
		for (int i = 0; i < del1; i++) {
			result3 *= 3;
		}
	}
	else {
		del1 = i / 3;
		del2 = i % 3;
		if (del2 == 2) {
			for (int i = 0; i < del1; i++) {
				result3 *= 3;
			}
			for (int i = 1; i < del2; i++) {
				result3 *= 2;
			}
		}
		if (del2 == 1) {
			del1 -= 1;
			del2 += 1;
				for (int i = 0; i < del1; i++) {
					result3 *= 3;
				}
				for (int i = 0; i < del2; i++) {
					result3 *= 2;
				}
			}
		}
	if (result2 > result3) {
		max = result2;
	}
	if (result3 > result2) {
		max = result3;
	}
	cout << " Значение при множителе 2 = " << result2 << endl;
	cout << " Значение при множителе 3 = " << result3 << endl;
	cout << " Максимальное значение силы = " << max << endl;
	return 0;
}