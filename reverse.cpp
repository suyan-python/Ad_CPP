#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 2 + 1;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

vector<int> print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return v;
}

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);

    vector<int> ans = reverse(v);
    print(ans);
}
