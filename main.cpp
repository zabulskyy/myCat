#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
using namespace std;

#define BUFF_SIZE 1024

void print_single_file(char *name, bool a);
void error_exit(string error, string inFile);
int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        /*TODO*/
        exit(1);
    }

    for (int i = 1; i < argc; ++i)
    {
        if (string(argv[i]) == "-h" || string(argv[i]) == "--help")
        {
            /*TODO*/
            return 0;
        }
    }

    bool a = false;
    for (int i = 1; i < argc; ++i)
    {
        if (!a && string(argv[i]) == "-A")
        {
            a = true;
            break;
        }
    }

    for (int i = 1; i < argc; ++i)
    {
        if (string(argv[i]) != "-A")
            print_single_file(argv[i], a);
    }

    exit(0);
    return 0;
}

void print_single_file(char *name, bool a)
{
    int inputFD;
    inputFD = open(name, O_RDONLY);
    if (inputFD == -1)
    {
        error_exit("cannot open file", name);
    }
    char buf[BUFF_SIZE];
    ssize_t read(int inputFD, void *buf, size_t count);
    for (int i = 0; i < BUFF_SIZE; ++i)
    {
        cout << buf[i];
    }
}

void error_exit(string error, string inFile)
{
    /*TODO*/
    cerr << error << " " << inFile << endl;
}