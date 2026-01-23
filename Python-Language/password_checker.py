def check_password_strength(password):
    strength = 0
    if len(password) >= 8: strength += 1
    if any(char.isdigit() for char in password): strength += 1
    if any(char.isupper() for char in password): strength += 1
    if any(char in "!@#$%^&*" for char in password): strength += 1
    
    if strength == 4: return "Very Strong"
    elif strength == 3: return "Strong"
    elif strength == 2: return "Moderate"
    else: return "Weak"

pwd = input("Enter a password to check: ")
print(f"Password Strength: {check_password_strength(pwd)}")
