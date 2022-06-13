def string_test(s):
    uc,lc=0,0
    #lc=0
    for c in s:
        if c.isupper():
            uc=uc+1
        elif c.islower():
            lc=lc+1
        else:
           pass
    print ("Original String is: ", s)
    print ("No. of Upper case letters: ",uc)
    print ("No. of Lower case letters : ",lc)
s=input("Enter a String: ")
string_test(s)