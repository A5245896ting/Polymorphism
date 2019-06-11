#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
#include <iostream>
#include <iomanip>
using namespace std;


void display(const GeometricObject & g) {
	cout<< ", area:" << fixed << setprecision(1) << g.getArea()
		<< ", volume:" << fixed << setprecision(1) << g.getVolume()
		<< ", color:" << g.getColor() << " " << endl;
}


int main()
{
	double radius, length;
	string ballColor, cubeColor;
	cin >> radius >> ballColor >> length >> cubeColor;

	Ball ball(radius, ballColor);
	Cube cube(length, cubeColor);

	ball.toString();
	cout << "radius:" << fixed << setprecision(1) << ball.getRadius();
	display(ball);

	cube.toString();
	cout << "length:" << fixed << setprecision(1) << cube.getLength();
	display(cube);

	system("pause");
	return 0;
}