#include "pch.h"
#include "CDataInterface.h"

bool CDataInterface::Open(CString FilePath)
{
	ifstream in(FilePath, ios::in);
	
	if (in.is_open())
	{
		int num;	//记录有多少条数据
		in >> num;
		for (int i = 0; i < num; i++)
		{
			CInfo MyInfo;
			MyInfo.Load(in);
			Info.push_back(MyInfo);
		}
		return true;
	}

	return false;
}

void CDataInterface::Add(CInfo MyInfo)
{
	Info.push_back(MyInfo);
}

void CDataInterface::Del(int index)
{
	Info.erase(Info.begin() + index);
}

void CDataInterface::Amend(int index, CInfo MyInfo)
{
	Info[index] = MyInfo;
}

CInfo CDataInterface::Find(int id)
{
	for (int i = 0; i < Info.size(); i++)
	{
		if (Info[i].m_id == id) return Info[i];
	}
	return CInfo(-1, TEXT(""), TEXT(""), TEXT(""), TEXT(""));
}

bool CDataInterface::Save(CString FilePath)
{
	ofstream out(FilePath, ios::out);
	if (out.is_open())
	{
		out << Info.size() << endl;
		for (int i = 0; i < Info.size(); i++)
		{
			Info[i].Save(out);
		}
		out.close();
		return true;
	}
	return false;
}
