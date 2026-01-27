'''
Author: Amar Campbell- 2501977
Data: 27/01/2026
Description: Worksheet 2 Question 2
'''

correct_password= "secure123"
password=""

while correct_password!=password:
    password= input("Please enter your password:\n")
    
    if (password==correct_password):
        print("Access Granted\n")
    else:
        print("Access Denied\n")



        
        
        
