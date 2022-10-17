#include "tepch.h"
#include "Application.h"

#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"

namespace TreelEngine {
	Application::Application() {}
	Application::~Application() {}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);

		if (e.IsInCategory(EventCategoryApplication)) {
			TE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryKeyboard)) {
			TE_ERROR("Window Resize is in \"Keyboard\" category, this shouldn't happen. {0}", e);
		}

		while (true);
	}
}