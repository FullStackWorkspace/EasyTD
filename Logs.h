#pragma once

#ifndef __LOGS_H__
#define __LOGS_H__

#include <boost/serialization/singleton.hpp>
#include <boost/filesystem.hpp>
#include "Defs.h"

#define LOGs Utils.get_mutable_instance()

class Logs
	: public boost::serialization::singleton<Logs>
{
public:
	Logs();
	~Logs();

	void debug(const char* msg);

	void error(const char* msg);

private:
	/*��־�ļ�Ŀ¼*/
	boost::filesystem::path m_pathLogDir;
	/*������־�ļ���*/
	boost::filesystem::path m_pathErrorLog;
	/*������־�ļ���*/
	boost::filesystem::path m_pathDebugLog;
};


#endif // !__LOGS_H__
