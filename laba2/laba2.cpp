#include <iostream>
#include <vector>
#include <clocale>

using namespace std;
int check, z;
int main() {
	
	  setlocale(LC_ALL, "Russian");
	
	cout << "Введите сумму для проверки: ";
	cin >> check;
	cout << "Введите размер массива: ";
	cin >> z;
	vector <int> a;
	cout << "Перечислите элементы массива: ";
	for (int i = 0; i < z; i++) {
		int mas;
		cin >> mas;
		a.push_back(mas);
	}
	for (int i = 0; i < z; i++) {
		for (int j = 0; j < z; j++) {
			if (a[i] + a[j] == check) {
				cout << a[i] << ", " << a[j];
				cout << endl;
			}
		}
	}
}