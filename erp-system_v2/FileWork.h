#pragma once
#include "System.h"

class WorkWithFile
{
protected:
	string fname;
public:
	WorkWithFile(string fn);
	//System* work_with_string(System* sys) = 0;
};

class Reader :public WorkWithFile
{
public:
	Reader(string fn) :WorkWithFile(fn) {}
	System* work_with_string(System* sys);
};

class Writer :public WorkWithFile
{
public:
	Writer(string fn) :WorkWithFile(fn) {}
    void write_to_file(System* sys);
};