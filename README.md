# DSA-shazam-notes
#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<int,int> p = {1,2};
    cout<< p.first <<endl << p.second << endl;
    pair<int,pair<int,int>> par = {4,{5,6}};
    cout<< par.first << endl <<par.second.first << endl;
}
int main()
{
    explainPair();
    return 0;
}
