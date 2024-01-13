#ifndef _DEBUG
#pragma comment(linker, "/SUBSYSTEM:windows")
#include <Windows.h>
#endif
#include <irrlicht.h>
#ifdef _MSC_VER
#pragma comment(lib, "Irrlicht.lib")
#endif
#include "Renderer.h"
#include "Scene.h"
#include "Camera.h"
#include "Component.h"
using namespace irr;
#ifdef _DEBUG
#include <iostream>
int main(){
#else
int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
#endif
	Renderer renderSys = Renderer();
	Component ninja = Component(&renderSys, "c:/media/ninja.b3d", "c:/media/nskinrd.jpg");
	Camera camera = Camera(&renderSys);
	Scene demoScene = Scene(&renderSys);
	demoScene.AddComponent(&ninja);
	demoScene.AddComponent(&camera);
	while (renderSys.IsOpen()){
		renderSys.Update();
	}
	renderSys.Close();
	return 0;
}