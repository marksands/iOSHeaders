//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSyncOperation-Protocol.h>

@class NSString;

@interface MTSyncStateOperation : NSObject <MTSyncOperation>
{
    _Bool _isFromSync;
    long long _type;
    NSString *_uuid;
    long long _dataClasses;
}

+ (id)_stringForDataClasses:(long long)arg1;
+ (id)_stringForType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)operationFromMetaData:(id)arg1;
+ (id)operationWithType:(long long)arg1 dataClasses:(long long)arg2 fromSync:(_Bool)arg3;
+ (id)operationWithType:(long long)arg1 dataClasses:(long long)arg2;
@property(nonatomic) _Bool isFromSync; // @synthesize isFromSync=_isFromSync;
@property(nonatomic) long long dataClasses; // @synthesize dataClasses=_dataClasses;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToOperation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)operationMetaData;
- (id)responseOperation;
- (_Bool)requiresResponse;
- (_Bool)sendsEntireState;
- (_Bool)shouldRetry;
- (_Bool)isEquivalentToOperation:(id)arg1;
@property(readonly, nonatomic) long long priority;
- (id)initWithUUID:(id)arg1 fromSync:(_Bool)arg2 type:(long long)arg3 dataClasses:(long long)arg4;
- (id)initWithType:(long long)arg1 dataClasses:(long long)arg2 fromSync:(_Bool)arg3;
- (id)initWithType:(long long)arg1 dataClasses:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

