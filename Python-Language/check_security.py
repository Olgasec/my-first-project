def check_security():
    users_database = []
    print("--- CyberSecurity Audit Tool v1.0 ---")
    
    while True:
        name = input("\nEnter Username (or 'exit' to finish): ")
        if name.lower() == 'exit':
            break
            
        password = input(f"Enter password for {name}: ")
        
        # Έλεγχος ασφάλειας (Logic)
        is_long = len(password) >= 8
        has_number = any(char.isdigit() for char in password)
        has_special = any(char in "!@#$%^&*" for char in password)
        
        status = "Strong" if (is_long and has_number and has_special) else "Weak"
        
        # Αποθήκευση σε Λεξικό (Dictionary)
        user_data = {
            "username": name,
            "pwd_length": len(password),
            "safety": status
        }
        users_database.append(user_data)
        print(f"User {name} added to audit list.")

    print("\n--- Final Audit Report ---")
    for user in users_database:
        print(f"User: {user['username']} | Security: {user['safety']}")

check_security()
