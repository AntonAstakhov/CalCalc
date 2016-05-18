def main():
    # инициализировать словарь
    def calSearch(food):

    # разобраться с доступом к полям словаря
    while True:
        str user_input = input()
        while user_input == "@calories ":
            print "Enter your food..."
            foodTable = {}
            str food = input ('Enter food: ')
            foodTable = calSearch(food)
            if foodTable.len() == 1:
                print "%s contaitns %d calories" % (foodTable[0].product, foodTable[0].calories)
            elif foodTable.len() > 1:
                for i in range(0, foodTable.len()):
                    print "%d. %s" % (i+1, foodTable[i].product)
                int requestID = input()
                print "%s contaitns %d calories" % (foodTable[requestID-1].product, foodTable[requestID-1].calories)
