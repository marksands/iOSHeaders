//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>, NSString;

@interface ADBackgroundTaskRequest : NSObject
{
    NSObject<OS_xpc_object> *_criteria;
    NSString *_requestIdentifier;
}

@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (void).cxx_destruct;
- (id)getPropertyAsDate:(id)arg1;
- (void)setPropertyAsDate:(id)arg1 value:(id)arg2;
- (double)getPropertyAsDouble:(id)arg1;
- (void)setPropertyAsDouble:(id)arg1 value:(double)arg2;
- (long long)getPropertyAsInteger:(id)arg1;
- (void)setPropertyAsInteger:(id)arg1 value:(long long)arg2;
- (id)getPropertyAsString:(id)arg1;
- (void)setPropertyAsString:(id)arg1 value:(id)arg2;
- (id)dictionaryRepresentation;
- (id)description;
- (id)copyBackgroundTaskAgentCriteria;
@property(nonatomic) long long delay;
@property(retain, nonatomic) NSString *priority;
@property(nonatomic) long long gracePeriod;
@property(nonatomic) long long backgroundTaskRetryCount;
@property(nonatomic) _Bool requiresNetworkConnectivity;
@property(nonatomic) _Bool isRepeating;
@property(nonatomic) _Bool requireSleep;
@property(nonatomic) _Bool allowBattery;
- (id)initWithCriteria:(id)arg1 andID:(id)arg2;
- (id)initWithID:(id)arg1;

@end

