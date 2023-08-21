//printing matrix: 

#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &arr) {
    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[i].size();j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int m =3,n=2;
    vector<vector<int>> arr;
    for(int i=0;i<m;i++) {
        vector<int> v;
        for(int j=0;j<n;j++) {
            v.push_back(i);
        }
        arr.push_back(v);
    }
    print(arr);
    
    return 0;
}

//passing 2D array as an argument using array of vectors: 


#include <bits/stdc++.h>

using namespace std;

void print(vector<vector<int>> &arr) {
    for (int i =0;i<arr.size();i++) {
        for(int j=0;j<arr[i].size();j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m=3,n=2;
    vector<vector<int>> arr;
    for(int i=0;i<m;i++) {
        vector<int> v;
        for(int j=0;j<n;j++) {
            v.push_back(i);
        }
        arr.push_back(v);
    }
    print(arr);

    return 0;
}

//printing transpode of a matrix: 


#include <bits/stdc++.h>

using namespace std;

const int n=4;
void transpose(int mat[n][n]) {
    
    for(int i =0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            swap(mat[i][j],mat[j][i]);
        }
    }
    
}
int main(){
    
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    transpose(mat);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

}


//spiral matrix algorithm: 

#include <bits/stdc++.h>

using namespace std;

void shazam(int arr[][4], int r, int c) {  // Corrected array parameter declaration
    int top = 0, right = c - 1, bottom = r - 1, left = 0;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;  // Increment top after the row traversal

        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;  // Decrement right after the column traversal

        if (top <= bottom) {  // Check if top is still less than or equal to bottom
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;  // Decrement bottom after the row traversal
        }

        if (left <= right) {  // Check if left is still less than or equal to right
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;  // Increment left after the column traversal
        }
    }
}

int main() {
    int arr[][4] = {  // Corrected array declaration and size specification
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}  // Removed unnecessary semicolon
    };
    shazam(arr, 4, 4);  // The function does not return anything, so no need to assign to 'result'
    return 0;
}


//search in row-wise and column wise : 

#include <bits/stdc++.h>

using namespace std;

pair<int, int> shazam(int arr[][4], int r, int c, int x) {  // Changed return type to pair
    for (int i = 0; i < r; i++) {
        for (int j = c - 1; j >= 0; j--) {
            if (x == arr[i][j]) {
                return make_pair(i, j);  // Return a pair of indices
            } else if (x > arr[i][j]) {
                continue;  // Skip to the next iteration
            } else {
                if (j - 1 >= 0 && x == arr[i][j - 1]) {  // Check boundary before accessing arr[i][j - 1]
                    return make_pair(i, j - 1);  // Return a pair of indices
                }
            }
        }
    }
    return make_pair(-1, -1);  // Return an invalid pair if element is not found
}

int main() {
    int arr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    pair<int, int> result = shazam(arr, 4, 4, 7);  // Assign the result to a pair
    if (result.first != -1) {
        cout << "Element found at position: (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}
