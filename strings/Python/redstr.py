def superReducedString(s):
    length = len(s)
    l = list(s)

    i=0
    while(1):
        if len(l)-1 > i:
            #print(l)
            if l[i]==l[i+1]:
                l.pop(i)
                l.pop(i)
                #print(len(l))
                continue
            else:
                i+=1
        else:
            break
    i=0
    while(1):
        if len(l)-1 > i:
            #print(l)
            if l[i]==l[i+1]:
                l.pop(i)
                l.pop(i)
                #print(len(l))
                continue
            else:
                i+=1
        else:
            break
        
    if len(l)==0:
        s = "Empty String"
        return s

    s = "".join(l)
    #print(length)
    return s


if __name__ == '__main__':
    s = input("Enter string:")
    result = superReducedString(s)
    print("Reduced string is :: "+result)
