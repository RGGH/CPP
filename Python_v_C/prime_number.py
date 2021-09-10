# -*- coding: utf-8 -*-
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#|r|e|d|a|n|d|g|r|e|e|n|.|c|o|.|u|k|
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

def check_prime(num):
    
    for j in range (2, (num)):

        if num %j ==0:
            return 1

# main 
for num in range (2,101):
    result = check_prime(num)
    if result == 1:
        print(f"{num} is not a prime number")
    else:
        print(f"{num} is a prime number")
