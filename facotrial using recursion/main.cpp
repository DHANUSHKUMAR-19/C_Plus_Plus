#include <iostream>

using namespace std;
int  factorial(int n)
{
    if( n==0){
        return 1;
    }
    return(n*factorial(n-1));
}

int main()
{
    int n;
    cout<<"\nEnter the no to find its factorial: "<<endl;
    cin>>n;
    int a=factorial(n);
    cout<<"\nFactorial of "<<n<< "is "<<a<<endl;

    return 0;
}
