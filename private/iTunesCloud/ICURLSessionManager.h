//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ICURLSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSessions;
}

+ (id)sharedSessionManager;
- (void).cxx_destruct;
- (void)removeSessionWithIdentifier:(id)arg1;
- (void)addSession:(id)arg1 withIdentifier:(id)arg2;
- (id)sessionWithIdentifier:(id)arg1;
- (id)sessionWithConfiguration:(id)arg1;
- (id)init;

@end

