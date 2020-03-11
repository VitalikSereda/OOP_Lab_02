#include <iostream>
using namespace std;
#include "Rectangel.h"

void PrintRectangel(Rectangel);

int main() {
	system("chcp 1251");
	try
	{
		Rectangel* r1 = new Rectangel(5, 10);
		PrintRectangel(*r1);
		Rectangel* r2 = new Rectangel(*r1);
		PrintRectangel(*r2);
		r2->ChangeHeight(15);
		PrintRectangel(*r2);
		r1->ChangeHeight(-7);
		delete r1;
		delete r2;
	}
	catch (const char* message)
	{
		cout << "Error: " << message;
	}
}

void PrintRectangel(Rectangel obj)
{
	cout << "������: " << obj.GetHeight() << " ������: " << obj.GetWidght();
	cout << " ��������: " << obj.GetPerumetr() << " �����: " << obj.GetSquare() << endl;
}