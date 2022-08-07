#include <iostream>

using namespace std;

int main()
{
    int n,flag=0;
    cout<<"\nEnter the number to check: "<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(!flag){
    cout << n<<" is Prime!!" << endl;}
    else{
        cout<<n<<" Not prime!!!"<<endl;
    }
    return 0;
}
