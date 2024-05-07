#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main() {
	mahasiswa mhs{ 1 }; // object mhs
	mhs.showNim(); //member acces operator

	mahasiswa& refMhs = mhs; //Pointer reference refMhs
	refMhs.nim = 2; // member access operator
	mhs.showNim();

	mahasiswa* pmhs = &mhs; //pointer dereference pMhs
	pmhs->nim = 3; //Arrow operator
	pmhs->showNim();
	return 0;
}