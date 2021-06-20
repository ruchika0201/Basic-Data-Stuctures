n = int(input("Enter n::"))
str = []
length = []
result = []
flag=0
for i in range(n):
    s = input()
    if s.isalpha() or s=='-':
        str.insert(i, s)
        length.insert(i, len(s))

    

#print(str)
#print(length)


for i in str:
    flag = 0
    x=str.index(i)
    m=length[x]
    y=length[x]-1
    #k=0
    #print(x)
    if m%2==0:
 #       print("Div")
        for j in range(0, int(m/2)):
            if str[x][j]==str[x][y] or str[x][j]=='-' or str[x][y]=='-':
                #print("Second pass")
                #k+=1
                y-=1
                continue
            if str[x][j]!=str[x][y]:
                flag=2
                print("Not Possible")
                break
        if flag==2:
            flag=0
            continue
        else:
            flag=0
            x=str.index(i)
            #k=0
            y=length[x]-1
            for k in range(0, int(m/2)):
                if str[x][k]==str[x][y]:
                    y-=1
                    continue
                if str[x][k]=='-':
                    t=list(str[x])
                    t[k]=str[x][y]
                    stri="".join(t)
                    print(stri)
                   # result.append(stri)
                        #print("Heyyyy")
                    break
                if str[x][y]=='-':
                        #print("arey yar")
                    t=list(str[x])
                    t[y]=str[x][k]
                    stri="".join(t)
                    print(stri)
                    #result.append(stri)
                    break
    if m%2!=0:
        #print("Div")
        for j in range(0, int(m/2)):
            if str[x][j]==str[x][y] or str[x][j]=='-' or str[x][y]=='-':
                #print("Second pass")
                #k+=1
                y-=1
                continue
            if str[x][j]!=str[x][y]:
                flag=2
                print("Not Possible")
                break
        if flag==2:
            flag=0
            continue
        else:
            flag=0
            x=str.index(i)
            #k=0
            y=length[x]-1
            for k in range(0, int(m/2)):
                if str[x][k]==str[x][y]:
                    y-=1
                    continue
                if str[x][k]=='-':
                    t=list(str[x])
                    t[k]=str[x][y]
                    stri="".join(t)
                    print(stri)
                    flag=2
                   # result.append(stri)
                        #print("Heyyyy")
                    break
                if str[x][y]=='-':
                        #print("arey yar")
                    t=list(str[x])
                    t[y]=str[x][k]
                    stri="".join(t)
                    print(stri)
                    flag=2
                    #result.append(stri)
                    break

            if k+1 == int((m/2)) and flag!=2:
                    print(str[x])
            
              
                    



