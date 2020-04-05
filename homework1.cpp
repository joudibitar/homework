#include <iostream>

using namespace std;
void duzUcgen(int deger) {
	int bosluk = deger - 3;
	int yildiz = 1;
	for (int i = 0; i < deger - 2; i++) {
		for (int x = 0; x < bosluk; x++) {
			cout << " ";
		}
		for (int s = 0; s < yildiz; s++) {
			cout << "*";
		}
		cout << endl;
		bosluk--;
		yildiz += 2;
	}

}

void tersUcgen(int deger) {

	int bosluk = 0;
	int yildiz = deger;
	int i = 0;
	while (i < deger - 2) {
		int s = 0;
		while (s < bosluk) {
			cout << " ";
			s++;
		}
		int x = 0;
		while (x < yildiz) {
			cout << "*";
			x++;
		}
		cout << endl;
		bosluk++;
		yildiz -= 2;
		i++;
	}
}



void elmas(int deger) {



}
int main() {
	int a;
	int	b;
	cout << "Merhaba" << endl << "lutfen secin " << endl << "1: Duz Ucgen " << endl << "2: Ters Ucgen " << endl << "3: Elmas " << endl << "0: Cikis" << endl;
	cin >> a;
	if (a == 1) {

		for (int i = 0; i < 3; i++) {
			cout << "Duz ucgun cozmeye icin lutfen tek bir say 3 ve 15 arasinda secin : ";
			cin >> b;
			cout << "giridiginiz sayi: " << b << endl;
			if (b >= 3 && b <= 15 && b % 2 == 1) {
				duzUcgen(b);
				i = i + 3;
			}
			else {
				cout << "lutfen gecerli bir sayi giriniz\n";
				i++;
			}
		}
	}
	if (a == 2) {

		for (int i = 0; i < 3; i++) {
			cout << "Ters ucgun cozmeye icin lutfen tek bir say 3 ve 15 arasinda secin :";
			cin >> b;
			cout << "giridiginiz sayi: " << b << endl;
			if (b >= 3 && b <= 15 && b % 2 == 1) {

				tersUcgen(b);
				i = i + 3;
			}
			else {
				cout << "lutfen gecerli bir sayi giriniz\n";
				i++;
			}
		}
	}
	if (a == 3) {

		for (int i = 0; i < 3; i++) {
			cout << "Elmas cozmeye icin lutfen tek bir say 5 ve 15 arasinda secin : ";
			cin >> b;
			if (b >= 5 && b <= 15 && b % 2 == 1) {
				duzUcgen(b);
				tersUcgen(b);
				i = i + 3;
			}
			else {
				cout << "lutfen gecerli bir sayi giriniz\n";
				i++;
			}
		}
	}
	if (a == 0) {
		cout << "ciktiniz";
	}







	return 0;
}
