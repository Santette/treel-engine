#pragma once

#ifdef  TE_PLATFORM_WINDOWS

extern TreelEngine::Application* TreelEngine::CreateApplication();

int main(int argc, char** argv) {
	auto app = TreelEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif //  TE_PLATFORM_WINDOWS
