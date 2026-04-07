def find_outliners() :
    sum = 0
    for i in list :
        sum += i
    avg = sum/len(list)

    over = []

    for i in list :
        if i > avg :
            over.append(i)

    return over

list = []

for i in range(5) :
    t = int(input("판매량 입력 : "))
    list.append(t)

print("이상치 판매량 :",find_outliners())
