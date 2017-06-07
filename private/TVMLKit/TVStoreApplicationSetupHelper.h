//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/ISURLOperationDelegate-Protocol.h>

@class IKURLBagCache, NSString, NSURL;

@interface TVStoreApplicationSetupHelper : NSObject <ISURLOperationDelegate>
{
    NSURL *_defaultBootURL;
    IKURLBagCache *_bagCache;
    CDUnknownBlockType _loadBagOperationCompletion;
}

+ (id)_parsedQueryParametersForURL:(id)arg1;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType loadBagOperationCompletion; // @synthesize loadBagOperationCompletion=_loadBagOperationCompletion;
@property(readonly, nonatomic) IKURLBagCache *bagCache; // @synthesize bagCache=_bagCache;
@property(copy, nonatomic) NSURL *defaultBootURL; // @synthesize defaultBootURL=_defaultBootURL;
- (void).cxx_destruct;
- (id)_bootURLWithBagBootURL:(id)arg1;
- (void)_cancelLoadURLBagOperation:(id)arg1;
- (void)obtainBootURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)dealloc;
- (id)initWithDefaultBootURL:(id)arg1 bagCache:(id)arg2;
- (id)initWithDefaultBootURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

