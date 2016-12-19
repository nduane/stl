#include <iostream>
#include <string>
#include <map>
#include <hash_map>
#include <vector>

void main(int argc, char* argv[])
{

	// put some stuff into a map

	{
	std::map<std::string, int> cont;
	cont["foo"] = 1;
	cont["bar"] = 2;
	cont["foobar"] = 3;

	std::map<std::string, int>::const_iterator iter;
	for (iter = cont.begin(); iter != cont.end(); ++iter)
		{
		std::cout << "key: " << iter->first << ", value: " << iter->second << std::endl;
		}
	}

	// put some stuff into a hash map

	{
	std::hash_map<std::string, int> cont;
	cont["foo"] = 1;
	cont["bar"] = 2;
	cont["foobar"] = 3;

	std::hash_map<std::string, int>::const_iterator iter;
	for (iter = cont.begin(); iter != cont.end(); ++iter)
		{
		std::cout << "key: " << iter->first << ", value: " << iter->second << std::endl;
		}
	}

	// put some stuff into a vector

	{
	std::vector<int> cont;
	cont.push_back(10);
	cont.push_back(20);
	cont.push_back(13);

	std::vector<int>::const_iterator iter;
	for (iter = cont.begin(); iter != cont.end(); ++iter)
		{
		std::cout << "value: " << *iter << std::endl;
		}
	}
}
