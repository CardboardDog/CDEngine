#ifndef _DEBUG
#pragma comment(linker, "/SUBSYSTEM:windows")
#include <Windows.h>
#endif
#include <irrlicht.h>
#ifdef _MSC_VER
#pragma comment(lib, "Irrlicht.lib")
#endif
#include "Renderer.h"
using namespace irr;
#ifdef _DEBUG
#include <iostream>
int main(){
#else
int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
#endif
	Renderer renderSys = Renderer();
	while (renderSys.IsOpen()){
		renderSys.Update();
	}
	renderSys.Close();
}