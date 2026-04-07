#연습 문제
kor, math, eng = 90, 85, 95
print("국어 =", kor)
print("수학 =", math)
print("영어 =", eng)
total = kor + math + eng
print("합계 =", total)
ave = total / 3
print("합계 =", ave)

#도전 과제
sec = 3675
min = sec // 60
hour = min // 60
print("초(second) 정보 :", sec)
print("결과 :", hour, "시간 ", min % 60, "분", sec % 60, "초")
