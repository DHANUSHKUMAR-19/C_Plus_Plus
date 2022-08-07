#include <iostream>

using namespace std;

int main()
{
    int l,b;
    cout<<"Enter the length of rectangle: "<<endl;
    cin>>l;
    cout << "\nEnter the breadth of the rectangle" << endl;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<l;j++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
