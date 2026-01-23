def converter():
    print("\n--- CURRENCY CONVERTER ---")
    euro = float(input("Enter amount in Euro (€): "))
    
    print("Convert to:")
    print("1. USD (Dollar)")
    print("2. GBP (Pound)")
    print("3. JPY (Yen)")
    
    choice = input("Select currency: ")
    
    if choice == "1":
        print(f"{euro}€ = {euro * 1.09:.2f}$")
    elif choice == "2":
        print(f"{euro}€ = {euro * 0.86:.2f}£")
    elif choice == "3":
        print(f"{euro}€ = {euro * 161.50:.2f}¥")
    else:
        print("Invalid selection.")

converter()
