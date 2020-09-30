from cryptography.fernet import Fernet

def write_key():
    """
    Generates a key and save it into a file
    """
    key = Fernet.generate_key()
    with open("key.key", "wb") as key_file:
        key_file.write(key)
        
def load_key():
    """
    Loads the key from the current directory named `key.key`
    """
    return open("key.key", "rb").read()
    
def encrypt(encrypt_message):
    """
    Generates the encryption
    """
    # generate and write a new key
    write_key()

    # load the previously generated key
    key = load_key()

    message = encrypt_message.encode()

    # initialize the Fernet class
    f = Fernet(key)

    # encrypt the message
    encrypted = f.encrypt(message)

    # print how it looks
    print(encrypted)
    
    return encrypted

def decrypt(decrypt_message):
    
     # load the previously generated key
    key = load_key()
    
    # initialize the Fernet class
    f = Fernet(key)
    
    decrypted_encrypted = f.decrypt(decrypt_message)
    print(decrypted_encrypted)
    
password = input("Enter your password: ") 

print("Encrypted Password: ")
encrypted_message = encrypt(password)
print("\nDecrypted Password: ")
decrypt(encrypted_message)