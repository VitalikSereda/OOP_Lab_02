#include "Rectangel.h"

Rectangel::Rectangel(int height, int widht) {
	if (height < 0 || widht < 0)
	{
		throw ("wrong value");
	}
	this->H = new int(height);
	this->W = new int(widht);
}

Rectangel::Rectangel(Rectangel& obj)
{
	this->H = new int(*obj.H);
	this->W = new int(*obj.W);
}

int Rectangel::GetHeight() {
	return *H;
}
int Rectangel::GetWidght() {
	return *W;
}

void Rectangel::ChangeHeight(int newH) {
	if (newH < 0)
	{
		throw ("wrong value");
	}
	*H = newH;
}
void Rectangel::ChangeWidht(int newW) {
	if (newW < 0)
	{
		throw ("wrong value");
	}
	*W = newW;
}

int Rectangel::GetSquare() {
	return (*H) * (*W);
}
int Rectangel::GetPerumetr() {
	return 2 * (*H + *W);
}

Rectangel::~Rectangel()
{
	delete this->H;
	delete this->W;
}