//
//  bubble_sort.cpp
//  test
//
//  Created by TonyW. on 2019/11/18.
//  Copyright © 2019 TonyW. All rights reserved.
//

#include <iostream>

using namespace std;

void sort(int a[], int lenth, bool up);
void swap(int a[], int i, int j);

int main(){
    int a[7] = {7,6,5,4,3,2,1};
    sort(a, 7, true);
    for(int i=0; i<7; i++){
        cout<<a[i];
    } cout<<endl;
    return 0;
}

void sort(int a[], int lenth, bool l2h){
    if( l2h == true ){
        for(int j=0; j<lenth-1; j++){
            for(int i=0; i<lenth-1-j; i++){
                if(a[i]>a[i+1]){
                    swap(a[i], a[i+1]);
                }
            }
        }
    }
}

void swap(int i, int j){
    int c = i;
    i = j;
    j = c;
}
