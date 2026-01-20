account_balance= 10000

withdrawal = int(input("Enter your withdrawal amount: "))

if withdrawal > account_balance or withdrawal <0:
    print("You do not have sufficient balance to complete this transaction")
else:
    account_balance = account_balance-withdrawal
    print("You withdrawed: " + str(withdrawal))
    print("Your final balance is: " + str(account_balance))
