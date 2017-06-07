//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSession-Protocol.h>

@class GEODataURLSession, GEODataXPCSession, NSString;
@protocol GEODataSession, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEODataSession : NSObject <GEODataSession>
{
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    id <GEODataSession> _urlSession;
    id <GEODataSession> _xpcSession;
}

+ (id)sharedDataSession;
@property(readonly, nonatomic) GEODataXPCSession *xpcSession; // @synthesize xpcSession=_xpcSession;
@property(readonly, nonatomic) GEODataURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // @synthesize sessionIsolation=_sessionIsolation;
- (void).cxx_destruct;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)manifestManager;
- (id)initWithXPCSession:(id)arg1 urlSession:(id)arg2;
- (id)init;
- (id)preferedRulesForRequest:(id)arg1;
- (_Bool)_rules_isOnlineAllowedForRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

