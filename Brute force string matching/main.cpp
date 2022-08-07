#include <iostream>
#include<string>

using namespace std;
int brute_force_string(string p,string t)
{

}

int main()
{
    int a;
    string p,t;
    cout<<"\nEnter the text: "<<endl;
    getline(cin,t);
    cout<<"\nEnter the pattern: "<<endl;
    getline(cin,p);
    a=brute_force_string(p,t);
    if(a==-1){
        cout<<p<<" not found"<<endl;
    }else{
    cout<<p<<"found at "<<a<<"position"<<endl;
    }
        return 0;
}
