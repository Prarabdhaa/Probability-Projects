
#include <iostream>

extern "C" {
#include <stdlib.h>
#include <time.h>
}
using namespace std;

void q1(int);
void q2(int);

int RandNum(){
	int x;
	x=1 + rand()/((RAND_MAX/6)+1);
	return x;
}

void q1(int a){

int m,d1,d2;
    
    float	flg1=0;
    float	flg2=0;
    float	flg3=0;
    float   flg4=0;
    float	flg5=0;
    float	flg6=0;
	

	for(int i=0; i<a; i++){
	
	m = RandNum();
	
	if(m==1)
		flg1++;
	else if(m==2)
		flg2++;
	else if(m==3)
		flg3++;
	else if(m==4)
		flg4++;
	else if(m==5)
		flg5++;
	else if(m==6)
		flg6++;
	else 
		break;
	}

	float f1=flg1/a, 
	f2=flg2/a,
	f3=flg3/a,
	f4=flg4/a,
	f5=flg5/a,f6=flg6/a;
	
	

	cout<<"Output for "<< a <<"trials:"<<endl;

	cout <<"1:"<<f1<<endl;
	cout <<"2:"<<f2<<endl;
	cout <<"3:"<<f3<<endl;
	cout <<"4:"<<f4<<endl;
	cout <<"5:"<<f5<<endl;
	cout <<"6:"<<f6<<endl;



}

void q2(int b){

float flag1=0,
	      flag2=0;

	      int m;
	
	for(int i=0; i<b;i++){
	
	m = RandNum();
	
	if(m==1)
		flag1++;
	else if(m==2)
		flag1++;
	else if(m==3)
		flag1++;
	else if(m==4)
		flag2++;
	else if(m==5)
		flag2++;
	else if(m==6)
		flag2++;
	
	}
	float m1=flag1/b,
              m2=flag2/b;

	cout<<"Output for "<< b <<"trials:"<<endl;
	cout <<"Output for 1,2,3:"<<m1<<endl;
	cout <<"Output for 4,5,6:"<<m2<<endl;

}

int main(int argc, char *argv[]){
	
	srand((unsigned int)time(NULL));
	
	cout<<"Question1:"<<endl;

	q1();
	q1();
	q1();

	cout<<"-------------------------------------------------";

	
	cout<<"Question 2:"<<endl;

	q2();
	q2();
	
	cout<<"-------------------------------------------------";
	
	cout <<"Question 3:"<<endl;
	int d1,d2;
	float flg2=0;
    float flg3=0;
    float flg4=0;
    float flg5=0;
    float flg6=0;
	float	flg7=0;
    float	flg8=0;
    float	flg9=0;
    float   flg10=0;
    float	flg11=0;
    float	flg12=0;
	
   for(int i=0; i<10000;i++){
	
	d1= RandNum();
	d2= RandNum();
	if((d1+d2)==2)
		flg2++;
	else if((d1+d2)==3)
		flg3++;
	else if((d1+d2)==4)
		flg4++;
	else if((d1+d2)==5)
		flg5++;
	else if((d1+d2)==6)
		flg6++;
	else if((d1+d2)==7)
		flg7++;
	else if((d1+d2)==8)
		flg8++;
	else if((d1+d2)==9)
		flg9++;
	else if((d1+d2)==10)
		flg10++;
	else if((d1+d2)==11)
		flg11++;
	else if((d1+d2)==12)
        flg12++;
	}
	
    
	float f2=flg2/10000;
	float f3=flg3/10000;
	float f4=flg4/10000;
	float f5=flg5/10000;
	float f6=flg6/10000;
	float f7=flg7/10000; 
	float f8=flg8/10000;
	float f9=flg9/10000;
	float f10=flg10/10000;
	float f11=flg11/10000;
	float f12=flg12/10000;
	
	cout <<"2:"<<f2<<endl;
	cout <<"3:"<<f3<<endl;
	cout <<"4:"<<f4<<endl;
	cout <<"5:"<<f5<<endl;
	cout <<"6:"<<f6<<endl;
	cout <<"7:"<<f7<<endl;
	cout <<"8:"<<f8<<endl;
	cout <<"9:"<<f9<<endl;
	cout <<"10:"<<f10<<endl;
	cout <<"11:"<<f11<<endl;
	cout <<"12:"<<f12<<endl;
	
	
	return 0;
	
}
