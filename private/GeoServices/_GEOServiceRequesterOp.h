//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPBSessionRequesterDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, NSArray, NSDictionary, NSNumber, NSString, PBRequest;

__attribute__((visibility("hidden")))
@interface _GEOServiceRequesterOp : NSObject <GEOPBSessionRequesterDelegate>
{
    PBRequest *_request;
    NSString *_debugRequestName;
    unsigned long long _urlType;
    NSArray *_additionalURLQueryItems;
    NSDictionary *_additionalHTTPHeaders;
    CDUnknownBlockType _completionHandler;
    GEOApplicationAuditToken *_auditToken;
    NSNumber *_serviceTypeNumber;
    double _timeout;
    long long _experimentType;
    int _experimentDispatcherRequestType;
    _Bool _shouldThrottleRequests;
    NSString *_throttleKey;
    GEOMapServiceTraits *_traits;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2 urlType:(unsigned long long)arg3 additionalURLQueryItems:(id)arg4 additionalHTTPHeaders:(id)arg5 debugRequestName:(id)arg6 serviceType:(id)arg7 experimentType:(long long)arg8 experimentDispatcherRequestType:(int)arg9 timeout:(double)arg10 shouldThrottleRequests:(_Bool)arg11 throttleKey:(id)arg12 traits:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

