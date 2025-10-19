#include<iostream>
using namespace std;
class Shape {
	public:
		virtual void draw() {
			cout<<"Drawing a generic shape"<<endl;
		}
};
class Circle: public Shape {
	public:
		void draw() override {
		cout<<"Drawing a circle"<<endl;
		}
};
class Rectangle:public Shape {
	public: 
	void draw() {
	cout<<"Drawing a Rectangle"<<endl;
}
};
class Triangle: public Shape {
public:
	void draw() {
		cout<<"Drawing a Trinagle"<<endl;
	}
	
};
int main()
{
	Shape* shapePtr;
	Circle c;
	shapePtr = &c;
	shapePtr->draw();
	Rectangle r;
	shapePtr = &r;
	shapePtr->draw();
	Triangle t;
	shapePtr = &t;
	shapePtr->draw();
	Shape s;
	shapePtr = &s;
	shapePtr->draw();
	return 0;
	
}
