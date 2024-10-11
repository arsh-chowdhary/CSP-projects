import random

siblings = ["Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xaviar", "Jake"]

num = 0
while num < len(siblings):
    print(num+1, siblings[num])     #lists all sibling names
    num += 1

rand = random.randint(1, 10)
while num < rand:
    print("Duck")       #duck duck go
    num += 1
print("Goose!")