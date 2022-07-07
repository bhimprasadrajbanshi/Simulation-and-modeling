#include<cmath>
#include<fstream>
#include<random>
#include<ctime>

using namespace std;

int main(){
        double S=77.84;
        double mu=0.05718;
        double sigma=0.1663;
        double dt=1.0/250.0;

        //default_random_engine generator;
        //generator.seed(123);
        //use time seed
         srand(time(NULL));
         double r;
         r= (double)rand()/RAND_MAX
        normal_distribution<double> distribution(0,1);
        ofstream fout("stock.csv");
        fout<<"trading day, Stock price\n";
        fout<<0<<","<<S<<"\n";
        int count=1;
        while(count<=15){
            double epsition = distribution(r);
            S = S*exp((mu-sigma*sigma/2)*dt+sigma*epsition*sqrt(dt));
            fout<<count<<","<<S<<"\n";
            count++;
        }
        fout.close();
        return 0;


}
