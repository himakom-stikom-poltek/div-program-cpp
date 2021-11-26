#include <conio.h>
#include <iostream.h>

main(){
	int value = 10; // inisiasi variable

   // do while akan melaksanakan setidaknya 1 kali block kode yang ada di dalam tag do, walaupun kondisi nya tidak benar
   do{
   	cout << "OKE NAMPIL\n";
   }while(value > 20); // kalau dilihat kondisinya 10 > 20 kan salah. tapi kode di dalam tag do akan berjalan setidaknya satu kali.

   getch();
}