// COMSC-210 | Lab 16 | Mika Aquino
// IDE used: Visual Studio 2022

#include <iostream>
#include <iomanip>

using namespace std;

class Color {
public:
	// Default constructor (delegates to parameterized constructor)
	Color() : Color(0, 0, 0) {}

	// Partial constructors (delegate to parameterized constructor)
	Color(int r) : Color(r, 0, 0) {}
	Color(int r, int g) : Color(r, g, 0) {}

	// Parameterized constructor (takes parameters to initialize each data member through initializer list)
	Color(int r, int g, int b) : red(r), green(g), blue(b) {}

	void setRed(int val)	{ red = val; }
	void setGreen(int val)	{ green = val; }
	void setBlue(int val)	{ blue = val; }

	int getRed() const		{ return red; }
	int getGreen() const	{ return green; }
	int getBlue() const		{ return blue; }

	void print() { cout << "RGB: " << red << ", " << green << ", " << blue << "\n"; }
private:
	int red;
	int green;
	int blue;
};

int main() {
	// Call default constructor
	Color black; // RGB = 0, 0, 0

	// Call partial constructors
	Color green(129); // RGB = 129, 0, 0
	Color russet(179, 80);	// RGB = 179, 80, 0

	// Call parameterized constructor
	Color coral(249, 162, 178);
	Color turquoise(162, 246, 249);
	Color maroon(125, 46, 58);
	Color indigo(54, 59, 152);
	Color magenta(213, 60, 162);

	const int PRINT_WIDTH = 12; // Used for neat output

	// Output each color
	cout << left << setw(PRINT_WIDTH) << "Black";
	black.print();
	cout << setw(PRINT_WIDTH) << "Green";
	green.print();
	cout << setw(PRINT_WIDTH) << "Russet";
	russet.print();
	cout << setw(PRINT_WIDTH) << "Coral";
	coral.print();
	cout << setw(PRINT_WIDTH) << "Turquoise";
	turquoise.print();
	cout << setw(PRINT_WIDTH) << "Maroon";
	maroon.print();
	cout << setw(PRINT_WIDTH) << "Indigo";
	indigo.print();
	cout << setw(PRINT_WIDTH) << "Magenta";
	magenta.print();

	return 0;
}