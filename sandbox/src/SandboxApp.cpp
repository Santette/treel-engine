#include <TreelEngine.h>

class ExampleLayer : public TreelEngine::Layer {
public:
	ExampleLayer() 
		: Layer("Example") {}

	void OnUpdate() override {
		TE_INFO("ExampleLayer::Update");
	}

	void OnEvent(TreelEngine::Event& event) {
		TE_TRACE("{0}", event);
	}
};

class Sandbox : public TreelEngine::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
		PushOverlay(new TreelEngine::ImGuiLayer());
	}
	~Sandbox() {

	} 
};

TreelEngine::Application* TreelEngine::CreateApplication()
{
	return new Sandbox();
}