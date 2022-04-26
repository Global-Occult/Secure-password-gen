all_symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
import random
import gc

def password_gen():
	return ''.join(random.choice(all_symbols)for i in range(15))
	
password = password_gen()

	
print(f"Secure password - {password}")

#deletes the variables
del password
del all_symbols

#clears the memory
gc.collect()
	
