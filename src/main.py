'''
Author: Amar Campbell- 2501977
Data: 27/01/2026
Description: Worksheet 2 Question 1
'''

sales_per_week=[]
total_sales=0.00

for i  in range (7):
    sales_per_week.append(float(input(f"Enter the sales number for day {i+1}: ")))
    total_sales+=sales_per_week[i]
    
    

print(f"This is your total sales for the week ${total_sales}\n")
