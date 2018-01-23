#pragma once

#ifndef __LOGS_H__
#define __LOGS_H__

#include <boost/serialization/singleton.hpp>
#include <boost/filesystem.hpp>
#include <fstream>
#include "Defs.h"
#include "Utils.h"

#define LOGs Logs::get_mutable_instance()

/*
��־��(����)
���������־
*/
class Logs
	: public boost::serialization::singleton<Logs>
{
public:
	Logs();
	~Logs();

	// ���debug��Ϣ
	void Debug(const char* msg);

	template<class TFirst, class... TOther>
	void Debug(const char* format, TFirst&& first, TOther&&... other)
	{
		auto msg = UTILs.Format(format, first, other...);

		Debug(msg.c_str());
	}

	void Error(const char* msg);

private:
	/*��־�ļ�Ŀ¼*/
	boost::filesystem::path m_pathLogDir;
	/*������־�ļ���*/
	boost::filesystem::path m_pathErrorLog;
	/*������־�ļ���*/
	boost::filesystem::path m_pathDebugLog;
};


#endif // !__LOGS_H__
