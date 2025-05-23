#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    string file;
    ifstream fin;
    system("mkdir data");
    system("ls -R > data/raw");

    fin.open("data/raw");

    while (!fin.eof()) {
        fin >> file;
        if (fin.eof())
            break;
        cout << file << endl;
    }

    fin.close();
    return 0;
}