//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CEMPayloadBase.h"

@class NSString;

@interface RMPCommandsRequest_RemoveCommandsItem : CEMPayloadBase
{
    NSString *_identifier;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1;
+ (id)allowedKeys;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

