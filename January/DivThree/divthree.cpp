#include<iostream>

using namespace std ;

//Accepted Successfully :-) ;
int main(){
    int t,n ;
    unsigned int  k,d ;
    cin >> t ;

    if(t > 0 && t <= 1000)
        while(t--){
            cin >> n >> k >> d ; 
            unsigned long int problems[n] ;
            unsigned int totalProblems = 0;

            for (int i = 0; i < n; i++)
            {
                cin >> problems[i] ;
                totalProblems = totalProblems + problems[i] ;

            }
            /* for (int i=0 ; i<n ; i++){
                totalProblems = totalProblems + problems[i] ;
            } */
            if(totalProblems < k)
            cout << 0 << endl;
            else 
            {
                unsigned int context_days = totalProblems/d >= k ? d :totalProblems / k;
                cout << context_days << endl ;
            }
        }
}