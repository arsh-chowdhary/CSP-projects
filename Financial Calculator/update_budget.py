def user_input(type):
    return(float(input(f"How much is your {type}?: ")))

print("This is going to calculate your budget for the month")

income = user_input("income")
rent = user_input("rent")
utilities = user_input("utilities")
groceries = user_input("groceries")
transportation = user_input("transportation")

expenses = rent + utilities + groceries + transportation
savings = float(income) *.2
total = income - expenses - savings

def percent(type, amount):
    per = int(amount / income *100)
    return f"Your {type} is {per}% of your income"

print("Your income is", income)
print("Your expenses are", expenses)
print("Your savings are", savings)
print("Your total left to spend is", total)

print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transporation", transportation))
print(percent("expenses", expenses))