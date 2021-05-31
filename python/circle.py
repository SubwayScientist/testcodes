import numpy as np

r = input("Enter circle radius (in m) : ")
r = float(r)
A = np.pi * r**2
print("The area of your circle is : " + str(A) + " m\N{SUPERSCRIPT TWO}\n")

answer = None
while answer not in ("y", "n") :
    answer = input("Do you want to convert this value to cm\N{SUPERSCRIPT TWO} ? [y/n] : ")
    if answer == "y" :
        cm = A * 10000
        print("The area of your circle is : " + str(cm) + " cm\N{SUPERSCRIPT TWO}\n")
    elif answer == "n" :
        print("Thanks, I was getting tired..\n")
    else :
        print("Please enter 'y' or 'n' ")
