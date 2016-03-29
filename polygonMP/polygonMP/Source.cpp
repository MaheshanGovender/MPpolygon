#include<iostream>
using namespace std;

class Polygon//virtual class
{
protected:
	int height, width;// private members

public:
	virtual double area() { return 0; };//virtual function
	void set(int h, int w)//mutator function
	{
		height = h;
		width = w;
	}


};
class Triangle :public Polygon//concrete class derived virtual class
{
public:
	Triangle() {};//default constructor

	double area()//override area function
	{
		double Area;
		Area = 0.5*height*width;
		return Area;
	}
};

class Rectangle :public Polygon
{
public:
	Rectangle() {};

	double area()
	{
		double Area;
		Area = height*width;
		return Area;

	}
};
int main()//driver program
{


	Polygon *ptr2Tri;//pointer to virtual class
	Triangle TR1;
	ptr2Tri = &TR1;//assigning address of TR1 to this pointer
	ptr2Tri->set(3, 4);
	//TR1.set(3, 4);
	cout << "Area is" << TR1.area() << endl;//printing area
	return 0;



}



