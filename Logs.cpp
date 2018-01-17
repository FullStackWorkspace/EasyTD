#include "Logs.h"

namespace fs = boost::filesystem;


Logs::Logs()
{
	this->m_pathLogDir = fs::path(_PATH_LOG_DIR);
	this->m_pathDebugLog = this->m_pathLogDir.append(_PATH_LOG_DEBUG_FILE);
	this->m_pathErrorLog = this->m_pathLogDir.append(_PATH_LOG_DEBUG_FILE);
}

Logs::~Logs()
{
}