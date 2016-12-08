#pragma once
#include "Document.h"
#include <vector>
#include <memory>

class System
{
private:
public:
	//void Start();
	//void Analize();
	void set_main_data(int n);
	int nt;
	void add_doc(Document* doc);
	std::vector<Document*> docs;
};
