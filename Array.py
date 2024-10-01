#Copyright 2024 Mitchell E Wise 
#SPDX-License-Identifier: Apache-20         


x = ["walk","bike","ebike","bus","car"]
while True:
    y = input("Enter a,b,c,d,e, to get a mode of transport.\n")
    if y == "a":
        y = x[0]
    elif y == "b":
        y = x[1]
    elif y == "c":
        y = x[2]
    elif y == "d":
        y = x[3]
    elif y == "e":
        y = x[4]
    elif y == "x":
        break
    else:
        print("Enter a,b,c,d,e only.")
        continue
    print(f"you picked {y}.")

