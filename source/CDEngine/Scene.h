#pragma once
#include "Renderer.h"
#include "Component.h"
#include "Camera.h"
class Scene{
public:
	Renderer* sceneRenderer = nullptr;
	Scene(Renderer* renderer);
	void AddComponent(Component* component);
	void AddComponent(Camera* camera);
	void SetSkybox(stringw textureA, stringw textureB, stringw textureC, stringw textureD, stringw textureE, stringw textureF);
};

