#include<iostream>
using namespace std;
#include<string>

#include "anak.h"
#include "ibu.h"

int main() {//agregasi
	ibu* varIbu = new ibu("dini");
	ibu* varIbu2 = new ibu("novi");
	anak* varIbu = new anak("tono");
	anak* varIbu = new anak("rini");
	anak* varIbu = new anak("Dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

	varIbu->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0
}