#include <bits/stdc++.h>
using namespace std;

long long n1,n2;

void init(){
    n1 = 1;
    n2 = 0;
}

int main(){
    unsigned short a;
    short b;
    unsigned int c;
    int d = 0,i;
    unsigned long long e;
    long long f;
    init();
    for(i=1;a>=n2;i++){
        a = n1+n2;
        n2 = n1;
        n1 = a;
    }
    cout << "unsigned short: " << i << endl;
    init();
    for(i=1;b>=n2;i++){
        b = n1+n2;
        n2 = n1;
        n1 = b;
    }
    cout << "short: " << i << endl;
    init();
    for(i=1;c>=n2;i++){
        c = n1+n2;
        n2 = n1;
        n1 = c;
    }
    cout << "unsigned int: " << i << endl;
    init();
    for(i=1;d>=n2;i++){
        d = n1+n2;
        n2 = n1;
        n1 = d;
    }
    cout << "int: " << i << endl;
    init();
    for(i=1;e>=n2;i++){
        e = n1+n2;
        n2 = n1;
        n1 = e;
    }
    cout << "unsigned long long: " << i << endl;
    init();
    for(i=1;f>=n2;i++){
        f = n1+n2;
        n2 = n1;
        n1 = f;
    }
    cout << "long long: " << i << endl;
}
