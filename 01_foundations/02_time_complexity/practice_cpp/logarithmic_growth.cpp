#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter value of n: ";cin>>n;

    int i = 1;
    while(i < n){
        i = i * 2;
    }


    return 0;
}

/*
    Question:
        - How many times does loop run?
        => Loop run is n / 2 time
        - What pattern is this?
        => This arimetic sequence 2, 4, 6, ...

*/ 