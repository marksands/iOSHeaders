//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICDelegationServiceConnection, ICPBDGSRequest, NSError;

@protocol ICDelegationServiceConnectionDelegate <NSObject>

@optional
- (_Bool)delegationServiceConnection:(ICDelegationServiceConnection *)arg1 didReceiveRequest:(ICPBDGSRequest *)arg2;
- (void)delegationServiceConnection:(ICDelegationServiceConnection *)arg1 didEncouterError:(NSError *)arg2;
- (void)delegationServiceConnectionDidClose:(ICDelegationServiceConnection *)arg1;
@end

