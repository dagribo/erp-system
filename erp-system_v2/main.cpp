#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include "FileWork.h"
#include <chrono>

using namespace std;

int main()
{
	Reader* r = new Reader("input.txt");
	System* sys = new System();
	r->work_with_string(sys);
//	mod->Start();
	string fname;
	fname = "output.txt";
	Writer* w = new Writer(fname);
	w->write_to_file(sys);
	return 0;
}