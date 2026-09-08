prod1 = int(input("상품1 가격 = "))
prod2 = int(input("상품2 가격 = "))
prod3 = int(input("상품3 가격 = "))

prods = [prod1, prod2, prod3]
e_prods = [prod1 * 1.1, prod2 * 1.1, prod3 * 1.1]
c_prods = [prod1 * 0.85, prod2 * 0.85, prod3 * 0.85]

print("가격 리스트 = ", prods)
print("(가격+10%) 리스트 = ", e_prods)
print("(가격-15%) 리스트 = ", c_prods)
