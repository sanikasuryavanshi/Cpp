#include<iostream>
using namespace std;
class landvehicle
{
	public:
		landvehicle()
		{
		cout<<"this vehicle works on land"<<endl;
	}
};
class watervehicle
{
	public:
		watervehicle()
		{
		cout<<"this vehicle works on water"<<endl;
	}
};


class amphibiousvehicle:public watervehicle,public landvehicle
{
	public:
		amphibiousvehicle()
		{
		cout<<"this vehicle is works on both";
	}
};
int main()
{
	amphibiousvehicle v;
	return 0;
}
