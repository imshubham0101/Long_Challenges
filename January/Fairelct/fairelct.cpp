#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long int A[n]; //john  array
        long int B[m]; //jack  array
        unsigned int sumOfJohn = 0;
        unsigned int sumOfJack = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sumOfJohn = sumOfJohn + A[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> B[i];
            sumOfJack = sumOfJack + B[i];
        }
        if (sumOfJohn > sumOfJack)
        {
            cout << 0 << endl;
        }
        else
        {

            sort(A, A + n);                 //ascending
            sort(B, B + m, greater<int>()); //decending
            int john_count = 0;
            int jack_count = 0;
            int count = 0;
            while (john_count < n && jack_count < n && (sumOfJohn <= sumOfJack))
            {
                int mintop = A[john_count];
                int maxtop = B[jack_count];

                if (mintop > maxtop)
                {
                    cout << -1 << endl;
                    return 0;
                }

                sumOfJohn = sumOfJohn - mintop + maxtop;
                sumOfJack = sumOfJack - maxtop + mintop;
                john_count++;
                jack_count++;
                count++;
            }

            if (sumOfJohn > sumOfJack)
                cout << count << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}