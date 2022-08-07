#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"\nEnter the range: ";
    cin>>n;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=2*n;j++){
            if(j<=i ||j>2*n-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
              cout<<"\t";

        }
        cout<<endl<<endl;
    }
    for(int  i=n;i>0;i--)
    {
        for(int j=1;j<=2*n;j++)
        {
           if(j<=i ||j>2*n-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            cout<<"\t";
        }
        cout<<endl<<endl;
    }

    return 0;
}
