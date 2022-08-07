#include <iostream>

using namespace std;

int main()
{
    int secret=10;
    int guess,limit=3;
    do{
            cout<<"Limit left: "<<limit<<endl;
            cout<<"\nEnter your guess: ";
            cin>>guess;
            limit--;
    }while(guess!=secret&& limit>0);
    if(guess==secret&&limit>=0){
    cout << "Hurray ! you guessed it correct!!!" << endl;
    }
    return 0;
}
