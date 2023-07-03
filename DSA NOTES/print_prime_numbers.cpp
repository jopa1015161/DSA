#include <bits/stdc++.h>
using namespace std;
int i;

int cnt=0;
void shazam(int n) {
    
    for (i=1;i*i<=n;i++) {
        if(n%i==0) {
            cnt++;
            if (n/i!=i) {
                cnt++;
            }
        }
        
    }if (cnt==2) {
            cout<< "prime";
    }else cout<< "not a prime";
    
}

int main()
{
    int n;
    cin >> n;
    shazam(n);

    return 0;
}
