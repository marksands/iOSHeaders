//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, GCController;

@interface GCMotion : NSObject
{
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _prevGravity;
    CDStruct_31142d93 _userAcceleration;
    struct GCQuaternion _attitude;
    struct GCQuaternion _prevAttitude;
    CDStruct_27cd59c8 _eulerAngles;
    CDStruct_27cd59c8 _prevEulerAngles;
    CDStruct_31142d93 _rotationRate;
    float _tip;
    float _tilt;
    CMMotionManager *_motionMgr;
    _Bool _linkedOnOrAfterCompassFeature;
    _Bool _motionLite;
    _Bool _compassEnabled;
    CDUnknownBlockType _valueChangedHandler;
    CDUnknownBlockType _internalValueChangedHandler;
    _Bool _emulatedMotionEnabled;
    _Bool _motionUpdatedEnabled;
    _Bool _paused;
    GCController *_controller;
}

@property(readonly, nonatomic) __weak GCController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_setRotationRate:(CDStruct_39925896)arg1;
- (void)_setAttitude:(struct GCQuaternion)arg1;
- (void)_setUserAcceleration:(CDStruct_39925896)arg1;
- (void)_setGravity:(CDStruct_39925896)arg1;
- (_Bool)_isUpdatingDeviceMotion;
- (void)_pauseMotionUpdates:(_Bool)arg1;
- (void)_stopDeviceMotionUpdates;
- (void)_startDeviceMotionUpdates;
- (_Bool)isEmulatedMicroGamepad;
- (void)setInternalValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)internalValueChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler;
- (float)_tilt;
- (float)_tip;
@property(readonly, nonatomic) CDStruct_39925896 rotationRate; // @synthesize rotationRate=_rotationRate;
@property(readonly, nonatomic) struct GCQuaternion attitude; // @synthesize attitude=_attitude;
@property(readonly, nonatomic) _Bool hasAttitudeAndRotationRate;
- (void)_setCompassEnabled:(_Bool)arg1;
@property(readonly, nonatomic) CDStruct_39925896 userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property(readonly, nonatomic) CDStruct_39925896 gravity; // @synthesize gravity=_gravity;
- (void)_setMotionLite:(_Bool)arg1;
- (id)initWithController:(id)arg1;

@end

