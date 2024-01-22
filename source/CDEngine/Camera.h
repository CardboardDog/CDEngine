#pragma once
#include "Renderer.h"
class Camera{
protected:
	Renderer* cameraRender;
public:
	ICameraSceneNode* cameraComponent = nullptr;
	Camera(Renderer* render);
	void SetPosition(float x, float y, float z);
	void SetRotation(float x, float y);
	void Rotate(float x, float y);
	void Translate(float x, float y, float z);
};

