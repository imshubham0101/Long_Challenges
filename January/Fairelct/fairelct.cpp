#include <iostream>
#include <queue>

using namespace std;

int main()
{
//hello world
    int t;
    cin >> t;
     while (t--)
    {
        int n, m;
        cin >> n >> m;
        unsigned int A[n];
        unsigned int B[m];
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
            priority_queue<int> max_heap;
            priority_queue<int, vector<int>, greater<int>> min_heap;

            for (int x : B)
            {
                max_heap.push(x);
            }

            for (int x : A)
            {
                min_heap.push(x);
            }
            
            /* while (!max_heap.empty())
            {
                cout << '\t' << max_heap.top();
                max_heap.pop();
            }

            while (!min_heap.empty())
            {
                cout << '\t' << min_heap.top();
                min_heap.pop();
            } */
            int count = 0 ;
            while(!(sumOfJohn > sumOfJack ) ){
                int mintop = min_heap.top();
                min_heap.pop() ;
                int maxtop = max_heap.top();
                max_heap.pop();
                if(mintop > maxtop){
                cout<<-1 <<endl;
                    return 0 ;
                }
                sumOfJohn = sumOfJohn - mintop + maxtop ;
                sumOfJack = sumOfJack - maxtop + mintop ; 
                count++ ;
            }
            if (count >= 0 )
            cout << count <<endl ;
            else 
            cout << -1 <<endl ;

        }

    }
    
        return 0;
}