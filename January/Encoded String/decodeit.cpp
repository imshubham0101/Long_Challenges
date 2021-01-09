#include <iostream>

using namespace std;

int decodeTheMessage(char *en, int l, int r, int count)
{
    if (count == 3)
    {
        if (en[3] == '0')
            return l;
        else
            return r;
    }
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (en[count] == '0')
            return decodeTheMessage(en, l, mid, ++count);
        else
            return decodeTheMessage(en, mid + 1, r, ++count);
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        char en[n];
        cin >> en;
        //cout<<en<<endl;

        char result[n / 4];
        char en1[4];
        for (int i = 0; i < n / 4; i++)
        {
            int mul_factor = i * 4;
            en1[0] = en[mul_factor];
            en1[1] = en[mul_factor + 1];
            en1[2] = en[mul_factor + 2];
            en1[3] = en[mul_factor + 3];
            char decoded_letter = static_cast<char>(97 + decodeTheMessage(en1, 0, 15, 0));
            result[i] = decoded_letter;
        }

        for (char i : result)
        {
            cout << i;
        }

        cout << endl;
    }
    // cout << static_cast<char>(97+decodeTheMessage(en , 0 , 15 , 0)) ;

    return 0;
}
