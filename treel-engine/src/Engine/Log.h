#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace TreelEngine {

	class TREELENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define TE_CORE_TRACE(...)	::TreelEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TE_CORE_INFO(...)	::TreelEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TE_CORE_WARN(...)	::TreelEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TE_CORE_ERROR(...)	::TreelEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TE_CORE_FATAL(...)	::TreelEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Core log macros
#define TE_TRACE(...)	::TreelEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TE_INFO(...)	::TreelEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define TE_WARN(...)	::TreelEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TE_ERROR(...)	::TreelEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define TE_FATAL(...)	::TreelEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)