//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSURLSessionDelegate-Protocol.h>

@class NSDictionary, NSObject, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

@interface HMDServerBag : HMFObject <NSURLSessionDelegate>
{
    _Bool _refreshing;
    NSDictionary *_dictionaryRepresentation;
    unsigned long long _environment;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSURLSession *_urlSession;
}

+ (id)defaultServerBag;
+ (void)initialize;
+ (id)activationHostnameURLOverride;
+ (id)activationCertificateHostnameURLOverride;
+ (id)serverBagURLForEnvironment:(unsigned long long)arg1;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned long long environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleServerBagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_synchronizeWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double accessoryReportTimeout;
@property(readonly, copy, nonatomic) NSURL *accessoryReportURL;
@property(readonly, copy, nonatomic) NSURL *activationCertificateHostnameURL;
@property(readonly, copy, nonatomic) NSURL *activationHostnameURL;
@property(copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)_loadDefaultBag;
- (id)initWithEnvironment:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

