// SELECTION SORT: select the minimum and swap.
//selection sort code: 
//Time complexity : n*2.

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
    cout << "the sorted array is: ";
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------

//BUBBLE SORT: push the max to the last by doing adjacent swaps.

//bubble sort code: 
// Time complexity is: n*2.

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n) {
    for(int i=n-1;i>=1;i--) {
        for(int j=0;j<i-1;j++) {
            if(arr[j]>arr[j+1]) swap(arr[j+1],arr[j]);
        }
    }
}



int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of your array: ";
    
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    bubble_sort(arr,n);
    cout << "sorted array: ";
    
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------
//the best time complexity for bubble sort is O(n)
// codee: 

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n) {
    for(int i=n-1;i>=1;i--) {
        int didswap = 0;            // the difference is we added a new variable to check inside the for loop
        for(int j=0;j<i-1;j++) {
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                didswap = 1;           //if the swap happens didswap will turn to 1

            } 
        }
        if(didswap == 0) {
            break;                      //if swap doesn't happen it breaks from the code due to this the time complexity increases
        }
    }
}



int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of your array: ";
    
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    bubble_sort(arr,n);
    cout << "sorted array: ";
    
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------

// INSERTION SORT: takes an element and places it in the correct order.


