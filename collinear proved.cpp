
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x1,x2, x3,y1,y2,y3;
    float dist ,dist1 , dist2 , dist3;
    
    cout<< "enter point x1:";
    cin>>x1;
    
    cout<< "enter point x2:";
    cin>>x2;
    
       cout<< "enter point x3:";
    cin>>x3;
    
    cout<< "enter point y1:";
    cin>>y1;
    cout<< "enter point y2:";
    cin>>y2;
    cout<< "enter point y3:";
    cin>>y3;
    
    
    
  dist1 =pow( pow(x2-x1,2) + pow(y2-y1,2),0.5 );
  dist2 =pow( pow(x2-x3,2) + pow(y2-y3,2),0.5 );
  dist3 =pow( pow(x3-x1,2) + pow(y3-y1,2),0.5 );
   
   float s = (dist1 + dist2 + dist3) / 2 ;
   float area = pow(  s *  (s-dist1) * ( s-dist2) * (s-dist3) , 0.5 ); // area = undroot(s(s-a) (s-b)(s-c) )
   
 if(area == 0)
   {
       cout<< "points are colinear" <<endl ;
   }
   else{
       cout<<"points are not colinear";
   };
   
    return 0 ;
}
    
    
    
    
