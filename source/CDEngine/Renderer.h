#pragma once
#include <irrlicht.h>
using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;
class Renderer{
protected:
	IrrlichtDevice* device = nullptr;
#ifdef _DEBUG
	IGUIStaticText* debugPointer = nullptr;
#endif
public:
	ISceneManager* sceneManager = nullptr;
	IVideoDriver* driver = nullptr;
	IGUIEnvironment* guiEnvironment = nullptr;
	Renderer();
	bool IsOpen();
	void Update();
	void Close();
};

