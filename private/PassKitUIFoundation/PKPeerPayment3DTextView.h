//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKMotionManagerClientProtocol.h"

@class NSString, SCNMaterial, SCNNode, SCNPlane, SCNView;

@interface PKPeerPayment3DTextView : UIView <PKMotionManagerClientProtocol>
{
    SCNView *_sceneView;
    SCNMaterial *_textMaterial;
    SCNPlane *_wallGeometry;
    SCNNode *_lightNode;
    SCNNode *_textContainerNode;
    // Error parsing type: , name: _lastRollPitch
    double _sceneWidthUnits;
    unsigned long long _renderStyle;
    NSString *_text;
}

+ (id)_sharedMotionManager;
+ (id)supportedCharacterSet;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long renderStyle; // @synthesize renderStyle=_renderStyle;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setRollPitch: /* Error: Ran out of types for this method. */;
- (_Bool)setText:(id)arg1;
- (void)layoutSubviews;
- (void)updateSceneWidthUnits;
- (id)initWithFrame:(struct CGRect)arg1 renderStyle:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

