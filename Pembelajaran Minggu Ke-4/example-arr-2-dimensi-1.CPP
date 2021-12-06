#include <iostream.h>
#include <conio.h>

int main() {

	// konsepnya sama seperti array pada umumnya, tetapi array 2 dimensi berbentuk seperti table (baris & kolom)
	int data[3][4]={{3,4,8,0},{3,9,2,1},{6,3,0,2}};

	for (int baris = 0; baris < 3; baris++){
		for (int kolom = 0; kolom < 4; kolom++){
				cout << data[baris][kolom]<< " ";
		}
		cout << endl;
	}

	getch();

}