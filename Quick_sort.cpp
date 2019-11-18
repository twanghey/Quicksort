//
//  main.cpp
//  test
//
//  Created by TonyW. on 2019/11/15.
//  Copyright © 2019 TonyW. All rights reserved.
//

#include <iostream>

using namespace std;

void sort(int a[], int left, int right);
void swap(int a[], int i, int j);

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[] = {5,2,3,1,4,0,8};
    sort(a, 0, 6);
    for(int i=0; i<7; i++){
        cout<<a[i];
    } cout<<endl;
    return 0;
}

void sort(int a[], int left, int right){
    int i, j, povit;
    if(left<right){
        i=left; j=right;
        povit = a[(right+left)/2];
        while(1){
            while(a[i]<povit) i++;
            while(a[j]>povit) j--;
            if(i>=j) break;
            swap(a, i, j);
            i++;j--;
        }
        sort(a, left, i-1);
        sort(a, i+1, right);
    }
    
}

void swap(int a[], int i, int j){
    int c = a[i];
    a[i] = a[j];
    a[j] = c;
}
