#pragma once

// To store those data which is specific for every plugins itself
// Must be used header-only!

// Usage:
// 
// PluginOwnData::set<string>("name","hello!");
// ......
// ......
// cout << PluginOwnData::get<string>("name") << endl;		// "hello!"


#include <unordered_map>
#include <Utils/WinHelper.h>
#include <minwindef.h>
#include <string_view>

extern std::unordered_map<HMODULE, std::unordered_map<std::string_view, void*>> ll_PluginOwnData;

namespace PluginOwnData
{
	template <typename T, typename... Args>
	inline T &setImpl(HMODULE hPlugin, const std::string_view& key,const Args&... args)
	{
		removeImpl<T>(hPlugin, key);
		T* res = new T(args...);
		ll_PluginOwnData[hPlugin][key] = res;
		return *res;
	}

	template <typename T>
	inline T& getImpl(HMODULE hPlugin, const std::string_view& key)
	{
		if (!hasImpl(hPlugin, key))
			ll_PluginOwnData[hPlugin][key] = new T;
		return *(T*)ll_PluginOwnData[hPlugin][key];
	}

	inline bool hasImpl(HMODULE hPlugin, const std::string_view& key)
	{
		return ll_PluginOwnData[hPlugin].find(key) != ll_PluginOwnData[hPlugin].end();
	}

	template <typename T>
	inline void removeImpl(HMODULE hPlugin, const std::string_view& key)
	{
		if (hasImpl(hPlugin, key))
			delete (T*)ll_PluginOwnData[hPlugin][key];
	}

	template <typename T, typename... Args>
	inline T& set(const std::string_view& key, const Args&... args)
	{
		return setImpl<T>(GetCurrentModule(), key, args...);
	}

	template <typename T>
	inline T& get(const std::string_view& key)
	{
		return getImpl<T>(GetCurrentModule(), key);
	}

	inline bool has(const std::string_view& key)
	{
		return hasImpl(GetCurrentModule(), key);
	}

	template <typename T>
	inline void remove(const std::string_view& key)
	{
		return removeImpl<T>(GetCurrentModule(), key);
	}
}