#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream inputfile("example.txt");
    ofstream outputfile("example.txt");
    fstream file("example.txt",ios::in | ios::out);
    
    return 0;
    }