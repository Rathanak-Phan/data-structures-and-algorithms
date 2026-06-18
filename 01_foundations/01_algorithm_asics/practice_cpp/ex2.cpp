// Exercise 2: Count even number
#include <iostream>
using namespace std;

int countEven(int array[], int n){
    int count = 0;

    for (int i = 0; i < n; i++){
        if (array[i] % 2 == 0){
            count++;
        }
    }

    return count;
}

int main(){
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Even number = "<<countEven(array, 10);

    return 0;
}