def revstr(a):
    b=''
    if len(a)%2==0:
        for i in range(0,len(a),2):
            b += a[i + 1] + a[i]
        a=b
    else:
        c=a[-1]
        for i in range(0,len(a)-1,2):
            b += a[i + 1] + a[i]
        b=b+a[-1]
        a=b
    return b
a=input('enter a string:')
n=revstr(a)
print(n)
