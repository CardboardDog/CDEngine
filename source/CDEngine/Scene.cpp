#include "Scene.h"
Scene::Scene(Renderer* renderer){
	this->sceneRenderer = renderer;
}
void Scene::AddComponent(Component* component){
	component->meshNode = this->sceneRenderer->sceneManager->addAnimatedMeshSceneNode(component->componentMesh);
	if(component->meshNode){
		component->meshNode->setMaterialFlag(EMF_LIGHTING, false);
		component->meshNode->setMaterialTexture(0, sceneRenderer->driver->getTexture(component->materialPath));
	}
}
void Scene::AddComponent(Camera* camera){
	camera->cameraComponent = sceneRenderer->sceneManager->addCameraSceneNode(0, vector3df(10, 0, 40), vector3df(0, 0, 0));
}
