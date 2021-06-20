# coding: utf-8
# Your code here!
#Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher shifts each letter by a number of letters. If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.
#
def encryptCaesar(s, k):
    output = list(s)
    k %= (ord('z') - ord('a') + 1)
     
    for idx, l in enumerate(output):
        if l.isalpha():
            if l.isupper():
                new_char = ord(l)+k
                if new_char > ord('Z'):
                    new_char = new_char - ord('Z') + ord('A') - 1
                output[idx] = chr(new_char)
            else:
                new_char = ord(l)+k
                if new_char > ord('z'):
                    new_char = new_char - ord('z') + ord('a') - 1
                output[idx] = chr(new_char)
    return ''.join(output)
     
     
if __name__ == '__main__':
   n =11
   s = 'middle-Outz'
   k = 2
   print (encryptCaesar(s, k))
