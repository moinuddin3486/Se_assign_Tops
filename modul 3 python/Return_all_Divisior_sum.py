#• Write a Python program to returns sum of all divisors of a number


def Sum(N):
    sum=0
    for i in range(1,N):
        if N%i==0:
            sum+=i
    return sum
N=int(input("Enter N number : "))
print(Sum(N))
