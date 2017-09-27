//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSProtobuf;

@protocol PBBridgeGizmoProtocol <NSObject>
- (void)handleWarrantySentinelRequest:(IDSProtobuf *)arg1;
- (void)popToControllerType:(IDSProtobuf *)arg1;
- (void)pushControllerType:(IDSProtobuf *)arg1;
- (void)setPasscodeRestrictions:(IDSProtobuf *)arg1;
- (void)setLocationEnabled:(IDSProtobuf *)arg1;
- (void)enabledSiri:(IDSProtobuf *)arg1;
- (void)gotSiriState:(IDSProtobuf *)arg1;
- (void)handleActivationData:(IDSProtobuf *)arg1;
- (void)setCompanionRegion:(IDSProtobuf *)arg1;
- (void)setCompanionLanguage:(IDSProtobuf *)arg1;

@optional
- (void)companionBecameAvailableWantsConfirmation:(IDSProtobuf *)arg1;
@end

