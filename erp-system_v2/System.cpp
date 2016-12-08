#include "System.h"

void System::set_main_data(int n)
{
	nt = n;
}

void System::add_doc(Document * doc)
{
	docs.emplace_back(doc);
}
