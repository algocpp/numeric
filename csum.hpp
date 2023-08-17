
// algocpp/numeric/csum.hpp
//
// this file is part of algocpp and is copyrighted by algocpp.
// if used, it must comply with the mit license.

#ifndef ALGOCPP_NUMERIC_CSUM
#define ALGOCPP_NUMERIC_CSUM

#include <string>
#include <algocpp/type/ctoi.hpp>

namespace algocpp
{
	namespace numeric
	{
		namespace base
		{
			inline unsigned long long base_csum(std::string s)
			{
				unsigned long long result = 0;
				for (unsigned long long i = 0; i < s.size(); i++)
				{
					if (s[i] >= '0' && s[i] <= '9')
						result += algocpp::type::ctoi(s[i]);
				}

				return result;
			}
		}

		inline unsigned long long csum(std::string s)
		{
			return base::base_csum(s);
		}

		inline unsigned long long csum(long long n)
		{
			return base::base_csum(std::to_string(n));
		}

		inline unsigned long long csum(unsigned long long n)
		{
			return base::base_csum(std::to_string(n));
		}

		}
}

#endif // ALGOCPP_NUMERIC_CSUM
