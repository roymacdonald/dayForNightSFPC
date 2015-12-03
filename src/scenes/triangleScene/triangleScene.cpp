//
//  triangleScene.cpp
//  d4nSFPCRunner
//
//  Created by zach on 11/14/15.
//
//

#include "triangleScene.h"


void triangleScene::setup(){
    numTriangles.set("numTriangles", 5, 0, 100);
    parameters.add(numTriangles);
    loadCode("triangleScene/triangle.txt");
     setSceneName("triangleScene");
    
}
void triangleScene::update(){
    
}
void triangleScene::draw(){
    
    ofSetColor(255,255,255,80);

    for (int i = 0; i < numTriangles; i++){
        
        ofDrawTriangle( ofRandom(0, dimensions.width),
                   ofRandom(0, dimensions.height),
                   ofRandom(0, dimensions.width),
                   ofRandom(0, dimensions.height),
                   ofRandom(0, dimensions.width),
                   ofRandom(0, dimensions.height));
        
    }
    
    ofSetColor(255,255,255);
    
  
}

