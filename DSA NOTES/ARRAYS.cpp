//OPERATORS ON  ARRAY : 

//searching(unsorted array): 
//time complexity is: O(n)  and if the array is sorted then the T.C is log(n)

#include <iostream>
using namespace std;

int search(int arr[],int n, int x) {
    for(int i=0;i<n;i++) {
        if(arr[i]==x) {
            return i;
        }
    }return -1;
}


int main() {
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter your elements of your array: ";

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    int x;
    cout << "enter the element u wanna check: ";
    cin >> x;
    
    int result = search(arr,n,x);
    
    if(result == -1) {
        cout << "the number u are searching for is not in the array" << endl;
    }
    else{
        cout << "the index of your element is: " << result << endl;
    }
}
-----------------------------------------------------------------------------------

//insertion: 
//Time Complexity: O(n) if we insert at the begining of the array and O(1) if we insert at the end of the array.


#include <bits/stdc++.h>

using namespace std;

int insert (int arr[],int n,int x, int pos,int cap) {
    if(n == cap) {
        return n;
    }
    else {
        int idx = pos-1;
        for(int i=n-1;i>=idx;i--) {
            arr[i+1] = arr[i];
            
            
        }
        arr[idx] = x;
        return (n+1);
    }
}
    
int main() {
    int cap;
    cout << "enter the capacity of your aray: ";
    cin >> cap;
    int n;
    cout << "enter the size of your array: ";
    cin >> n;
    int arr[cap];
    cout << "enter the elements: ";
    for (int i=0;i<n;i++) {
        cin>> arr[i] ;
    }
    
    int x;
    cout << "enter the element you wanna insert: ";
    cin >> x;
    
    int pos;
    cout << "enter the position of element you wanna insert: ";
    cin >> pos;
    
    int newsize = insert(arr,n,x,pos,cap);
    
    cout << "array after insertion: ";
    for (int i=0;i<newsize;i++) {
        cout << arr[i] << " ";
    }
    
    return 0;

}
