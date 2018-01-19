#pragma once

#ifndef __LOGS_H__
#define __LOGS_H__

#include <boost/serialization/singleton.hpp>
#include <boost/filesystem.hpp>
#include <fstream>
#include "Defs.h"
#include "Utils.h"

#define LOGs Logs::get_mutable_instance()

class Logs
	: public boost::serialization::singleton<Logs>
{
public:
	Logs();
	~Logs();

	void Debug(const char* msg);

	template<class TFirst, class... TOther>
	void Debug(const char* format, TFirst&& first, TOther&&... other)
	{
		auto msg = UTILs.Format(format, first, other...);

		Debug(msg.c_str());
	}

	void Error(const char* msg);

private:
	/*日志文件目录*/
	boost::filesystem::path m_pathLogDir;
	/*错误日志文件名*/
	boost::filesystem::path m_pathErrorLog;
	/*调试日志文件名*/
	boost::filesystem::path m_pathDebugLog;
};


#endif // !__LOGS_H__
