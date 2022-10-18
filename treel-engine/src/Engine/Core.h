#pragma once

#ifdef TE_PLATFORM_WINDOWS 
	#ifdef TE_BUILD_DLL
		#define TREELENGINE_API __declspec(dllexport)	
	#else
		#define TREELENGINE_API __declspec(dllimport)	
	#endif // TE_BUILD_DLL
#else
	#error Treel Engine only supports Windows
#endif // TE_PLATFORM_WINDOWS

#ifdef TE_ENABLE_ASSERTS
	#define TE_ASSERT(x, ...) {if(!(x)) {TE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }}
	#define TE_CORE_ASSERT(x, ...) {if(!(x)) {TE_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }}
#else
	#define TE_ASSERT(x, ...)
	#define TE_CORE_ASSERT(x, ...)
#endif // !TE_ENABLE_ASSERTS


#define BIT(x) (1<<x)

#define TE_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)