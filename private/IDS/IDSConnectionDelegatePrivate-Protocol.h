//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDSConnectionDelegate.h"

@class IDSAccount, IDSConnection, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@protocol IDSConnectionDelegatePrivate <IDSConnectionDelegate>

@optional
- (void)connection:(IDSConnection *)arg1 account:(IDSAccount *)arg2 sessionInviteReceived:(NSString *)arg3 fromID:(NSString *)arg4 transportType:(NSNumber *)arg5 options:(NSDictionary *)arg6 context:(NSData *)arg7 messageContext:(id)arg8;
- (void)connection:(IDSConnection *)arg1 incomingTopLevelMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3 messageContext:(id)arg4;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 alternateCallbackID:(NSString *)arg3 willSendToDestinations:(NSArray *)arg4 skippedDestinations:(NSArray *)arg5 registrationPropertyToDestinations:(NSDictionary *)arg6;
- (void)connection:(IDSConnection *)arg1 messageIdentifier:(NSString *)arg2 alternateCallbackID:(NSString *)arg3 updatedWithResponseCode:(long long)arg4 error:(NSError *)arg5 lastCall:(_Bool)arg6 messageContext:(id)arg7;
- (void)connection:(IDSConnection *)arg1 messageIdentifier:(NSString *)arg2 alternateCallbackID:(NSString *)arg3 updatedWithResponseCode:(long long)arg4 error:(NSError *)arg5 lastCall:(_Bool)arg6;
@end

