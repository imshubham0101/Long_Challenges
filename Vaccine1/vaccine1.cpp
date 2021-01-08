#include<iostream>
//Hello from second commit
using namespace std ;

int main(){
    int d1,v1,d2,v2,p ;
    cin >> d1 >> v1 >> d2 >> v2 >> p ;
    
    int finalDays = (d1 <= d2 ) ? d1 - 1 : d2 - 1 ;
    int loneDays = (d1 < d2) ? d2-d1 :d1-d2 ;
    int sum = 0 ;
    while(loneDays-- && sum < p){
        int vmin = (d1 < d2) ? v1 : v2 ;
        sum = sum + vmin ;
        finalDays++;
    }
     while(sum < p ){
         sum = sum +v1 +v2 ;
         finalDays++;
     }
     cout <<finalDays; 

     //changes from office pc
     //another line
     //another line2

     cout <<finalDays;

}
