//tanda format ios::showpos

# include <iostream>
# include <conio.h>
# include <iomanip>

/* Created By Rizky Khapidsyah */

using namespace std;

int main() {
	int a = 8, b = -9;
	
	cout << "Tanpa Menggunakan ios::showpos" << "\n\n";
	cout << "Nilai a = " << a << " Nilai b = " << b << endl;
	cout << "\n\n";
	cout << setiosflags(ios::showpos);
	cout << "Dengan Menggunakan ios::showpos" << "\n\n";
	cout << "Nilai a = " << a << " Nilai b = " << b << endl;

	_getch();
	return 0;
}