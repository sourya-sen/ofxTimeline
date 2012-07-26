/**
 * ofxTimeline
 *	
 * Copyright (c) 2011 James George
 * http://jamesgeorge.org + http://flightphase.com
 * http://github.com/obviousjim + http://github.com/flightphase 
 *
 * implementaiton by James George (@obviousjim) and Tim Gfrerer (@tgfrerer) for the 
 * Voyagers gallery National Maritime Museum 
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * ----------------------
 *
 * ofxTimeline 
 * Lightweight SDK for creating graphic timeline tools in openFrameworks
 */

#pragma once
#include "ofMain.h"
#include "ofxTLBangTrack.h"
#include "ofxTextInputField.h"

class ofxTLTriggerKey : public ofxTLKeyframe {
  public:
    ofxTextInputField textField;
    ofRectangle display;
};

class ofxTLTrigger : public ofxTLBangTrack {
  public:
	ofxTLTrigger();
	~ofxTLTrigger();
	
	virtual void draw();
	
	virtual void mousePressed(ofMouseEventArgs& args);
	virtual void keyPressed(ofKeyEventArgs& args);

//	virtual string copyRequest();
//	virtual string cutRequest();
//	virtual void pasteSent(string pasteboard);
//	virtual void selectAll();
//	virtual void unselectAll();
	
protected:
    
    virtual ofxTLKeyframe* newKeyframe(ofVec2f point);
    virtual void restoreKeyframe(ofxTLKeyframe* key, ofxXmlSettings& xmlStore);
	virtual void storeKeyframe(ofxTLKeyframe* key, ofxXmlSettings& xmlStore);

//	ofxTextInputField textfield;
	bool enteringText;

//	void update(ofEventArgs& args);
//    float lastTimelinePoint;

//	void sortTriggers();
						   
//	int dragOffset;
//	Trigger* getTriggerForScreenPosition(float screenx, int& offset);
//	Trigger* selectedTrigger;
//    vector<Trigger*> selectedTriggers;
//	Trigger* hoverTrigger;
//	vector<Trigger> triggers;
    
	
	
};