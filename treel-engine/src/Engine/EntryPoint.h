#pragma once

#ifdef  TE_PLATFORM_WINDOWS

extern TreelEngine::Application* TreelEngine::CreateApplication();

int main(int argc, char** argv) {
	TreelEngine::Log::Init();
	TE_CORE_WARN("Initialized Log!");
	TE_INFO("Initialized Log!");
	int a = 5;
	TE_TRACE("Hello var {0}", a);

	auto app = TreelEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif //  TE_PLATFORM_WINDOWS
