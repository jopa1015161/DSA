#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[],int n) {
    for (int i=0;i<=n-2;i++) {   //swapping can be done from 0 to n-2 cuz last digit cannot be  swapped
        int mini = i;
        
        for (int j=i; j<=n-1;j++) {   //checking the minimum digit from the i to n-1
            if(arr[j] < arr[mini]) mini = j;  
        }
        swap(arr[mini],arr[i]);
    }
    
}

int main()
{
    int n;
    cout << "enter the size of your array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of  yur array: ";
    for (int i=0;i<n;i++) cin >> arr[i];
    selection_sort(arr,n);
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
