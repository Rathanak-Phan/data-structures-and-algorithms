n = int(input("Enter n : "))

for i in range(n):
    for j in range(i):
        print(i, j)

# Explanation
# Outer loop runs n times
# Inner loop runs i times
# Total operations = 0 + 1 + 2 + ... + (n-1)
# Sum ≈ n(n-1)/2 → O(n²)
# Space Complexity: O(1)