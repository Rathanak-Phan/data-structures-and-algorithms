// Exercise 3: Sum of array
#include <iostream>
using namespace std;

int main(){
    int array[13] = {1, 2, 3, 4, 6, 8, 12, 13, 13, 0, 11, 17, 11};

    int sum = 0;
    for (int i = 0; i < 13; i++){
        sum += array[i];
    }

    cout <<"Sum = "<< sum<<endl;
    return 0;
}