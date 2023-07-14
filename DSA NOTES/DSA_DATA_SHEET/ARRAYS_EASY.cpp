//maximum and minimum number from an array using selection sorting:  

#include <bits/stdc++.h>

using namespace std;

void athi(int arr[],int n) {
    for(int i=0;i<=n-2;i++) {
        int mini = i;
        for (int j = i;j<=n-1;j++) {
            if(arr[j]< arr[mini]) mini = j;
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
    cout << "enter the elements of your array: ";
    for(int i=0;i<n;i++) {
        cin>> arr[i];
    }
    athi(arr,n);
    
    cout << endl << "min value: " << arr[0]<< endl;
    cout << "max value: " << arr[n-1] ;

    return 0;
}
