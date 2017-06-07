//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKMotionManagerClientProtocol-Protocol.h>

@class NSString, SCNMaterial, SCNNode, SCNPlane, SCNView;

@interface PKPeerPayment3DTextView : UIView <PKMotionManagerClientProtocol>
{
    SCNView *_sceneView;
    SCNMaterial *_textMaterial;
    SCNPlane *_wallGeometry;
    SCNNode *_lightNode;
    SCNNode *_textContainerNode;
    // Error parsing type: , name: _lastRollPitch
    unsigned long long _renderStyle;
    NSString *_text;
}

+ (id)supportedCharacterSet;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long renderStyle; // @synthesize renderStyle=_renderStyle;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setRollPitch: /* Error: Ran out of types for this method. */;
- (_Bool)setText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 renderStyle:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

