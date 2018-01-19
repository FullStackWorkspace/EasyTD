#include "Configs.h"
#include "Defs.h"

namespace pt = boost::property_tree;

Configs::Configs()
{
	pt::read_info(_PATH_DEFAULT_GAMECONFIG, m_cfgs);
}

Configs::~Configs()
{
}