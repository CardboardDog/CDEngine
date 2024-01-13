#include "Component.h"
Component::Component(Renderer* renderer, stringw meshPath, stringw materialPath){
	this->meshRenderer = renderer;
	this->materialPath = path(materialPath);
	this->componentMesh = this->meshRenderer->sceneManager->getMesh(path(meshPath));
}