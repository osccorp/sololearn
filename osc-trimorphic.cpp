#include <string.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>

#define SZ 200

using namespace std;

class Trimorphic{
	private: 
		double num;
		char str[SZ];
		
	public: 
	char *toString(){
		char *ts=str;
		return ts;
	}
	
	Trimorphic(){
	    strcpy(str,"");
		setNum(0);
	}
	
	Trimorphic(double n){
		strcpy(str,"");
		setNum(n);
	}
	
	void setNum(double n){
		num=n;
	}
	
	double getDigits(double x){
	    double ret=0;
	    ret=floor(log10(x))+1;
	    return ret;
	}
	
	void doTrimorphic(double x){
		double n=x;
		double qb=pow(n,3);
		double dig=getDigits(n);
		double tr=fmod((qb-n),pow(10,dig));
		char sqb[SZ]="";
		sprintf(sqb,"\n\r%0.2f ^ 3 = %0.2f\t",n,qb);
		if(tr==0)sprintf(sqb,"%sis trimorphic",sqb);
		sprintf(str,"%s",sqb);
	}
};

int main() {
	Trimorphic sp;
	double i=0;

	cout<<"Hello!!! \n"<<endl;

	for(i=1;i<150;i++){
	    sp.doTrimorphic(i);
	    cout<<sp.toString();
	}
	
	
	return 0;
}
