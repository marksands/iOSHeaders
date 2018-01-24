//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMClassroomDeleteUserCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
}

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)allowedPayloadKeys;
+ (id)registeredType;
+ (id)registeredClass;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (_Bool)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (_Bool)mustBeSupervised;
@property(readonly, nonatomic) NSNumber *payloadForceDeletion;
@property(readonly, nonatomic) NSString *payloadUserName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

