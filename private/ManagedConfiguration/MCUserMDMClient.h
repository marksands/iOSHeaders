//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface MCUserMDMClient : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processUserRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)processUserRequest:(id)arg1 outError:(id *)arg2;
- (id)pushToken;
- (void)simulatePush;
- (void)scheduleTokenUpdate;
- (void)_createAndStartMDMXPCConnection;
- (_Bool)supportsPerUserMDM;
- (void)dealloc;

@end

