#include<bits/stdc++.h>
using namespace std;

bool comp(vector <int> &a, vector <int> &b)
{
    return a[1] < b[1];
}

int main()
{
    vector <vector<int>> v = {{1,3},{2,5},{12,16},{8,10},{9,11},{2,3}};
 
    sort(v.begin(),v.end(),comp);

    int cnt = 1;

    for(vector <int> x : v)
    {
        for(int y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    for(int i=0;i<v.size();i++)
    {
        if(i+1 != v.size() && v[i][1] < v[i+1][0])
        {
            cnt++; 
        } 
        else 
        {
            v.erase(v.begin()+i+1);
            i--;
        }
    }

    cout << cnt << endl;

    return 0;
}