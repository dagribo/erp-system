#include "Document.h"

void Bank_doc::set_type()
{
	if (id == "BI")
		doc_type = INCOME;
	else doc_type = WITHDRAW;
}

void Warehouse_doc::set_type()
{
	if (id=="WI")
		doc_type=INCOME;
	else doc_type = WITHDRAW;
}

