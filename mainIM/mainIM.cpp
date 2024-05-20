#include<iostream>
using namespace std;
#include<string>

#include "Jantung.h"
#include "manusia.h"

int main() {//composition
	manunsia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;

}