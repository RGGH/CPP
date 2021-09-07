
# +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
# |r|e|d|a|n|d|g|r|e|e|n|.|c|o|.|u|k|
# +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

# Calculate the factorial in Python

num = input("Enter a number \n")

num = int(num)
fact = 1

for i in range(1, num+1):
    fact *= i

print(fact)
