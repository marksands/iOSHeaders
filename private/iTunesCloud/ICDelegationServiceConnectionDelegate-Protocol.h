//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICDelegationServiceConnection, ICPBDGSRequest, NSError;

@protocol ICDelegationServiceConnectionDelegate <NSObject>

@optional
- (_Bool)delegationServiceConnection:(ICDelegationServiceConnection *)arg1 didReceiveRequest:(ICPBDGSRequest *)arg2;
- (void)delegationServiceConnection:(ICDelegationServiceConnection *)arg1 didEncouterError:(NSError *)arg2;
- (void)delegationServiceConnectionDidClose:(ICDelegationServiceConnection *)arg1;
@end

