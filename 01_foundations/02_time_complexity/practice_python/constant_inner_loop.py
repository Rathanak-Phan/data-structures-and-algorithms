n = int(input("Enter n : "))

for i in range(n):
    for j in range(10):
        print(i , j)

# Explanation
# Outer loop runs n times
# Inner loop runs 10 times (constant)
# Total operations = 10n
# Ignore constant → O(n)
# Space Complexity: O(1)