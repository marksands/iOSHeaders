//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSObject.h"

@class NSString, NSUUID;

@interface IPAEditOperation : NSObject <NSObject, NSCopying>
{
    NSUUID *_UUID;
}

+ (id)presetifyAdjustment:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)settingsDictionary;
- (void)setUUID:(id)arg1;
- (id)UUID;
- (id)autoIdentifier;
- (id)identifier;
- (_Bool)isEqualToOperation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (id)archivalRepresentation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

