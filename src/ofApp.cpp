#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
	gui.setup();
	gui.add(noOfRect.setup("NUMBER OF RECTANGLES", 30, 0, 100));
	gui.add(scaleOfRect.setup("SIZE OF RECTANGLE", 250, 0, 500));
	gui.add(ScaleOffset.setup("SIZE OFFSET", .9f, 0.0f, 2.0f));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	ofNoFill();
	ofSetLineWidth(2);
	ofSetRectMode(OF_RECTMODE_CENTER);
	for (int i = 0; i < noOfRect; i++) {
		ofRotateDeg(ofGetElapsedTimef());
		ofScale(ScaleOffset);
		ofDrawRectangle(0, 0, scaleOfRect, scaleOfRect);
	}
	/*ofSetRectMode(OF_RECTMODE_CENTER);
	ofDrawRectangle(0, 0, scaleOfRect, scaleOfRect);*/
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
