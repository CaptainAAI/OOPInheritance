#include<iostream>
using namespace std;
#include<string>

#include "Jantung.h"
#include "manusia.h"

int main() {//composition
	manusia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;

}