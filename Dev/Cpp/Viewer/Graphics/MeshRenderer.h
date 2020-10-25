
#pragma once

#include <Effekseer.h>

namespace Effekseer
{
namespace Tool
{

struct RendererParameter
{
	Effekseer::Matrix44 CameraMatrix;
	Effekseer::Matrix44 ProjectionMatrix;
};

class StaticMesh
{
private:
	std::shared_ptr<Backend::VertexBuffer> vb_;
	std::shared_ptr<Backend::IndexBuffer> ib_;
public:

};

class StaticMeshRenderer
{
private:
	std::shared_ptr<Backend::GraphicsDevice> graphicsDevice_;
	std::shared_ptr<StaticMesh> staticMesh_;

public:
	StaticMeshRenderer(std::shared_ptr<Backend::GraphicsDevice> graphicsDevice);
	void Render(const RendererParameter& rendererParameter);
};

}
} // namespace Effekseer