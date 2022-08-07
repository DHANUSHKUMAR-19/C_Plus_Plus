#include <iostream>
# define max 100
#include<math.h>
int n;
using namespace std;
void prime(int a[]){
    int j,l[n+1];
    for(int i=2;i<=n;i++)
    {
        a[i]=i;
    }
    a[1]=1;
    for(int i=2;i<=(sqrt(n));i++)
    {
        if(a[i]!=0)
        {
            j=i*i;
            while(j<=n){

                    a[j]=0;
                    j=j+i;


            }
        }
    }
int i=0;
l[i++]=1;
    for(int k=2;k<=n;k++)
    {
        if(a[k]!=0){
            l[i++]=a[k];
        }
    }
    cout<<"Prime numbers are: ";
for(int k=0;k< i;k++){
cout<<l[k]<<"\t";
}


}
int main()
{
cout<<"\nEnter the range: "<<endl;
cin>>n;
int a[n+1];
prime(a);

return 0;
}
