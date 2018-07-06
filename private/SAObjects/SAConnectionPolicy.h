//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSNumber, NSString;

@interface SAConnectionPolicy : AceObject <SAAceSerializable>
{
}

+ (id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2;
+ (id)connectionPolicy;
@property(copy, nonatomic) NSNumber *timeToLive;
@property(copy, nonatomic) NSArray *routes;
@property(copy, nonatomic) NSString *policyId;
@property(copy, nonatomic) NSNumber *mptcpFallbackPort;
@property(copy, nonatomic) NSNumber *globalTimeout;
@property(nonatomic) _Bool enabled;
@property(copy, nonatomic) NSNumber *enableTcpFastOpen;
@property(copy, nonatomic) NSNumber *enableTLS13ZeroRTT;
@property(copy, nonatomic) NSNumber *enableTLS13;
@property(copy, nonatomic) NSNumber *enableOptimisticDNS;
@property(copy, nonatomic) NSNumber *disableMPTCP;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

