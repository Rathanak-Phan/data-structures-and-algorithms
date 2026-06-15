# DSA Learning Reflection

## Date: 2026-06-15

## Topic Studied: Algorithms basic

---

## Concepts Learned:

- Maximum value in array
- Minimum value in array
- Count even  number
- Reverse array

---

## Problems Solved:

### 1. Problem Name:

- Link:
- Difficulty: Easy / Medium / Hard

**My Approach:**

<!-- Explain your thinking -->

**Code:**

```cpp
    #include <iostream>
    using namespace std;

    int findMax(int arr[], int n){
        int max = arr[0];

        for (int  i = 0l i < n; i++){
            if (max < arr[i]){
                max = arr[i];
            }
        }

        return max;
    }

    int main(){
        int array[10] = {1, 2, 4, 6, 7, 8, 11, 13, 5, 1};

        cout <<"Maximum number is : "<<findMax(array, n);

    }

```
