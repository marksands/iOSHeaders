//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyPreferences/TPSCallClassRequest.h>

#import "TPSSecureObject.h"

@class NSString;

@interface TPSCallWaitingRequest : TPSCallClassRequest <TPSSecureObject>
{
}

+ (id)unarchivedObjectClasses;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;
- (id)initWithSubscriptionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

