#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter value n: ";cin>>n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 10; j++){
            cout <<i << " "<< j << endl;
        }
    }


    return 0;
}

/*
    Think:
        - Inner loop is constant (10)
        => When linear loop (10) => meaning n x 10 operation
        - What happens to complexity?
        => Tim complexity O(n) 

*/ 