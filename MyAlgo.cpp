#include "myalgo.h"
#include <cstdlib>
#include<iostream>
using namespace std;


bool Algo1(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
 * VL=5; * VR = 5;
}

bool Algo2(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{    short son_hata=0,integral=0;
	int E=0b000001111100000-S;
   	int Kp=1,Kd=1;
   	double Ki=1;
 	short orantili=E;
 	short turev=(orantili-son_hata);
   	son_hata=turev;
   integral=integral+orantili*Ki;
	double sonuc=orantili*Kp+turev*Kd+integral*Ki;
if(S==16382 ||S== 32767  ||S==8188  || S== 4088  ||S== 2032  ||S== 992){
* VL=10; * VR = 10;
}
else{

if(sonuc>0)
* VL=sonuc/180; * VR = sonuc/100;
}
else
* VL=sonuc/50; * VR = sonuc/180;
}
			
			
		return true;
}
bool Algo3(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
bool Algo4(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
bool Algo5(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
bool Algo6(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
bool Algo7(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
