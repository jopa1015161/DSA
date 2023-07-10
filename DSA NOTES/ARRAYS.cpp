//OPERATORS ON  ARRAY : 

//searching(unsorted array): 
//time complexity is: O(n)  and if the array is sorted then the T.C is log(n)

#include <iostream>

using namespace std;

int search(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) // Use '==' for comparison instead of '='
            return i;  // Return the index of the found element, not just 1
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n]; // Allocate dynamic memory for the array

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the number you want to find: ";
    cin >> x;

    int result = search(arr, n, x);
    if(result == -1)
        cout << "Number not found in the array." << endl;
    else
        cout << "Number found at index " << result << endl;

    delete[] arr; // Deallocate the dynamically allocated memory

    return 0;
}
-----------------------------------------------------------------------------------

