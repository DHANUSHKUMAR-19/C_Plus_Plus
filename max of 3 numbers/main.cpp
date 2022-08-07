#include <iostream>

using namespace std;
double maximum(double n1,double n2,double n3){
if (n1>n2&& n1>n3)
{

        return(n1);
    }
else{
    if (n2>n3)
    {
        return n2;
    }return n3;
}
}

int main()
{
    switch(ch)
    {

    }
    double n1,n2,n3;
    cout<<"\nEnter 3 numbers: "<<endl;
    cin>>n1>>n2>>n3;
    cout<<"Max  number is : "<<maximum(n1,n2,n3)<<endl;
    return 0;
}
