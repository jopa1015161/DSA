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
------------------------------------------------------------------------------------------------------

//maximum and minimum value of any array using linear search: 

#include <bits/stdc++.h>

using namespace std;


void athi(int arr[],int n,int &mini,int &maxi) {
    
    maxi=max(arr[0],arr[1]);
    mini=min(arr[0],arr[1]);
    
    for(int i=2;i<n;i++){
        if(arr[i]>maxi) maxi=arr[i];
        else if(arr[i]<mini) mini=arr[i];
        
    }
}

int main () {
    int n;
    cout << "enter the size of your function: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of yor array: ";
    for (int i=0; i<n;i++) {
        cin >> arr[i];
    }
    int i;
    int mini,maxi;
    athi(arr,n,mini,maxi);
    cout << "minimum value: "<< mini <<endl<<  "maximum value: " << maxi;
    
    return 0;
    
}
