

#include <iostream>
#include<cmath>
using namespace std;

int getLargest(int arr[], int n) {
    for(int i =0; i<n; ++i) {
        bool flag = true;
        for(int j=i; j<n; ++j) {
            if(arr[j]>arr[i]) {
             flag = false;
                break;
            }
        }
        if(flag == true) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,6,5}, n=5;
    cout<<getLargest(arr, n)<<endl;
    return 0;
}
