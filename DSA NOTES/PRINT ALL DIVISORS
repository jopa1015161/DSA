#include <bits/stdc++.h>
using namespace std;
int i;
vector<int>ls;
void shazam(int n) {
    
    for (i=1;i*i<=n;i++) {
        if(n%i==0) {
            ls.push_back(i);
            if (n/i!=i) {
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it: ls) cout<< it<< endl;
}

int main()
{
    int n;
    cin >> n;
    shazam(n);

    return 0;
}
