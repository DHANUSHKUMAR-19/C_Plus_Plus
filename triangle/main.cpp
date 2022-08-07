#include <iostream>

using namespace std;

int main()
{
    int n,a=1;
    cout<<"\nEnter the rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j<=n-i||j>=n+i){
                cout<<" ";
            }
            else{
                cout<<a;
                a++;
            }

            cout<<"\t";
        }
        cout<<endl<<endl;
    }
      for(int i=n-1;i>0;i--){
        for(int j=1;j<=2*n-1;j++){
            if(j<=n-i||j>=n+i){
                cout<<" ";
            }
            else{
                cout<<a;
                a++;
            }
            cout<<"\t";
        }
        cout<<endl<<endl;
    }
    return 0;
}
