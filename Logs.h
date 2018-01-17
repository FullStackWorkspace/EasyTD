#pragma once

#ifndef __LOGS_H__
#define __LOGS_H__

#include <boost/serialization/singleton.hpp>
#include <boost/filesystem.hpp>

class Logs 
	: public boost::serialization::singleton<Logs>
{
public:
	Logs();
	~Logs();

private:
	boost::filesystem::path m_pathLogDir;
	boost::filesystem::path m_pathErrorLog;
	boost::filesystem::path m_pathDebugLog;
};

Logs::Logs()
{
}

Logs::~Logs()
{
}

#endif // !__LOGS_H__
