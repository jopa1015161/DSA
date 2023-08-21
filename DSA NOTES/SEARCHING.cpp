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

//binary search recursive: 


#include <bits/stdc++.h>

using namespace std;

int binarysearch(int arr[],int x, int low,int high) {
    if(low>high) return -1;
    while (low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]==x ) 
            return mid;
        else if(arr[mid]<x) {
            return binarysearch(arr,mid+1,high,x);
        }
        else 
            return binarysearch(arr,low,mid-1,x);
    }
}

int shazam(int arr[],int x) {
    if(arr[0]==x) return 0;
    int i=1;
    while (arr[i]<=x) {
        i=i*2;
        if(arr[i]==x) return i;
        if(arr[i]>x) return -1;
    }
    return binarysearch(arr,x,i/2+1,i-1);
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
    int result = shazam(arr,x);
    
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}

//finding median of two sorted arrays: 

#include <bits/stdc++.h>
using namespace std;

double athi(int a1[], int a2[], int n1, int n2) {
    if (n1 > n2) {
        return athi(a2, a1, n2, n1); // Ensure n1 <= n2 for simplicity
    }
    
    int begin1 = 0, end1 = n1;
    
    while (begin1 <= end1) {
        int i1 = (begin1 + end1) / 2;
        int i2 = (n1 + n2 + 1) / 2 - i1;

        int max1 = (i1 == 0) ? INT_MIN : a1[i1 - 1];
        int min1 = (i1 == n1) ? INT_MAX : a1[i1];
        
        int max2 = (i2 == 0) ? INT_MIN : a2[i2 - 1];
        int min2 = (i2 == n2) ? INT_MAX : a2[i2];
        
        if (max1 <= min2 && max2 <= min1) {
            if ((n1 + n2) % 2 == 0) {
                return (double)(max(max1, max2) + min(min1, min2)) / 2;
            } else {
                return (double)max(max1, max2);
            }
        } else if (max1 > min2) {
            end1 = i1 - 1;
        } else {
            begin1 = i1 + 1;
        }
    }
    
    throw runtime_error("Input arrays are not sorted.");
}

int main() {
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int a1[n1];
    cout << "Enter elements of the first array in sorted order: ";
    for (int i = 0; i < n1; ++i) {
        cin >> a1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n2;
    int a2[n2];
    cout << "Enter elements of the second array in sorted order: ";
    for (int i = 0; i < n2; ++i) {
        cin >> a2[i];
    }

    double median = athi(a1, a2, n1, n2);
    cout << "Median of the two arrays is: " << median << endl;

    return 0;
}

//majority of the element in the array: 

#include<bits/stdc++.h> 

using namespace std;

int shazam(int arr[], int n) {
    int res = 0, count = 1;  // Initialize variables

    for (int i = 1; i < n; i++) {
        if (arr[res] == arr[i]) {
            count++;
        } else {
            count--;  // Decrease count when elements are different
        }
        if (count == 0) {
            res = i;
            count = 1;  // Reset count
        }
    }

    int cont = 0;  // Declare 'cont' variable
    for (int i = 0; i < n; i++) {
        if (arr[res] == arr[i]) {
            cont++;  // Increment 'cont'
        }
    }

    if (cont <= n / 2) {  // Compare 'cont' instead of 'count'
        res = -1;
    }
    return res;
}

int main() {
    int arr[] = {2, 2, 3, 4, 2, 2, 6};  // Sample array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    int result = shazam(arr, n);  // Call shazam function

    if (result != -1) {
        cout << "The majority element is: " << arr[result] << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
  















