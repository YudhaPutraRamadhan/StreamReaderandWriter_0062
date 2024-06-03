#include <iostream>
#include <exception>
//Untuk objek exception yang akan digunakan
#include <array>
//Untuk objek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //Penanda 1:...
	try {
		array<int, 3> data = { 8, 4, 2 };
		//Pesan array interger 3 elemen
		cout << data.at(5) << endl;
	}
}