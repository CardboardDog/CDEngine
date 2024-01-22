#pragma once
#include <irrlicht.h>
using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;
class Renderer{
private:
	u32 lastTimer = 0;
	u32 deltaTimer = 0;
protected:
	IrrlichtDevice* device = nullptr;
#ifdef _DEBUG
	IGUIStaticText* debugPointer = nullptr;
#endif
public:
	float deltaTime = 0.0f;
	ISceneManager* sceneManager = nullptr;
	IVideoDriver* driver = nullptr;
	IGUIEnvironment* guiEnvironment = nullptr;
	Renderer();
	bool IsOpen();
	void Update();
	void Close();
};

