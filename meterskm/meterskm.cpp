#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	double meters;

	cout << "Введите кол-во метров: ";

	cin >> meters;

	double kilometres = meters / 1000;

	cout << meters << " метров равно  " << kilometres << " километров" << endl;

}
