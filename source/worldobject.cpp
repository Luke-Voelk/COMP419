#include "worldobject.h"

WorldObject::WorldObject(Game* game) : game(game){}

WorldObject::WorldObject(CIwFVec2 position, Game* game) : game(game) { 
    setPosition(position);
}

WorldObject::WorldObject(const WorldObject& newObj) : game(newObj.game), r(newObj.r), theta(newObj.theta) {
    setPosition(newObj.position);
}

void WorldObject::setPosition(float x, float y) {
    position = CIwFVec2(x, y);
    
    CIwFVec2 polar(position);
	polarize(polar);
	r = polar.x;
	theta = polar.y;
}

void WorldObject::setPosition(const CIwFVec2& newPosition) {
    setPosition(newPosition.x, newPosition.y);
}

CIwFVec2 WorldObject::getPosition() {
	return position; 
}

float WorldObject::getX() {
	return position.x;
}

float WorldObject::getY() {
	return position.y;
}

void WorldObject::setPolarPosition(float _r, float _theta){
	
	r = _r;
	theta = _theta;
    while(theta > 2 * PI) theta -= 2*PI;
	
	CIwFVec2 v = CIwFVec2(r, theta);
	polarToXY(v);
    
	position.x = v.x;
	position.y = v.y;
}


float WorldObject::getR() {
	return r;
}

float WorldObject::getTheta() {
	return theta;
}

Game* WorldObject::getGame() {
	return game;
}

