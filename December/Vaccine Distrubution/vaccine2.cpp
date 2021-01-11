#include<iostream>
typedef long int li ;
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n;
        li d ;
        cin >> n >> d ;
        int a[n] ;
        int risky[n];
        int non_risky[n];
        int r_count = 0 ;
        int nr_count = 0 ;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] ;
            if(a[i]>=80 || a[i] <=9){
                r_count++;
            }
            else{
                nr_count++;
            }

        }
        int final_days = 0 ;
        final_days = r_count/d + r_count % d  ;
        final_days = final_days + nr_count/d + nr_count % d  ;
        cout << final_days <<endl;
    








        
    }
}