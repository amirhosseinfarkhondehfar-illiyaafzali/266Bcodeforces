#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            v.push_back(i);
        }
    }
    while (b > 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (s[v[i]]=='B'&&s[v[i]+1]=='G')
            {
                s[v[i]]='G';
                s[v[i]+1]='B';
                v[i]++;
            }
            
        }
        b--;
    }

    cout << s << endl;
}