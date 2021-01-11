#include<iostream>
typedef long long int lli ;
typedef long int li ;
using namespace std ;

void getCount(int num,li* evencount ,li* oddcount){
    if(num % 2 == 0){
        *evencount = num / 2 ;
        *oddcount = num /2 ;
    } else{
        *evencount = num /2 ;
        *oddcount  = (num / 2)+1 ;
    }

}
int main(){
    int t ;
    cin>>t;
    while(t--){
        lli a,b; 
        cin >> a >> b ;
        li evencount = 0;
        li oddcount = 0;
        getCount(a,&evencount ,&oddcount);
        li a_evenCount = evencount ;
        li a_oddCount = oddcount ;

        getCount(b,&evencount,&oddcount);
        li b_evenCount = evencount ;
        li b_oddCount = oddcount ;
        
        li evenPairsSum = a_evenCount * b_evenCount + a_oddCount * b_oddCount ;
        cout << evenPairsSum <<endl;

    }
}
