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
};

