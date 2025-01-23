#include <iostream>;
#include <iomanip>;
using namespace std;
int main () {
//Problem2
    //for (int i=1; i<=5; ++i)
        //cout<<setw(5)<<i<<endl;


    //Problem3
    //int a,b;4
    //cin>>a>>b;
    //Swapping values;
    //int man=a;
    //a=b;
    //b=man;
    //second way swapping
    //cout<<"a="<<a<<" b="<<b<<endl;

    //Problem4
    //int Javohir;
    //cout<<"Please enter a Javohir:";
    //cin>>Javohir;
    //for (int i=1; i<=Javohir; ++i)
       //cout<<setw(5)<<i<<setw(5)<<i*i<<endl;
    //Problem 5
    string input;
    cout<<"`Please enter a string:";
    cin>>input;
    int a;
    a=input.length();
    int width=50;
    int gap=(width-a)/2;
    cout<<setw(gap)<<input<<setw(gap)<<endl;

}
