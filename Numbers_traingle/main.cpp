#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"\nEnter the no of rows: ";
    cin>>n;
    cout<<endl<<endl;
    /*for(int i=1;i<=n;i++){

        for(int j=1;j<2*n;j++){
            if(j<=n-i||j>=n+i){
                cout<<" ";
            }
            else{
                cout<<(i+j)-n;
            }
            cout<<"\t";
        }
        cout<<endl<<endl;
    }*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
        for(int i=n-1;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}
