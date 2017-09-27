//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFIMAPConnection, MFIMAPResponse, NSMutableData, NSString;

@protocol MFIMAPConnectionDelegate <NSObject>

@optional
- (_Bool)shouldStartIdleForConnection:(MFIMAPConnection *)arg1;
- (void)willRemoveDelegation:(MFIMAPConnection *)arg1;
- (void)connectionDidDisconnect:(MFIMAPConnection *)arg1;
- (unsigned int)connectionBodyDataReadChunkSize:(MFIMAPConnection *)arg1;
- (void)connection:(MFIMAPConnection *)arg1 didFinishLoadingBodyData:(NSMutableData *)arg2 section:(NSString *)arg3;
- (void)connection:(MFIMAPConnection *)arg1 didLoadMoreBodyData:(NSMutableData *)arg2 section:(NSString *)arg3;
- (void)connection:(MFIMAPConnection *)arg1 didBeginBodyLoad:(NSMutableData *)arg2 section:(NSString *)arg3;
- (void)connection:(MFIMAPConnection *)arg1 didReceiveResponse:(MFIMAPResponse *)arg2 forCommand:(CDStruct_1f207a6d *)arg3;
- (_Bool)connection:(MFIMAPConnection *)arg1 shouldHandleUntaggedResponse:(MFIMAPResponse *)arg2 forCommand:(CDStruct_1f207a6d *)arg3;
@end

