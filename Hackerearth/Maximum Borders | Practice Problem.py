size = int(input())
table = []
max_black = []
count_black = 0
com = []

for i in range(size):
    user_table = list(map(int, input().split(" ")))
    # print(user_table)
    for row in range(user_table[0]):
        user_pattern = input()
        for p in user_pattern:
            if p == "#":
                count_black += 1
        com.append(count_black)
        count_black = 0
    res = max(com)
    max_black.append(res)
    com.clear()

for ans in max_black:
    print(ans)
