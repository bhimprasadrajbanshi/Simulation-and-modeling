
#include<iostream>
#include<cmath>
#include<ctime>
#include<random>
double ingeration(double x, double y)
{
    pow(pow(x,4)+y,0.5);
}

using namespace std;
int main()
{
    srand(time(NULL));
 double r1,r2;
 /*r2 = (double)rand()/RAND_MAX; f(x)=x*/
 int N=0;
 int a=0,b=2,c=0,d=8;
 double x, y,sum=0,cal,result;


 for(int i=0;i<=100;i++ )
 {
     r1= (double)rand()/RAND_MAX;
     r2 = (double)rand()/RAND_MAX;
      x = a + (b-a)*r1;
      y=c+ (d-c)*r2;


     sum =sum + ingeration(x,y) ;
     N++;
 }
 result = (b-a)*(d-c)*sum/N ;
 cout<<"Ingretion vaule using monte carlo method ="<<result;
return 0;
}
