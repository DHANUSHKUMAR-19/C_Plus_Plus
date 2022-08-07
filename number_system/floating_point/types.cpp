#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

float a{12346.789f};
double b{23457890100.00254656};
long double c{12345678998765432.5623L};
 setprecision(20);
cout<<"sizes"<<endl;
cout<<sizeof(float)<<endl<<sizeof(double)<<sizeof(long double)<<endl;
cout<<"Values"<<endl<<a<<endl<<b<<endl<<c<<endl;
cout<<.0/.0<<endl;
cout<<-1.0/0<<endl;
double f{156.594e-11f};
cout<<f<<endl;
}