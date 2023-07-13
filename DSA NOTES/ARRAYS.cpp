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

