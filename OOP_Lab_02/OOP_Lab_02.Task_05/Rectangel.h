#pragma once
using namespace std;
class Rectangel
{
private:
	int* H;
	int* W;
public:
	Rectangel(int height, int widht);
	Rectangel(Rectangel&);
	int GetHeight();

	int GetWidght();

	void ChangeHeight(int newH);
	void ChangeWidht(int newW);

	int GetSquare();
	int GetPerumetr();

	~Rectangel();
};
