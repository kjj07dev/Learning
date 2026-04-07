kor = int(input("국어 점수 입력 : "))
math = int(input("수학 점수 입력 : "))
eng = int(input("국어 점수 입력 : "))
arr = [kor, math, eng]
print(arr)

print("국어 :", str(arr[0]) + "점, 수학 :", str(arr[1]) + "점, 영어 :", str(arr[2]))

total = arr[0] + arr[1] + arr[2]
avg = total / 3

print("총점 = ", total)
print("평균 = ", avg)
print(arr[:2])
