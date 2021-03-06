#pragma once

#include "ofMain.h"
#include "baseScene.h"
#include "ofxDataBender.h"

class andyMenkmanDataBendsTif : public baseScene {
    
public:
    
    void setup();
    void update();
    void draw();

    ofxDataBender bender;

    ofParameter<int> numberOfLines;
    ofParameter<int> startLine;
};
