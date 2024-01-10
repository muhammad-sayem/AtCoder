n = int(input())
arr = list(map(int, input().split()))
dict = {}

for i in arr:
    if i in dict:
        dict[i] += 1
    else:
        dict[i] = 1


ans = 0
for key, value in dict.items():
    if value > key:
        ans += (value - key)
    elif value < key:
        ans += value

print(ans)
        
# for key, value in dict.items():
#     print(key, "---->", value)