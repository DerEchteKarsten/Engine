#pragma once
#include "Core.h"

namespace Engine {
	class ENGINE_API Layer
	{
		Layer();
		virtual ~Layer();

		virtual void OnAtach() {}
		virtual void OnDetach() {}
		virtual void OnUpdate() {}
		//void OnEvent(Event& e);
	};
}

