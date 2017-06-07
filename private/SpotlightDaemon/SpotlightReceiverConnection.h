//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSArray, NSMutableSet, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SpotlightReceiverConnection : CSXPCConnection
{
    NSMutableSet *_positiveSet;
    NSMutableSet *_negativeSet;
    // Error parsing type: AB, name: _disabled
    _Bool _wantsHTML;
    _Bool _wantsText;
    _Bool _setupComplete;
    int _supportedJobs;
    // Error parsing type: AI, name: _requestCount
    NSSet *_bundleIDs;
    NSArray *_contentTypes;
    NSSet *_INIntentClassNames;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_senderQueue;
    NSObject<OS_dispatch_semaphore> *_setupSemaphore;
}

+ (void)setup;
@property(retain) NSObject<OS_dispatch_semaphore> *setupSemaphore; // @synthesize setupSemaphore=_setupSemaphore;
@property(nonatomic) _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(nonatomic) _Bool wantsText; // @synthesize wantsText=_wantsText;
@property(nonatomic) _Bool wantsHTML; // @synthesize wantsHTML=_wantsHTML;
// Error parsing type for property requestCount:
// Property attributes: TAI,R,N,V_requestCount

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *senderQueue; // @synthesize senderQueue=_senderQueue;
@property(readonly, nonatomic) int supportedJobs; // @synthesize supportedJobs=_supportedJobs;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) NSSet *INIntentClassNames; // @synthesize INIntentClassNames=_INIntentClassNames;
@property(readonly, nonatomic) NSArray *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(readonly, nonatomic) NSSet *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void).cxx_destruct;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4;
- (void)deleteFromBundle:(id)arg1;
- (void)deleteFromBundle:(id)arg1 sinceDate:(id)arg2;
- (void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)purgeFromBundle:(id)arg1 identifiers:(id)arg2;
- (void)deleteFromBundle:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteFromBundle:(id)arg1 contentType:(id)arg2 identifiers:(id)arg3;
- (void)deleteFromBundle:(id)arg1 encodedIdentifiers:(id)arg2;
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4;
- (void)runOnSenderQueue:(CDUnknownBlockType)arg1;
- (void)receiverRequestComplete;
- (void)receiverRequestStart;
@property(readonly, nonatomic) _Bool unresponsive;
- (_Bool)canRun;
- (void)enableReceiver;
- (void)disableReceiver;
- (_Bool)_wantsContentType:(id)arg1;
- (_Bool)_wantsBundleID:(id)arg1;
- (id)initWithServiceName:(id)arg1 clientID:(long long)arg2 wantsText:(_Bool)arg3 wantsHTML:(_Bool)arg4;
- (void)startSetup;
- (void)handleError:(id)arg1;
- (void)setupComplete:(_Bool)arg1;
- (void)invalidationHandler;

@end

