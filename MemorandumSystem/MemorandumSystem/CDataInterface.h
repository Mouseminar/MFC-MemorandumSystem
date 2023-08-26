#pragma once
#include "CInfo.h"

class CDataInterface
{
public:
	bool Open(CString FilePath);
	void Add(CInfo MyInfo);
	void Del(int index);
	void Amend(int index, CInfo MyInfo);
	CInfo Find(int id);
	bool Save(CString FilePath);

	vector<CInfo> Info;
};

