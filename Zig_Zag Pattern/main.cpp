#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"\nEnter the column no: ";
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(i==2&& j%4==0||(i+j)%4==0){
                cout<<"*";
            }else{
            cout<<" ";}
            cout<<"\t";
        }
        cout<<endl<<endl;
    }

    return 0;
}
