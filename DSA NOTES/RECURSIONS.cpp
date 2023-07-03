//print name N times

#include<bits/stdc++.h>
using namespace std;

void hal(int i,int n) {
    if (i>n) return;
    else cout<< "shazam"<<endl;
    hal(i+1,n);
}

int main() {
    int n;
    cin >> n;
    hal(1,n);
    return 0;
}

//print linearly from 1 to N

#include<bits/stdc++.h>
using namespace std;

void hal(int i,int n) {
    if (i>n) return;
    else cout<< i<<endl;
    hal(i+1,n);
}

int main() {
    int n;
    cin >> n;
    hal(1,n);
    return 0;
}

//print from N to 1

#include<bits/stdc++.h>
using namespace std;

void hal(int i,int n) {
    if (i<1) return;        //i<1 cause it shouldn't less than one
    else cout<< i<<endl;
    hal(i-1,n);
}

int main() {
    int n;
    cin >> n;
    hal(n,n);               //hal(n,n)
    return 0;
}

//print from 1 to N but by not using i+1 (backtracking)

#include<bits/stdc++.h>
using namespace std;

void hal(int i,int n) {
    if (i<1) return;
    hal(i-1,n);             //here we called the function before printing so that we may use backtracking and prints use in the reverse order than before solutions.
    cout<< i<<endl;
}

int main() {
    int n;
    cin >> n;
    hal(n,n);
    return 0;
}


//summation of numbers using recursion: 

