#pragma once
#include "enpch.h"
#include "spdlog/spdlog.h"
#include "Core.h"

namespace  Engine {
	class ENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger(){ return s_ClientLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger(){ return s_CoreLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
	};
}

#define EN_CORE_TRACE(...) ::Engine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EN_CORE_INFO(...) ::Engine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EN_CORE_WARNING(...) ::Engine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EN_CORE_ERROR(...) ::Engine::Log::GetCoreLogger()->error(__VA_ARGS__)

#define EN_CLIENT_TRACE(...) ::Engine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EN_CLIENT_INFO(...) ::Engine::Log::GetClientLogger()->info(__VA_ARGS__)
#define EN_CLIENT_WARNING(...) ::Engine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EN_CLIENT_ERROR(...) ::Engine::Log::GetClientLogger()->error(__VA_ARGS__)

#ifdef EN_DIST

	#define EN_CORE_TRACE(...)
	#define EN_CORE_INFO(...)
	#define EN_CORE_WARNING(...)
	#define EN_CORE_ERROR(...)

	#define EN_CLIENT_TRACE(...)
	#define EN_CLIENT_INFO(...)
	#define EN_CLIENT_WARNING(...)
	#define EN_CLIENT_ERROR(...)

#endif 
