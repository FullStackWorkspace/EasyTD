#pragma once

#ifndef __CONFIGS_H__
#define __CONFIGS_H__

#include <boost\serialization\singleton.hpp>
#include <boost\property_tree\ptree.hpp>
#include <boost\property_tree\info_parser.hpp>

class Configs 
	: public boost::serialization::singleton<Configs>
{
public:
	Configs();
	~Configs();

private:

};

Configs::Configs()
{
}

Configs::~Configs()
{
}

#endif // !__CONFIGS_H__
