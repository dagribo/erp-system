#include "FileWork.h"

#include "FileWork.h"
#include <fstream>
#include <iostream>

using namespace std;

WorkWithFile::WorkWithFile(string fn)
{
	fname = fn;
}

System* Reader::work_with_string(System* sys)
{
	int n;
	ifstream ifs(fname);
	ifs >> n;
	sys->set_main_data(n);

	for (int i = 0; i < n; i++)
	{
		string id, date, contragent, product;
		int number, cash, summ, q, quantity;
		ifs >> id;
		if (id = "BI" || id="BW")
		{
			ifs >> number >> date >> contragent >> cash >> summ;
			Document* doc = new Bank_doc(id, number, date, contragent, cash, summ);
			doc->set_type();
			sys->add_doc(doc);
		}
		else
		{
			ifs >> number >> date >> contragent >> q;
			struct Table st[1000];
			for (int j = 0; j < q; j++)
			{
				ifs >> product >> quantity >> summ;
				st[i].product_t = product;
				st[i].quantity = quantity;
				st[i].summ = summ;
			}
			Document* doc = new Warehouse_doc(id, number, date, contragent, st);
			doc->set_type();
			sys->add_doc(doc);
		}

	}
	/*
	for (int i = 0;i < d;i = i + 1)
	{
		int x, y, z, v_x, v_y, v_z;
		ifs >> x >> y >> z >> v_x >> v_y >> v_z;
		ModelingObject* obj = new Dragonfly(x, y, z, v_x, v_y, v_z, ds);
		obj->count_speed();
		obj->fnumber = i;
		mod->add_object(obj);
	}

	for (int i = 0;i < s;i = i + 1)
	{
		int x, y, z, v_x, v_y, v_z;
		ifs >> x >> y >> z >> v_x >> v_y >> v_z;

		ModelingObject* obj = new Stork(x, y, z, v_x, v_y, v_z, ss);
		obj->count_speed();
		obj->fnumber = i + d;
		mod->add_object(obj);
	}

	for (int i = 0;i < f;i = i + 1)
	{
		int x, y, v_x, v_y;
		ifs >> x >> y >> v_x >> v_y;
		ModelingObject* obj = new Frog(x, y, v_x, v_y, fs);
		obj->count_speed();
		obj->fnumber = i + d + s;
		mod->add_object(obj);
	}

	for (int i = 0;i < h;i = i + 1)
	{
		int x, y, v_x, v_y;
		ifs >> x >> y >> v_x >> v_y;
		ModelingObject* obj = new Hedgehog(x, y, v_x, v_y, hs);
		obj->count_speed();
		obj->fnumber = i + d + s + f;
		mod->add_object(obj);
	}*/
	return sys;
}

void Writer::write_to_file(System * sys)
{

}
