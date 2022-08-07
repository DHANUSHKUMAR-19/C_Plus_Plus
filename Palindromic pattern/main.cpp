#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(j<=n-i||j>=n+i){
                cout<<" ";
            }
            else{
                if(n-j>0){
                    cout<<n-j+1;
                }else{
                cout<<j-n+1;
                }
            }
            cout<<"\t";
        }
         cout<<endl<<endl;
    }
    return 0;
}
