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

_____________________________________________________________________________________
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
_____________________________________________________________________________________
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

_____________________________________________________________________________________
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
    returns 0;
}

_____________________________________________________________________________________
//summation of numbers using recursion using parameters: 

#include <bits/stdc++.h>
using namespace std;

void f(int i,int sum) {
    if(i<1) {
        cout << sum << endl;
        return;
    }
    f(i-1,sum+i);
    
}

int main() {
    int i;
    int n;
    cout<< "enter the number: ";
    cin >> n;
    f(n,0);

}

_____________________________________________________________________________________
//summation of N numbers using functional method:

#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if(n==0) {
        return 0;
    }return n + f(n-1); //if n=3--3+f(2)--3+2+f(1)--3+2+1+f(0) and here it returns zero and stops executing
}
int main() {
    int n;
    cout<< "enter the number: ";
    cin >> n;
    cout << f(n);

}

_____________________________________________________________________________________
//recursion method for finding factorial using functional method:

#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if(n==0) {
        return 1;
    }return n*f(n-1);
}
int main() {
    int i;
    int n;
    cout<< "enter the number: ";
    cin >> n;
    cout << f(n);

}

_____________________________________________________________________________________
//reverse an ARRAY: 

#include <bits/stdc++.h>
using namespace std;

void  f(int i,int arr[],int n) {
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main() {
    int i;
    int n;
    cout<< "enter the size of array : ";
    cin >>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>> arr[i];
    f(0,arr,n);
    cout << "the reversed number is: " ;
    for (int i=0;i<n;i++) cout << arr[i] << " ";
    return 0;
}

_____________________________________________________________________________________
//check if a string is a palindrome: 

#include <bits/stdc++.h>
using namespace std;

bool f(int i,string &s) {
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return f(i+1,s);
}

int main() {
    string s = "madam";
    cout << f(0,s);
    return 0;
}

_____________________________________________________________________________________
//fibonicc number: 

#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if(n<=1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}

