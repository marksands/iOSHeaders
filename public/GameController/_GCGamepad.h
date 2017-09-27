//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameController/GCGamepad.h>

#import "GCNamedProfile.h"
#import "NSSecureCoding.h"

@class GCController, NSString, _GCControllerButtonInput, _GCControllerDirectionPad;

@interface _GCGamepad : GCGamepad <GCNamedProfile, NSSecureCoding>
{
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    _GCControllerDirectionPad *_dpad;
    _GCControllerButtonInput *_button0;
    _GCControllerButtonInput *_button1;
    _GCControllerButtonInput *_button2;
    _GCControllerButtonInput *_button3;
    _GCControllerButtonInput *_leftShoulder;
    _GCControllerButtonInput *_rightShoulder;
    _Bool _dpadFlippedY;
}

+ (_Bool)supportsSecureCoding;
- (id)rightShoulder;
- (id)leftShoulder;
- (id)buttonY;
- (id)buttonX;
- (id)buttonB;
- (id)buttonA;
- (id)dpad;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)valueChangedHandler;
- (id)controller;
- (void).cxx_destruct;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
@property(readonly) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(_Bool)arg2;
- (id)initWithController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

