
def kthdigit(A,B,K):

    ans = A**B
    res =0
    count = 0
    while (ans>0 and count <K):
        res  = ans%10
        count = count+1
        if (count ==K):
            return res

        ans = ans/10

temp = kthdigit(8,15,12)
print(int(temp))        