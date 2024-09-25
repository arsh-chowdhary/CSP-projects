def user_input(type, var):
    var = input("How much is your ", type, ": ")
    return(var)

print("This is going to calculate your budget for the month")

income = float(input("How much do you make a month?"))
rent = float(input("How much is your rent?"))
utilities = float(input("How much are your utilities?"))
groceries = float(input("How much are your groceries?"))
transportation = float(input("How much do you spend on transportation?"))

expenses = rent + utilities + groceries + transportation
savings = income * 0.2
total = income - expenses - savings

prent = rent / income *100 
putilities = utilities / income *100
pgroceries = groceries / income *100
ptransportation = transportation / income *100
pexpenses = expenses / transportation *100

print("Your income is", income)
print("Your expenses are", expenses)
print("Your savings are", savings)
print("Your total left to spend is", total)

print("Your rent is %", prent, "of your income")
print("Your utilities are %", putilities, "of your income")
print("Your groceries are %", pgroceries, "of your income")
print("Your transportation is %", ptransportation, "of your income")