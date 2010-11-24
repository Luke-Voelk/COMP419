#ifndef _UTIL_H_
#define _UTIL_H_

#define TO_RADIANS(X) (X * (PI / 180.0f))

#include "IwGx.h"
#include "IwGeom.h"

#include "game.h"

void renderImageWorldSpace(CIwFVec2 position, float angle, float scaleFactor, int textureSize, float worldRot = 0.0, int frameNumber = 0, int numFrames = 1);

/**
 * Converts a 2-Float vector from cartesian coordinates to polar coordinates.
 * The x component represents the radius.
 * The y component represents the theta.
 */
void polarize(CIwFVec2& v);
CIwFVec2 *worldify(int32 x, int32 y, Game *game);

#endif