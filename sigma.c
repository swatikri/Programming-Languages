//
//  sigma.c
//
//
//  Created by swati krishnan on 11/20/15.
//
//

#include <stdio.h>

int sigma(int *k, int low, int high, int expr());
int thunk();
int thunk2();
int thunk3();
int i=0;
int j=0;
int k=0;


int main() {
    
    printf("%d\n",sigma(&i,0,4,thunk));
    return 0;
}

int thunk() {
    return i*sigma(&j,0,4,thunk2);
}

int thunk2() {
    return (i+j)*sigma(&k,0,4,thunk3);;
}

int thunk3() {
    return ((j*k)-i);
}

int sigma(int *m, int low, int high, int expr()) {
    int sum = 0;
    for (*m=low; *m<=high; (*m)++) {
        sum = sum + expr();
    }
    return sum;
}