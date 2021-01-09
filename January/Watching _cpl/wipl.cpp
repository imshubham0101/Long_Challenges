#include <iostream>
#include <bits/stdc++.h>
typedef long int li ;
typedef unsigned long int uli ;

using namespace std;

int main()
{

    int t;
    cin >> t ;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        li box_h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> box_h[i];
        }
        sort(box_h, box_h + n, greater<int>());

        
        uli sum1 = 0;
        uli sum2 = 0;
        int i = 0;
        while (!(sum1 >= k))
        {
            sum1 = sum1 + box_h[i];
            box_h[i] = 0;
            i = i + 2;
        }
        i = 1;
        while (!(sum2 >= k))
        {
            sum2 = sum2 + box_h[i];
            box_h[i] = 0;
            i = i + 2;
        }
        if(sum1 < k || sum2 < k){
            cout<<-1<<endl;
            continue;
        }
        int unused_box_count = 0;
        for (int i : box_h)
        {
            if (i != 0)
                unused_box_count++;
        }

        cout << unused_box_count << endl;
    }
    return 0;
}