#include <TreelEngine.h>

class Sandbox : public TreelEngine::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	} 
};

TreelEngine::Application* TreelEngine::CreateApplication()
{
	return new Sandbox();
}