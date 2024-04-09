#• How will you randomizes the items of a list in place
import random
l=[10,50,30,5,21]
print("Before Randomize List".center(50,"*"))
print(l)
random.shuffle(l)
print("After Randomize List".center(50,"*"))
print(l)
