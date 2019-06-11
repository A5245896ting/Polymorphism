#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class GeometricObject
{
public:
	GeometricObject();
	GeometricObject(const string& color);
	string getColor() const;
	void setColor(const string& color);
	virtual double getArea()const;
	virtual double getVolume()const;
	virtual void toString() const;

private:
	string color;
}; 

#endif 
