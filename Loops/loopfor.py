import random

siblings = ["Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"]

for index, sib in enumerate(siblings):
    num = 0
    num += 1                            #listing names
    print(f"{index+1}. {sib}")



for x in range(10, 20, 2): #starting number, stop number, counting by
    print(x)



num = random.randint(1,11)
for x in range(1, 11):
    if x == num:
        print("Goose!") #Duck duck goose
        break
    else:
        print("Duck!")

    