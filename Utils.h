#pragma once

#ifndef __UTILS_H__
#define __UTILS_H__

#include <boost/algorithm/string.hpp>
#include <boost/serialization/singleton.hpp>

#define UTILs Utils.get_mutable_instance()

class Utils
	: public boost::serialization::singleton<Utils>
{
public:
	Utils();
	~Utils();

	/*字符串格式化，使用boost风格占位符*/
	template<class TFirst, class... TOther>
	string Format(const char* format, TFirst&& first, TOther&&... other)
	{
		boost::format fmt(format);
		Format(fmt, first, other...);
		return fmt.str();
	}

private:
	template<class TFirst>
	void Format(boost::format& fmt, TFirst&& first)
	{
		fmt % first;
	}

	template<class TFirst, class... TOther>
	void Format(boost::format& fmt, TFirst&& first, TOther&&... other)
	{
		fmt % first;
		Format(fmt, other...);
	}
};

#endif // !__UTILS_H__
