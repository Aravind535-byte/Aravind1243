#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    stack<int> s1, s2;
    int a[n];
    cout << "stack before sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i];
        s1.push(a[i]);
    }
    cout << endl;
    while (!s1.empty())
    {
        k = s1.top();
        s1.pop();
        while (!s2.empty() && s2.top() < k)
        {
            s1.push(s2.top());
            s2.pop();
        }
        s2.push(k);
    }
    cout << "sorted stack" << endl;
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    return 0;
}