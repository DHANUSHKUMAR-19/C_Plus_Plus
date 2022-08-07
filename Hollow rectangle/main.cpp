#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cout << "\nEnter the row and column!" << endl;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1||i==row||j==1|| j==col)
            {
                cout<<"*"<<"\t";
            }

            else{
                cout<<" "<<"\t";
            }
        }
        cout<<endl<<endl;
    }
    return 0;
}
