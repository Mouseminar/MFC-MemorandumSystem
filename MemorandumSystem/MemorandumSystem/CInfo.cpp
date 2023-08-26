#include "pch.h"
#include "CInfo.h"

CInfo::CInfo()
{

}

CInfo::CInfo(int id, string lastname, string firstname, string date, string content)
{
	this->m_id = id;
	this->m_lastname = lastname;
	this->m_firstname = firstname;
	this->m_date = date;
	this->m_content = content;
}

void CInfo::Load(ifstream& in)
{
	in >> m_id;
	in >> m_lastname;
	in >> m_firstname;
	in >> m_date;
	in >> m_content;
}

void CInfo::Save(ofstream& out)
{
	out << m_id << "\t";
	out << m_lastname << "\t";
	out << m_firstname << "\t";
	out << m_date << "\t";
	out << m_content << "\n";
}
