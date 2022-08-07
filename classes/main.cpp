#include <iostream>

using namespace std;
class Book{
private:
    int rating;
public:
    string title;
    int no;
    string name;
    Book(){
        title="No title";
    no=0;
    name="None";
    }
    Book(string atitle,int ano,string aname,int arating){
    title=atitle;
    no=ano;
    name=aname;
    setrating(arating);
    }
    void setrating(int arating){
    rating=arating;
    }
    int getrating()
    {
        return rating;
    }
    bool eligible()
    {
        if(no>0){
            return true;
        }
        return false;
    }
};

int main()
{
    Book book1("Harry Potter",154,"JK Rowlins",10);
    Book book2;
    book1.setrating(9);
    if(book1.eligible())
    {
        cout<<"yes"<<endl;
    }else{
    cout<<"No"<<endl;
    }
    cout<<book1.getrating();

}
