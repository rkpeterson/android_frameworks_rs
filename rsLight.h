/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_LIGHT_H
#define ANDROID_LIGHT_H


#include "rsObjectBase.h"

// ---------------------------------------------------------------------------
namespace android {
namespace renderscript {


// An element is a group of Components that occupies one cell in a structure.
class Light : public ObjectBase
{
public:
    Light(bool isLocal, bool isMono);
    virtual ~Light();

    // Values, mutable after creation.
    void setPosition(float x, float y, float z);
    void setColor(float r, float g, float b);

protected:
    float mR, mG, mB;
    float mX, mY, mZ;
    bool mIsLocal;
    bool mIsMono;
};


class LightState {
public:
    LightState();
    ~LightState();

    void clear();

    bool mIsMono;
    bool mIsLocal;
};


}
}
#endif //ANDROID_LIGHT_H
