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
	camera->cameraComponent = sceneRenderer->sceneManager->addCameraSceneNode(0, vector3df(0, 0, 40), vector3df(0, 0, 0));
	camera->cameraComponent->bindTargetAndRotation(true);
}

void Scene::SetSkybox(stringw textureA, stringw textureB, stringw textureC, stringw textureD, stringw textureE, stringw textureF){
	this->sceneRenderer->driver->setTextureCreationFlag(ETCF_CREATE_MIP_MAPS, false);
	this->sceneRenderer->sceneManager->addSkyBoxSceneNode(this->sceneRenderer->driver->getTexture(path(textureA)), this->sceneRenderer->driver->getTexture(path(textureB)), this->sceneRenderer->driver->getTexture(path(textureC)), this->sceneRenderer->driver->getTexture(path(textureD)), this->sceneRenderer->driver->getTexture(path(textureE)), this->sceneRenderer->driver->getTexture(path(textureF)));
}
