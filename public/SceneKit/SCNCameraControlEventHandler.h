//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNEventHandler.h>

@class SCNNode, UIGestureRecognizer;

@interface SCNCameraControlEventHandler : SCNEventHandler
{
    SCNNode *_freeViewCameraNode;
    struct CGPoint _initialPoint;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]"simd"{?="columns"[4]}), name: _initialMatrix
    float _initialZoom;
    float _originalFovX;
    float _originalFovY;
    float _originalOrthoScale;
    float _zoomFactor;
    // Error parsing type: , name: _clickOrigin
    int _lastGestureFingerCount;
    _Bool _isDraggingWithOneFinger;
    float _roll;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]"simd"{?="columns"[4]}), name: _initialMatrixForRoll
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    unsigned long long _stickyAxis;
    // Error parsing type: {C3DSphere="vector"}, name: _viewedObjectSphere
    unsigned int _isViewedObjectSphereComputed:1;
    struct os_unfair_lock_s _stateLock;
    unsigned int _enabled:1;
    unsigned int _hasAutomaticCameraTarget:1;
    unsigned int _automaticCameraTargetUpToDate:1;
    unsigned int _inertia:1;
    unsigned int _didEverFocusNode:1;
    unsigned int _allowsTranslation:1;
    unsigned int _pinchShouldMoveCamera:1;
    unsigned int _alternateMode:1;
    unsigned int _upDirIsSet:1;
    unsigned int _gimbalLockMode:1;
    unsigned int _inertiaRunning:1;
    long long _browseMode;
    // Error parsing type: , name: _upDir
    struct SCNVector3 _cameraTarget;
    struct SCNVector3 _autoCameraTarget;
    float _browseScaleFactor;
    double _friction;
    struct CGPoint _totalDragWithInertia;
    struct CGPoint _inertiaVelocity;
    double _lastSimulationTime;
}

+ (struct SCNMatrix4)matrixWithNoRoll:(struct SCNMatrix4)arg1;
+     // Error parsing type: 24@0:8@16, name: frontVectorWithPointOfView:
- (void)panWithGestureRecognizer:(id)arg1;
- (void)pinchWithGestureRecognizer:(id)arg1;
- (void)rotateWithGestureRecognizer:(id)arg1;
- (void)beginGesture:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleRotation:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_translateTo:(struct CGPoint)arg1;
- (void)_rotateWithDrag:(struct CGPoint)arg1 mode:(long long)arg2 stickyAxis:(unsigned long long)arg3;
- (void)clearRoll;
- (void)_beginTranslateAtLocation:(struct CGPoint)arg1;
-     // Error parsing type: 16@0:8, name: frontVector
- (struct C3DSphere)viewedObjectSphere;
- (_Bool)computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg1 sphere:(struct C3DSphere *)arg2;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
- (void)endDraggingWithVelocity:(struct CGPoint)arg1;
- (_Bool)wantsRedraw;
- (_Bool)_3DConnexionIsPressed;
- (_Bool)_isInertiaRunning;
- (void)_setInertiaRunning:(_Bool)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (void)rotateWithVector:(long long)arg1 mode: /* Error: Ran out of types for this method. */;
- (void)_onInertiaTimer;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (void)zoomBy:(float)arg1;
- (void)zoomBy:(float)arg1 animate:(_Bool)arg2;
- (void)rotateOf:(double)arg1;
- (void)updateBrowseScaleFactor;
- (void)_resetBrowseScaleFactor;
- (double)_browseScale;
- (float)_translationCoef;
- (void)computeAutomaticTargetPoint;
- (struct SCNVector3)cameraAutomaticTargetPoint;
- (void)_switchToFreeViewCamera;
- (void)_installFreeViewCameraIfNeeded;
- (void)_prepareFreeViewCamera;
- (_Bool)_freeCameraActivated;
- (void)_resetFreeViewCamera;
- (void)activateFreeCamera;
- (void)setEnableFreeCamera:(_Bool)arg1;
@property unsigned long long stickyAxis;
- (void)focusNode:(id)arg1;
- (id)freeCamera;
@property struct SCNVector3 cameraTarget;
@property _Bool automaticCameraTarget;
- (void)invalidateCameraTarget;
@property struct SCNVector3 gimbalLockVector;
@property _Bool gimbalLockMode;
@property double friction;
@property _Bool enableInertia;
@property _Bool allowsTranslation;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
- (void)dealloc;
- (id)init;

@end

