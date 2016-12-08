#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Table
{
	string product_t;
	int quantity;
	int summ;
};



enum Doc_type 
{
	INCOME,
	WITHDRAW
};

enum Doc_class
{
	BANK,
	WAREHOUSE
};

class Document
{
protected:
public:
	string id;
	Doc_type doc_type;
	Doc_class doc_class;
	int number;
	string date;
	string contragent;
	Document() :number(0), date(""), contragent(" "),id("") {};
	virtual void set_type();
};

class Bank_doc:public Document
{
protected:
public:
	Bank_doc() :Document()
	{
		doc_class = BANK;
	};
	Bank_doc(string id1, int number1, string date1, string contragent1, long long int cash1, double summ1)
	{
		id = id1;
		number = number1;
		date = date1;
		contragent = contragent1;
		cash = cash1;
		summ = summ1;
		doc_class = BANK;
	};

	long long int cash;
	double summ; //cout << round(value*100)/100. << endl;
	void set_type();
};

class Warehouse_doc:public Document
{
protected:
public:
	Warehouse_doc() : Document()
	{
		doc_class = WAREHOUSE;
	};
	Warehouse_doc(string id1, int number1, string date1, string contragent1, struct Table table1[1000])
	{
		id = id1;
		number = number1;
		date = date1;
		contragent = contragent1;
		table = table1;
		doc_class = WAREHOUSE;
	};
	struct Table table[1000];
	string product;
	int quantity;
	int summ;
	void set_type();
};