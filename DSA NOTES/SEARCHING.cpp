//binary search iterative method: 

#include <bits/stdc++.h>

using namespace std;

int shazam(int arr[],int n,int x) {
    int low =0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
            if(arr[mid]==x) {
                return mid;
            }
            else if(arr[mid]<x){
                low = mid+1;
            }
            else {
                high = mid - 1;
            }
    }
    
    return -1;
}
int main()
{
    int x;
    cout << "enter the number you wanna check: ";
    cin >> x;
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of your array: ";
    for (int i =0;i<n;i++) {
        cin >> arr[i];
    }
    int mid;
    
    int low;
    int high;
    int result = shazam(arr, n, x);
    
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}

//first occurance of elements in array using iterative method: 

#include <bits/stdc++.h>

using namespace std;

int shazam(int arr[],int n,int x) {
    int low =0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
            if(arr[mid]>x) {
                high = mid-1;
            }
            else if(arr[mid]<x){
                low = mid+1;
            }
            else {
                if(mid==0||arr[mid]!=arr[mid-1]) {
                    return mid;
                }else {
                    high = mid-1;
                }
            }
    }
    
    return -1;
}
int main()
{
    int x;
    cout << "enter the number you wanna check: ";
    cin >> x;
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of your array: ";
    for (int i =0;i<n;i++) {
        cin >> arr[i];
    }
    int mid;
    
    int low;
    int high;
    int result = shazam(arr, n, x);
    
    
    if (result != -1) {
        cout << "first occurance of element is: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}

//last occurance of elements using iterative method: 

#include <bits/stdc++.h>

using namespace std;

int shazam(int arr[],int n,int x) {
    int low =0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
            if(arr[mid]>x) {
                high = mid-1;
            }
            else if(arr[mid]<x){
                low = mid+1;
            }
            else {
                if(mid==n-1||arr[mid]!=arr[mid+1]) {
                    return mid;
                }else {
                    low = mid+1;
                }
            }
    }
    
    return -1;
}
int main()
{
    int x;
    cout << "enter the number you wanna check: ";
    cin >> x;
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of your array: ";
    for (int i =0;i<n;i++) {
        cin >> arr[i];
    }
    int mid;
    
    int low;
    int high;
    int result = shazam(arr, n, x);
    
    
    if (result != -1) {
        cout << "last occurance of element is: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}

//count occurance in a sorted array: 
#include <bits/stdc++.h>

using namespace std;

int firstocc(int arr[],int n,int x) {
    int low =0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
            if(arr[mid]>x) {
                high = mid-1;
            }
            else if(arr[mid]<x){
                low = mid+1;
            }
            else {
                if(mid==0||arr[mid]!=arr[mid-1]) {
                    return mid;
                }else {
                    high = mid-1;
                }
            }
    }
    
    return -1;
}
int lastocc(int arr[],int n,int x) {
    int low =0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
            if(arr[mid]>x) {
                high = mid-1;
            }
            else if(arr[mid]<x){
                low = mid+1;
            }
            else {
                if(mid==n-1||arr[mid]!=arr[mid+1]) {
                    return mid;
                }else {
                    low = mid+1;
                }
            }
    }
    
    return -1;
}

int count(int arr[],int n,int x){
    int first = firstocc(arr,n,x);
    if(first==-1) {
        return 0;
    }
    else {
        return lastocc(arr,n,x) - first + 1;
    }
}

int main()
{
    int x;
    cout << "enter the number you wanna check: ";
    cin >> x;
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of your array: ";
    for (int i =0;i<n;i++) {
        cin >> arr[i];
    }
    int mid;
    
    int low;
    int high;
    int result = count(arr, n, x);
    
    
    if (result != -1) {
        cout << "count of the num is: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}

















