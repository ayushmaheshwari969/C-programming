#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout << "enter the values of angle \n"<<endl;
    cout<< "value of a is:";
    cin >> a;
    cout<< "value of b is:";
    cin>> b;
    cout<< "value of c is:";
    cin >> c ;
   
    d= a+b+c;
   
if(d==180){
    cout<<"triangle is possible" ;
}
else{
    cout<<"triangle is not possible";
} ;
   
}

