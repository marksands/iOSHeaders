//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NAEquatable.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@protocol MTSyncOperation <NSObject, NSSecureCoding, NSCopying, NAEquatable>
+ (id <MTSyncOperation>)operationFromMetaData:(NSDictionary *)arg1;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) NSString *uuid;
- (NSDictionary *)operationMetaData;
- (id)responseOperation;
- (_Bool)isFromSync;
- (_Bool)requiresResponse;
- (_Bool)shouldRetry;
- (_Bool)isEquivalentToOperation:(id <MTSyncOperation>)arg1;
@end

