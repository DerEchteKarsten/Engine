#include <Engine.h>

class Sandbox : public Engine::Application
{
public:
	Sandbox()
	{
		EN_CORE_ERROR("WRRRRRRRRYYYYYYYYYYYYYYYYYY!!!!!!!!!!");
		EN_CORE_ERROR("I'am dying!");
		EN_CORE_INFO("Info!");
		EN_CORE_WARNING("Warn!");
		EN_CORE_TRACE("Trace!");

		EN_CLIENT_INFO("Client Message!");
	}

	~Sandbox()
	{
		
	}

};

Engine::Application* Engine::CreateApplication()
{
	return new Sandbox();
}