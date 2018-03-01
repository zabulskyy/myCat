#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <ctype.h>
#include <fcntl.h>

using namespace std;

void print_single_file(char *name, bool a);
void error_exit(char *error; char *inFile);
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
}

void error_exit(char *error; char *inFile)
{
    /*TODO*/
    cerr << error << " " << file;
}