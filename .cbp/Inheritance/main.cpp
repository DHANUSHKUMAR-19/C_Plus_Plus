#include <iostream>

using namespace std;
class Chef{
public:
    void make_chicken(){
    cout<<"Chef makes chicken"<<endl;
    }
    void make_salad(){
    cout<<"Chef makes salad"<<endl;
    }
    void makes_special_dish(){
    cout<<"Chef makes chicken biriyani"<<endl;
    }
};
class italian_chef : public Chef{

public:
    void makes_pasta(){
    cout<<"italian_chef makes pasta"<<endl;
    }
      void makes_special_dish(){
    cout<<"Chef makes chicken BBQ"<<endl;
    }
};
class Master_chef: public Chef,public italian_chef{
public:
    void dish(){
    cout<<"Makes Pani puri"<<endl;
    }

};

int main()
{
   Chef chef;
   chef.make_chicken();
   italian_chef chef1;
   chef1.makes_special_dish();
   chef1.makes_pasta();
   chef.makes_special_dish();
   cout<<"__________________------------------------------------____________________________"<<endl;
   Master_chef c;
   c.dish();
   c.makes_pasta();

    return 0;
}
