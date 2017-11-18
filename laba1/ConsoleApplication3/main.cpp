// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"triangle.h"
#include "hexagon.h"
#include "octagon.h"

using namespace std;
int main(int argc, char* argv[])
{
	int command = 1; // Default value
	Triangle* trngl = new Triangle(cin);
	Hexagon* hxgn = new Hexagon(cin);
	Octagon* octgn = new Octagon(cin);
	//Figure* fig = new Figure();
	while (true) // endless loop
	{
		cout << "What you want to do?" << endl;
		cout << "1 - rewrite a Triangle, 2 - print the square of triangle, 3 - print length of each sides" << endl;
		cout << "4 - rewrite a Hexagon, 5 - print the square of hexagon, 6 - print length of each sides" << endl;
		cout << "7 - rewrite an Octagon, 8 - print the square of octagon, 9 - print length of each sides" << endl;
		cout << "0 - for exit" << endl;
		cin >> command;
		if (command == 1)
		{
			delete(trngl);
			trngl = new Triangle(std::cin);
		}
		else if (command == 2)
		{
			std::cout << "S = " << trngl->Square() << std::endl;
		}
		else if (command == 3)
		{
			trngl -> Print();
		}
		else if (command == 4)
		{
			delete(hxgn);
			hxgn = new Hexagon(std::cin);
		}
		else if (command == 5)
		{
			std::cout << "S = " << hxgn->Square() << std::endl;
		}
		else if (command == 6)
		{
			hxgn -> Print();
		}
		else if (command == 7)
		{
			delete(octgn);
			octgn = new Octagon(std::cin);
		}
		else if (command == 8)
		{
			std::cout << "S = " << octgn->Square() << std::endl;
		}
		else if (command == 9)
		{
			octgn -> Print();
		}
		else if (command == 0) return 0;
		else std::cout << "Wrong command. Try again" << std::endl;
	}
		return 0;

}

