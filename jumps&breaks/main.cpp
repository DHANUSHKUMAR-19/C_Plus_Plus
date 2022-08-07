#include <iostream>

using namespace std;

int main()
{
    int pocketmoney=3000,c=0;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0)
        {
            break;
        }
        cout<<"Go out!!!"<<endl;
        pocketmoney-=300;
        c++;
    }
    cout<<"Total times: "<<c<<endl;

    return 0;
}
