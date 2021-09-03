#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m;
	cout << "Введите номер месяца:\n";
	cin >> m;
	switch (m) {
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:cout << "В этом месяце тридцать один день\n"; break;
	case 2: cout << "В этом месяце двадцать восемь дней\n"; break;
	case 4:case 6:case 9:case 11: cout << "В этом месяце тридцать дней\n"; break;
	default: cout << "\n Нет такого месяца \n";}
	return 0;
}
