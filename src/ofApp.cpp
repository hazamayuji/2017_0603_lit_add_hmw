#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //黒の画面を作っておきます
    ofBackground(col.set_red, col.set_green, col.set_blue);
    
    //値を入力させる処理です
    col.input_number();
    
    //けいさんがふくざつなのでやさしくおしえてくれます
    col.say_state();
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
        //複雑な計算過程を経てでた値を代入します
    ofSetColor(col.set_red, col.set_green, col.set_blue);

    //四角形をかきます
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());

    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
