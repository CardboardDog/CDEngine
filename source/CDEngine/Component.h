#pragma once
#include "Renderer.h"
class Component{
protected:
	Renderer* meshRenderer = nullptr;
public:
	path materialPath;
	IAnimatedMesh* componentMesh = nullptr;
	IAnimatedMeshSceneNode* meshNode = nullptr;
	Component(Renderer* renderer, stringw meshPath, stringw materialPath);
	void SetPosition(float x, float y, float z);
	void SetRotation(float x, float y, float z);
	void Rotate(float x, float y, float z);
	void Translate(float x, float y, float z);
};

