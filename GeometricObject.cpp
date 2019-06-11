#include "GeometricObject.h"

GeometricObject::GeometricObject()
{
	color = "white";
}

GeometricObject::GeometricObject(const string& color)
{
	this->color = color;
}

string GeometricObject::getColor() const
{
	return color;
}

void GeometricObject::setColor(const string& color)
{
	this->color = color;
}

double GeometricObject::getArea() const
{
	return 0;
}

double GeometricObject::getVolume() const
{
	return 0;
}

 void GeometricObject::toString() const
{
	cout<< "Geometric Object";
}