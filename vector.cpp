#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int>v={1,2,3};
	try{
		v.at(10);
	}
	catch(out _of_range e)
	{
		cout<<"Caught:"<<e.what();
	}
	return 0;
}
