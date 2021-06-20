#Alice wrote a sequence of words in CamelCase as a string of letters, , having the following properties:
#It is a concatenation of one or more words consisting of English letters.
#All letters in the first word are lowercase.
#For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.
#Given , print the number of words in  on a new line.

#For example, . There are  words in the string.




def camelcase(s):
    
    i = 0
    #length = len(s)
    l = list(s)
    count = 0
    flag = 0
    while i<len(l):
        #print(i)
        if l[0].islower() and flag==0:
            count+=1
            i+=1
            flag=1
            continue
        if l[i].islower() and flag!=0:
            i+=1
            continue
        if l[i].isupper():
            count+=1
            i+=1


        
    return count

if __name__ == '__main__':
    s = input("Enter string::")
    result = camelcase(s)
    print(result)