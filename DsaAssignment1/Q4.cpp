#include <bits/stdc++.h>
using namespace std;
void reverse(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    for(int i=0,j=n-1;i<(n/2);i++,j--){
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void multi(){
    int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int b[3][2] = { {7, 8}, {9, 10}, {11, 12} };
    int c[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Final Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
void transpose(){
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int a[r][c], b[c][r];

    cout << "Enter elements of matrix a: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }

    cout << "Original matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose matrix:" << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    reverse();
    multi();
    transpose();
    return 0;
}
