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
	Component ninja = Component(&renderSys, "c:/media/cube.obj", "c:/media/stones.jpg");
	Camera camera = Camera(&renderSys);
	Scene demoScene = Scene(&renderSys);
	demoScene.AddComponent(&ninja);
	demoScene.AddComponent(&camera);
	ninja.SetRotation(0, 0, 45);
	ninja.SetPosition(0, 0, 35);
	demoScene.SetSkybox("C:/media/irrlicht2_up.jpg", "C:/media/irrlicht2_dn.jpg", "C:/media/irrlicht2_lf.jpg", "C:/media/irrlicht2_rt.jpg", "C:/media/irrlicht2_ft.jpg", "C:/media/irrlicht2_bk.jpg");
	while (renderSys.IsOpen()){
		renderSys.Update();
		ninja.Rotate(40*renderSys.deltaTime, 0, 40*renderSys.deltaTime);
		camera.Rotate(0,10*renderSys.deltaTime);
	}
	renderSys.Close();
	return 0;
}