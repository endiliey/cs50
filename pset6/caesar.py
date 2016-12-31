import cs50
import sys

def main():
    if len(sys.argv) != 2:
        print("You should provide cmd line arguments!")
        exit(1)
    
    key = int(sys.argv[1])
    translated = []
    message = cs50.get_string()
    for symbol in message:
        if symbol.isalpha():
            translated.append(caesar(symbol, key))
        else:
            translated.append(symbol)
                
    print("".join(translated))
    exit(0)

def caesar(char, key):
    if char.isupper():
        return chr(((ord(char) - 65 + key) % 26) + 65)
    else:
        return chr(((ord(char) - 97 + key) % 26) + 97)
        
if __name__ == "__main__":
    main()