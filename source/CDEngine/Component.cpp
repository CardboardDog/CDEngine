#include "Component.h"
#include <iostream>
Component::Component(Renderer* renderer, stringw meshPath, stringw materialPath){
	this->meshRenderer = renderer;
	this->materialPath = path(materialPath);
	this->componentMesh = this->meshRenderer->sceneManager->getMesh(path(meshPath));
}
void Component::SetPosition(float x, float y, float z){
	this->meshNode->setPosition(vector3df(x, y, z));
}
void Component::SetRotation(float x, float y, float z){
	this->meshNode->setRotation(vector3df(x, y, z));
}
void Component::Rotate(float x, float y, float z){
	vector3df _nodeRotation_ = this->meshNode->getRotation();
	_nodeRotation_.X += x;
	_nodeRotation_.Y += y;
	_nodeRotation_.Z += z;
	this->meshNode->setRotation(_nodeRotation_);
}
void Component::Translate(float x, float y, float z){
	vector3df _nodePosition_ = this->meshNode->getPosition();
	_nodePosition_.X += x;
	_nodePosition_.Y += y;
	_nodePosition_.Z += z;
	this->meshNode->setPosition(_nodePosition_);
}
