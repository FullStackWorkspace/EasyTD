#include "Logs.h"

using namespace std;
namespace fs = boost::filesystem;

void Logs::Debug(const char* msg)
{
	//ofstream fout(this->m_pathDebugLog.string());
	//fout << msg << endl;
	//fout.close();

	printf(m_pathDebugLog.string().c_str());

#ifdef _DEBUG
	printf(msg);
#endif

}

void Logs::Error(const char* msg)
{

}


Logs::Logs()
{
	this->m_pathLogDir = fs::path(_PATH_LOG_DIR);
	this->m_pathDebugLog = this->m_pathLogDir.append(_PATH_LOG_DEBUG_FILE);
	this->m_pathErrorLog = this->m_pathLogDir.append(_PATH_LOG_DEBUG_FILE);
}

Logs::~Logs()
{
}