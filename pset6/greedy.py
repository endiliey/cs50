import cs50

def main():
    while True:
        print("O hai! How much change is owed?")
        amount = cs50.get_float()
        if amount >= 0:
            break
    
    number_of_coins = 0
    cents = int(round(amount * 100))
    
    number_of_coins += cents // 25
    cents %= 25
    
    number_of_coins += cents // 10
    cents %= 10
    
    number_of_coins += cents // 5
    cents %= 5
    
    number_of_coins += cents
    
    print("{}".format(number_of_coins))
    
if __name__ == "__main__":
    main()