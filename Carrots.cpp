/*
 * Carrots.cpp
 *
 *  Created on: 15 июл. 2018 г.
 *      Author: user
 */
#include <iostream>
#include <cstdint>
int main()
{
	using namespace std;
	int carrots;
	uint8_t o = 0x00;

	carrots = 25;
	cout << "i have ";
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;
	for (i=0; i<8; ++i)
	 cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}



