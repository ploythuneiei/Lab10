#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    ifstream data;
    data.open("score.txt");

    int i = 0;
    double sum = 0, sum2 = 0, score;
    string scoretxt;
    

    while(getline(data, scoretxt)){
        i++;
        score = stod(scoretxt);
        sum = sum + score;
        sum2 = sum2 + score*score;
    }

    data.close();

    double mean = sum/i;
    double sd = sqrt((sum2/i)-(mean*mean));

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;

    return 0;
}
