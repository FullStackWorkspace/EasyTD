#pragma once

#ifndef __CONFIGS_H__
#define __CONFIGS_H__

#include <boost\serialization\singleton.hpp>
#include <boost\property_tree\ptree.hpp>
#include <boost\property_tree\info_parser.hpp>

#define CFGs Configs::get_mutable_instance()

class Configs
	: public boost::serialization::singleton<Configs>
{
public:
	Configs();
	~Configs();

	template<typename T>
	inline T get(const std::string &key, T val)
	{
		return this->m_cfgs.get<T>(key, val);
	}

private:
	/*≈‰÷√œÓtree*/
	boost::property_tree::ptree m_cfgs;
};

#endif // !__CONFIGS_H__

