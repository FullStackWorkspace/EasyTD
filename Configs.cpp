#include "Configs.h"
#include "Defs.h"

namespace pt = boost::property_tree;

Configs::Configs()
{
	pt::read_info(DEFAULT_GAMECONFIG_PATH, m_cfgs);
}

Configs::~Configs()
{
}