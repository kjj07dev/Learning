pi = 3.14

def circle_area(r) :
    return r**2 * pi

def circle_length(r) :
    return 2*pi*r

while True :
    r = int(input("원의 반지름을 입력하세요 >> "))

    if r < 1 :
        break

    print("반지름이",r, "인 원의 넓이는",round(circle_area(r),1),"이고,")
    print("둘레의 길이는",round(circle_length(r),1),"입니다.")
