#include "Renderer.h"
#include <iostream>
Renderer::Renderer(){
	std::cout << "Initiated renderer" << std::endl;
	std::cout << "Defualting to DirectX 3D 9" << std::endl;
	this->device = createDevice(EDT_DIRECT3D9, dimension2d<u32>(800, 600), 32, false, false, false, 0);
	if(!this->device)std::cout << "Error creating Irrlicht DX9 Driver";
	this->device->setWindowCaption(L"CDEngine-t1d1: project unkown");
	this->driver = this->device->getVideoDriver();
	this->sceneManager = this->device->getSceneManager();
	this->guiEnvironment = this->device->getGUIEnvironment();
#ifdef _DEBUG
	this->debugPointer = this->guiEnvironment->addStaticText(L"CDEngine (debug) \nFPS: ? \ndriver: ?", rect<s32>(0, 0, 260, 32), false);
#endif
}
bool Renderer::IsOpen(){
	return this->device->run();
}
void Renderer::Update(){	
	if(this->device->isWindowActive()){
		this->driver->beginScene(true, true, SColor(255, 255, 255, 255));
		this->sceneManager->drawAll();
		this->guiEnvironment->drawAll();
		this->driver->endScene();
#ifdef _DEBUG
		stringw _fpsTempStr_ = L"CDEngine (debug) \nFPS: ";
		_fpsTempStr_ += this->driver->getFPS();
		_fpsTempStr_ += L"\nDriver: ";
		_fpsTempStr_ += this->driver->getName();
		this->debugPointer->setText(_fpsTempStr_.c_str());
#endif
	}
	else this->device->yield();
}
void Renderer::Close(){
	this->device->drop();
}
