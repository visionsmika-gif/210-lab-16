// COMSC-210 | Lab 16 | Mika Aquino
// IDE used: Visual Studio 2022

/* INSTRUCTIONS:
Modify your Lab 14, Color class, such that it leverages constructors. Create a default constructor, a parameter constructor, and at least one partial constructor.
In main(), instantiate a variety of Color objects using a variety of types of constructors.*/

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

	// Parameterized constructor (take parameters and initialize attributes through initializer list)
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

// setColor() sets a Color object's red, blue, and green values.
// args: a reference to a Color object and three ints for red, blue, green
// returns: void
void setColor(Color& color, int r, int b, int g);

int main() {
	Color coral(249, 162, 178);
	Color turquoise(162, 246, 249);
	Color maroon(125, 46, 58);
	Color indigo(54, 59, 152);
	Color magenta(213, 60, 162);
	const int PRINT_WIDTH = 12; // Used for neat output


	// Output each color
	cout << left << setw(PRINT_WIDTH) << "Coral";
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

void setColor(Color& color, int r, int b, int g) {
	color.setRed(r);
	color.setGreen(b);
	color.setBlue(g);
}