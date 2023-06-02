#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int m,d;
    cin>>m>>d;
    if(m==1 && d>=21){cout<<"Aquarius\n";return 0;}
    if(m==2 && d<=18){cout<<"Aquarius\n";return 0;}
    if(m==2 && d>=19){cout<<"Pisces\n";return 0;}
    if(m==3 && d<=20){cout<<"Pisces\n";return 0;}
    if(m==3 && d>=21){cout<<"Aries\n";return 0;}
    if(m==4 && d<=20){cout<<"Aries\n";return 0;}
    if(m==4 && d>=21){cout<<"Taurus\n";return 0;}
    if(m==5 && d<=21){cout<<"Taurus\n";return 0;}
    if(m==5 && d>=22){cout<<"Gemini\n";return 0;}
    if(m==6 && d<=21){cout<<"Gemini\n";return 0;}
    if(m==6 && d>=22){cout<<"Cancer\n";return 0;}
    if(m==7 && d<=22){cout<<"Cancer\n";return 0;}
    if(m==7 && d>=23){cout<<"Leo\n";return 0;}
    if(m==8 && d<=23){cout<<"Leo\n";return 0;}
    if(m==8 && d>=24){cout<<"Virgo\n";return 0;}
    if(m==9 && d<=23){cout<<"Virgo\n";return 0;}
    if(m==9 && d>=24){cout<<"Libra\n";return 0;}
    if(m==10 && d<=23){cout<<"Libra\n";return 0;}
    if(m==10 && d>=24){cout<<"Scorpio\n";return 0;}
    if(m==11 && d<=22){cout<<"Scorpio\n";return 0;}
    if(m==11 && d>=23){cout<<"Sagittarius\n";return 0;}
    if(m==12 && d<=21){cout<<"Sagittarius\n";return 0;}
    if(m==12 && d>=22){cout<<"Capricorn\n";return 0;}
    if(m==1 && d<=20){cout<<"Capricorn\n";return 0;}
    return 0;
}
