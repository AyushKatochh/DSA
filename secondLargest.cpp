#include<iostream>
#include<cmath>
using namespace std;

int getLargest(int a[], int n) {
    int largest =0;
    for(int i =1; i<n; i++) {
        if(a[i]>a[largest]) {
            largest = i;
        }
    }
    return largest;
}

int secondLargest(int a[], int n) {
    int res = -1;
    int largest = getLargest(a,n);
    for(int i = 0; i<n; i++) {
        if(a[i] != a[largest]) {
            if(res == -1)
              res = i;
            else if(a[i]>a[res])
              res = i;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >>n;
    
    int a[n];
    for(int i=0; i<n; i++) {
       cin>> a[i];    
    }
    int pos = secondLargest(a,n);
    
    cout<< a[pos];

    return 0;
}
