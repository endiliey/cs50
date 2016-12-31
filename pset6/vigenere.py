import cs50
import sys

def main():
    if len(sys.argv) != 2:
        print("You should provide a cmd line arguments!")
        exit(1)
    
    if sys.argv[1].isalpha() == False:
        print("You should provide valid keyword!")
        exit(1)
        
    message = cs50.get_string()
    translated = []
    keyIndex = 0
    keylength = len(sys.argv[1])
    
    for symbol in message:
        if symbol.isalpha():
            key = ord(sys.argv[1][keyIndex % keylength].lower()) - 97
            keyIndex += 1
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