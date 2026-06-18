n = int(input("Enter n : "))

i = 1
while( i < n ):
    i = i * 2

# Explanation
# i doubles each time: 1 → 2 → 4 → 8 → ...
# Stops when i ≥ n
# Number of steps = log(n)
# Time Complexity: O(log n)
# Space Complexity: O(1)