//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAURLSession;

@interface AARemoteServer : NSObject
{
    AAURLSession *_session;
}

+ (id)newSigningSessionWithError:(id *)arg1;
+ (id)sharedSession;
- (void).cxx_destruct;
- (id)_newURLRequestWithURLString:(id)arg1;
- (void)_startRequest:(id)arg1 responseClass:(Class)arg2 mainThread:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)_redactedBodyStringWithPropertyList:(id)arg1;
- (id)_bodyDictionaryWithProtocolVersion:(id)arg1;
- (void)loginDelegates:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerAccount:(id)arg1 withHSA:(_Bool)arg2 usingCookieHeaders:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerAccount:(id)arg1 withHSA:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchServerConfigWithContext:(long long)arg1 cachePolicy:(long long)arg2 responseClass:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchServerConfigForBuddyWithCachePolicy:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchServerConfigForSettingsWithCachePolicy:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

