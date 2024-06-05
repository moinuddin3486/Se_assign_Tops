#• When will the else part of try-except-else be executed?
def divide(x, y): 
	try:
		result = x / y 
	except : 
		print(" you are dividing by zero ") 
	else:
		print(" your answer is :", result) 

divide(10,5)
divide(10,0)
