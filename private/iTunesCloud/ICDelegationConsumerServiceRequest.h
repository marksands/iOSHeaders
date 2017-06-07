//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRequestContext, NSDictionary;

@interface ICDelegationConsumerServiceRequest : NSObject
{
    ICRequestContext *_requestContext;
    double _timeoutInterval;
    NSDictionary *_userIdentityDelegationAccountUUIDs;
}

@property(readonly, copy, nonatomic) NSDictionary *userIdentityDelegationAccountUUIDs; // @synthesize userIdentityDelegationAccountUUIDs=_userIdentityDelegationAccountUUIDs;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, copy, nonatomic) ICRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (void).cxx_destruct;
- (id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1 requestContext:(id)arg2 timeoutInterval:(double)arg3;

@end

