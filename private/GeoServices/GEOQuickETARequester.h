//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionsRequest, GEOETARequest, GEOQuickETARequest, NSString;

@interface GEOQuickETARequester : NSObject
{
    GEOQuickETARequest *_request;
    GEOETARequest *_simpleETARequest;
    GEODirectionsRequest *_directionsETARequest;
    NSString *_loggingFacility;
    int _requestMode;
}

+ (_Bool)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 withShortTrafficString:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
+ (_Bool)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) NSString *loggingFacility; // @synthesize loggingFacility=_loggingFacility;
- (void).cxx_destruct;
- (void)cancel;
- (void)calculateETAFromAPI:(_Bool)arg1 includeSummary:(_Bool)arg2 WithResponseHandler:(CDUnknownBlockType)arg3;
- (void)calculateETAFromAPI:(_Bool)arg1 WithResponseHandler:(CDUnknownBlockType)arg2;
- (void)calculateETAWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)_calculateRoutingETAWithSummary:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_calculateRoutingETAWithHandler:(CDUnknownBlockType)arg1;
- (void)_calculateSimpleETAFromAPI:(_Bool)arg1 includeSummary:(_Bool)arg2 WithHandler:(CDUnknownBlockType)arg3;
- (void)_calculateSimpleETAFromAPI:(_Bool)arg1 WithHandler:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 requestMode:(int)arg2;
- (id)initWithRequest:(id)arg1;

@end

