#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<stdio.h>
using namespace std;


void print(pair<float, pair<int, int> > a )
{
    cout << a.second.first << " " << a.second.second << endl;
}
vector< pair<float, pair<int, int> > > sortdots(const char* input)
{
	freopen(input,"r", stdin);
	int n,a,b;
    float c;
    cin >> n;

    vector< pair<float, pair<int, int> > > A;

    for (int i=0;i<n;i++)
    {
        cin >> a >> b;
        c = a * a + b * b;
        A.push_back(make_pair(c, make_pair(a, b)));
    }

    sort(A.begin(), A.end());
    return A;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    vector< pair<float, pair<int, int> > > A=sortdots("input.txt");
    vector< pair<float, pair<int, int> > >::iterator it;
    cout <<"Точки в порядке возрастания расстояний:"<< endl;
    for (it = A.begin(); it != A.end(); it++)
        print(*it);
	return 0;
}

