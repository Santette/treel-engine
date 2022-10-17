#include "tepch.h"
#include "Layer.h"

namespace TreelEngine {
	Layer::Layer(const std::string& debugName)
		: m_DebugName(debugName) {}

	Layer::~Layer() {}
}