#include<iostream>
#include<cmath>
#include<ctime>
#include<random>

using namespace std;
int main()
{
    srand(time(NULL));
 double r1;
 /*r2 = (double)rand()/RAND_MAX;*/
 int N=0;
 float a=0,b=3.14;
 double x, sum=0,cal,result;


 for(int i=0;i<=20;i++ )
 {
     r1= (double)rand()/RAND_MAX;
      x = a + (b-a)*r1;
     cal = 1+ cos(x)*cos(x);
     sum =sum + pow(cal,0.5);
     N++;
 }
 result = (b-a)*sum/N ;
 cout<<"Ingretion vaule using monte carlo method ="<<result;
return 0;
}
