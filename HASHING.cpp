#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "enter you're string: ";
    cin >> s;
    
    //pre compute
    int hash[26] = {0};
    for (int i = 0;i<s.size();i++) {
        hash [s[i] - 'a']++;
    }
    int q; 
    cout << "enter u're query: ";
    cin >> q;
    while(q--) {
        char c;
        cout << "enter you're character: ";
        cin >>c;
        //fetch
        cout << hash[c-'a'] << endl;
    }

    return 0;
}


// hashing using maps

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements in array: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    map<int, int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    
    int q;
    cout << "enter u're query: ";
    cin >> q;
    while(q--) {
        int number;
        cout << "enter you're number: ";
        cin >> number; 
        cout << mpp[number] << endl;
    }
    return 0;
}