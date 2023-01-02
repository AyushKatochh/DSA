#include <iostream>
#include<cmath>
using namespace std;


int search(int arr[], int n, int x) {
    for(int i =0; i<n; i++) {
    if(arr[i] == x) {
        return i;
    }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4}; int x = 2;
    cout<<search(arr,4,x)<<endl;

    return 0;
}
