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
	IVideoDriver* driver = nullptr;
	ISceneManager* sceneManager = nullptr;
	IGUIEnvironment* guiEnvironment = nullptr;
#ifdef _DEBUG
	IGUIStaticText* debugPointer = nullptr;
#endif
public:
	Renderer();
	bool IsOpen();
	void Update();
	void Close();
};

