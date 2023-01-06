#include <iostream>
#include<cmath>
using namespace std;

int remDups(int arr[], int n) {
    int res = 1;
    for(int i = 1; i< n; i++) {
        if(arr[res - 1] != arr[i]) {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[] = {100, 100, 102}, n=3;
    cout<<"Before Removal"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    n = remDups(arr, n);
    cout<<endl;
    cout<<"After Removal"<<endl;
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
 
 
    return 0;
}
