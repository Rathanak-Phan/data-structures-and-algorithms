n = int(input("Enter n : "))

for i in range(n):
    for j in range(n):
        for k in range(n):
            print(i, j , k)


# Explanation
# 3 nested loops
# Each runs n times
# Total operations = n × n × n = n³
# Time Complexity: O(n³)
# Space Complexity: O(1)