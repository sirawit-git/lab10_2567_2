#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;


    ifstream source("score.txt");


    while (getline(source, textline))
    {
        float score = atof(textline.c_str()); 
        sum += score;
        sum_of_square += score * score;
        count++;
    }


    float mean = sum / count;


    float variance = (sum_of_square / count) - (mean * mean);
    float standard_deviation = sqrt(variance);


    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << standard_deviation << "\n";

    return 0;
}
