#include<iostream>
typedef unsigned long int li ;
using namespace std ;

void swap(li* k,li* x,li* y){            //1
    li t = *x ;
    *x = *y ;
    *y = t ;
    --(*k) ;
}

void top_to_left(li n,li* k,li* x,li* y){       //2
    li t = *x ;
    *x = 0;
    *y = n - t ;
    --(*k);

}
void left_to_top(li n,li*k,li* x,li* y){
    *x = n - *y ;
    *y = n ;
}
void anti_bottom_to_right(li n,li*k,li*x,li*y){      //3
    li t = *x ;
    *x = n;
    *y = *y +(n-t);
    --(*k);
}

void clock_right_to_bottom(li n,li*k,li*x,li*y){       //4

    *x = n-*y;
    *y = 0 ;
    --(*k);
}
void clockwise_initial(li n,li*k,li*x,li*y){ //bottom to top
    li t = *x ;
    *x=*x+(n-*y);
    *y= n;
    --(*k);
}

int main()
{
    int t ;
    cin >> t ;
    while(t--){
         li n,k,x,y;
        cin >> n >> k >> x >> y ;
        if ( n < 2) return 0 ;

        if(x == y){
            cout << n << ' '<< n << endl ;
            continue ;
        }
        //AnticlockWise
        if(x > y){
            while(k > 0 ) {
               
                if(k!=0) anti_bottom_to_right(n,&k,&x,&y);
                if(k!=0) swap(&k,&x,&y);
                if(k!=0) top_to_left(n,&k,&x,&y);
                if(k!=0) swap(&k,&x,&y);
               
           }
           cout<< x << " " << y <<endl;
        }
        //clock-Wise
        else{   
            clockwise_initial(n,&k,&x,&y);       
            while(k > 0 ){
                if(k!=0) swap(&k,&x,&y);
                if(k!=0) clock_right_to_bottom(n,&k,&x,&y);
                if(k!=0) swap(&k,&x,&y);
                if(k!=0) left_to_top(n,&k,&x,&y);

            }
           cout<< x << " " << y <<endl;
        }
    }
   
    
}