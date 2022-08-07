#include<iostream>
using namespace std;
int main(){
    bool red_light{false},green_light{false};
    // boolalpha;
    if(red_light==true){
        cout<<"Stop!!!"<<endl;
    }else{
        cout<<"GO!!!"<<endl;
    }
    cout<<sizeof(bool);
    cout<<boolalpha;
    cout<<red_light;
}