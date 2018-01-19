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
	/*日志文件目录*/
	boost::filesystem::path m_pathLogDir;
	/*错误日志文件名*/
	boost::filesystem::path m_pathErrorLog;
	/*调试日志文件名*/
	boost::filesystem::path m_pathDebugLog;
};


#endif // !__LOGS_H__
