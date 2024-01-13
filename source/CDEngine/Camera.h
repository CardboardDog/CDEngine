#pragma once
#include "Renderer.h"
class Camera{
protected:
	Renderer* cameraRender;
public:
	ICameraSceneNode* cameraComponent = nullptr;
	Camera(Renderer* render);
};

