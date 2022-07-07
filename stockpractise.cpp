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
        double a[15][100];
        default_random_engine generator;
        generator.seed(123);

        normal_distribution<double> distribution(0,1);
        ofstream fout("stock12.csv");
        fout<<"trading day, Stock price\n";
        fout<<0<<","<<S<<"\n";
        int count=1;
        for(int i=0 ;i<15; i++){
            for(int j=0; j<100; j++){
            double epsition = distribution(generator);
            S = S*exp((mu-sigma*sigma/2)*dt+sigma*epsition*sqrt(dt));
            //fout<<count<<","<<S<<"\n";
            a[i][j]= S;
            fout<<i<<","<<a[i][j]<<"\n";
                //count++;
                }
        }
        fout.close();
        return 0;


}
