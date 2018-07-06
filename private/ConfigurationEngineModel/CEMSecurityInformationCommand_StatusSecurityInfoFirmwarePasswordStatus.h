//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase
{
    NSNumber *_statusPasswordExists;
    NSNumber *_statusChangePending;
    NSNumber *_statusAllowOroms;
}

+ (id)buildRequiredOnly;
+ (id)buildWithPasswordExists:(id)arg1 withChangePending:(id)arg2 withAllowOroms:(id)arg3;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSNumber *statusAllowOroms; // @synthesize statusAllowOroms=_statusAllowOroms;
@property(copy, nonatomic) NSNumber *statusChangePending; // @synthesize statusChangePending=_statusChangePending;
@property(copy, nonatomic) NSNumber *statusPasswordExists; // @synthesize statusPasswordExists=_statusPasswordExists;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

