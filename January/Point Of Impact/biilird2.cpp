#include <iostream>
typedef long int li ;
typedef unsigned long int uli ;

using namespace std;
void swap(uli *x, uli *y)
{
    uli t = *x;
    *x = *y;
    *y = t;
}

void rotate(uli n, uli k, uli x, uli y)
{
    while (k > 0)
    {
        if (k == 0)
            break;
        while (x < n)
        {
            x++;
            y++;
        }
        k--;
        if (k == 0)
            break;
        swap(&x, &y);
        k--;
        if (k == 0)
            break;
        while (x > 0)
        {
            x--;
            y--;
        }
        k--;
        if (k == 0)
            break;
        swap(&x, &y);
        k--;
    }
    cout << endl;
    cout << x <<" "<< y ;
}



int main()
{

    li t;
    cin>>t;
    while (t--)
    {
        uli n, k, x, y;
        cin >> n >> k >> x >> y;
        if (x == y)
        {
            cout<<endl;
            cout << n <<" "<< n ;
            continue;
        }
        if(x == n && y == 0){
           cout<<endl;
           cout << x <<" "<< y ;
          continue; 
        }
        if(x == 0 && y == n){
           cout<<endl;
           cout << x <<" "<< y ;
          continue; 
        }
        if (x > y)
        {
            rotate(n, k, x, y);
           // continue;
        }
        else{
            rotate(n,k,y,x);
            //continue;
        }
    }
    return 0;
}
