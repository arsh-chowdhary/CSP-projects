import datetime

now = datetime.datetime.now().hour
if now <= 12:
    print("Good Morning!")
elif now <= 18:
    print("Good Aftenoon!")
elif now <= 20:
    print("Good Evening!")
else:
    print("Good Night!")