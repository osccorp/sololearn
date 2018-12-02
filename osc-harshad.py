# import re

def sumdigit(num):
	ret = 0
	go = num.isalnum()
	if go:
		i=len(num)-1
		while (i>=0):
			ret+=int(num[i])
			i-=1
	return ret
	
def harshad(num,sumdigit):
	ret=False
	if num%sumdigit==0 : ret=True
	return ret
	
#nstr=input("Digite un numero entero: ")

nstr="12"
num=0
snum=0
for i in range(11,110) :
    nstr=str(i)
    num=0
    snum=0
    if nstr.isalnum():
        num=int(nstr)
        snum=sumdigit(nstr)
        res=harshad(num,snum)
        if res : print(nstr+" Number is a Harshad ")
        else : print(nstr+" Number is not a Harshad ")
