#제 키보드가 68% 배열이라 1 옆에 esc키가 있습니다.
n = int(input("출력할 구구단 숫자를 입력하세요(2-9) : "))
print("=== 구구단", str(n) + "단 ===")

for i in range(1, 10) :
    print(n, "*", i, "=", n * i)
