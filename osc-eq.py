import re

# eq1 para expresiones ax+b=c
def eq1(equ):

	ret=0
	signo=1
	a,c=re.split("=",equ)
	if re.search("\-",a):
		signo=-1
		a,b=re.split("x\-",a)
	else:
		a,b=re.split("x\+",a)
	fa=float(a)
	fb=float(b)*signo
	fc=float(c)
	print("a: "+str(fa))
	print("b: "+str(fb))
	print("c: "+str(fc))
	ret=(fc-fb)/fa
	return ret


exp="4x-8=0"
x=0
print("Eq:"+exp)
x=eq1(exp)
print("x = "+str(x))
