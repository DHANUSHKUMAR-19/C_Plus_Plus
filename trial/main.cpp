#include <iostream>

using namespace std;

/*int main()
{
    int n;
    cout<<"Enter the no of rows:   "<<endl;
    cin>>n;
    cout<<endl<<endl;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        cout<<endl<<endl;
    }
    return 0;
}*/
int main()
{
    int n;
    cout<<"\nEnter the no of rows: ";
    cin>>n;
    for(int i=n;i>0;i--){
    for(int j=1;j<=n;j++){
        if(j>=i){
            cout<<n-j+1;
        }else{
        cout<<" ";
        }
        cout<<"\t";
    }
    cout<<endl<<endl;
    }
    return 0;
}



