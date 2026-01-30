def bank_system():
accounts = {"Admin": 1000.0}  # Αρχικά δεδομένα
    history = []

    while True:
        print("\n=== CENTRAL BANKING SYSTEM ===")
        print("1. Create Account\n2. Deposit\n3. Withdraw\n4. Transaction History\n5. Exit")
        choice = input("Select option: ")

        if choice == "1":
            name = input("Enter new account name: ")
            accounts[name] = 0.0
            print(f"Account for {name} created!")
        
        elif choice == "2":
            name = input("Account name: ")
            if name in accounts:
                amount = float(input("Amount to deposit: "))
                accounts[name] += amount
                history.append(f"{name} deposited ${amount}")
            else:
                print("Account not found!")

        elif choice == "3":
            name = input("Account name: ")
            if name in accounts:
                amount = float(input("Amount to withdraw: "))
                if amount <= accounts[name]:
                    accounts[name] -= amount
                    history.append(f"{name} withdrew ${amount}")
                else:
                    print("Insufficient balance!")
            else:
                print("Account not found!")

        elif choice == "4":
            print("\n--- Recent Transactions ---")
            for record in history[-5:]: # Δείχνει τις τελευταίες 5
                print(record)

        elif choice == "5":
            break

bank_system()
