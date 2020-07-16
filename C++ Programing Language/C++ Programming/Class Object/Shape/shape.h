#ifndef SHAPE_H
#define SHAPE_H

class Shape {		// Abstract Base Class(ABC)
protected:
	int x_;
	int y_;


public:
	Shape(int x, int y);
	virtual ~Shape() {}			// definition member function in header file (inline fuction)

	void move(int offsetX, int offsetY);
	virtual double area() const = 0;		// pure virtual function

};

#endif