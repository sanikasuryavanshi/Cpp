#include<iostream>
using namespace std;
int main(){
int numerator,denominator;
double result;
cout<<"enter numerator : ";
cin>>numerator;
cout<<"enter denominator : ";
cin>>denominator;
try{
    if(denominator == 0)
    throw denominator;
    result=(double)numerator/denominator;
    cout<<"result = "<<result<<endl;
}
catch(int e){
    cout<<"error! division by zero is not allowed"<<endl;
}
cout<<"end program.."<<endl;
return 0;
}
