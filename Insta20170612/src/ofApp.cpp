#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(255);
	ofSetWindowTitle("20170612");

	this->noise_value = ofRandom(10);
	ofSetLineWidth(1);
	ofSetColor(255, 0, 0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();
	
	float x, y, z;
	float len;
	float tmp_noise_value = this->noise_value;

	ofEllipse(ofVec3f(0, 0, 0), 140, 140);

	for (float radius = 300; radius > 50; radius -= 5){
		tmp_noise_value += 0.005;
		for (float p = 0; p <= 360; p += 1) {
			x = radius * cos(p * DEG_TO_RAD);
			y = radius * sin(p * DEG_TO_RAD);

			if (ofNoise(tmp_noise_value, p * 0.05) > 0.6) {
				ofBox(ofVec3f(x, y, 0), 4);
			}
		}
	}

	this->noise_value += 0.025;

	this->cam.end();
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
