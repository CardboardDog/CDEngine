#include "Camera.h"
#include <iostream>
Camera::Camera(Renderer* render){
	this->cameraRender = render;
}
void Camera::SetPosition(float x, float y, float z){
	this->cameraComponent->setPosition(vector3df(x, y, z));
}
void Camera::SetRotation(float x, float y){
	this->cameraComponent->setRotation(vector3df(x, y, 0));
}
void Camera::Rotate(float x, float y){
	vector3df _nodeRotation_ = this->cameraComponent->getRotation();
	_nodeRotation_.X += x;
	_nodeRotation_.Y += y;
	this->cameraComponent->setRotation(_nodeRotation_);
}
void Camera::Translate(float x, float y, float z){
	vector3df _nodePosition_ = this->cameraComponent->getPosition();
	_nodePosition_.X += x;
	_nodePosition_.Y += y;
	_nodePosition_.Z += z;
	this->cameraComponent->setPosition(_nodePosition_);
}
