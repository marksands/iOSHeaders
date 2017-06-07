//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBAssertionDelegate-Protocol.h>

@class BBGuaranteedOnceCache, BBObserverServerProxy, NSMapTable, NSMutableDictionary, NSString;
@protocol BBObserverDelegate, OS_dispatch_queue;

@interface BBObserver : NSObject <BBAssertionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_sectionParametersBySectionID;
    NSMapTable *_bulletinLifeAssertions;
    NSMutableDictionary *_remainingFeedsByBulletinID;
    BBObserverServerProxy *_serverProxy;
    _Bool _isGateway;
    NSMutableDictionary *_attachmentUUIDsForBulletinID;
    BBGuaranteedOnceCache *_cachedDataForAttachmentUUID;
    BBGuaranteedOnceCache *_cachedComposedImageForAttachmentUUID;
    BBGuaranteedOnceCache *_cachedComposedImageSizeForAttachmentUUID;
    id <BBObserverDelegate> _delegate;
    unsigned long long _observerFeed;
    NSString *_gatewayName;
    unsigned long long _gatewayPriority;
}

+ (id)observerWithQueue:(id)arg1 calloutQueue:(id)arg2 forGatewayName:(id)arg3;
+ (id)gatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long gatewayPriority; // @synthesize gatewayPriority=_gatewayPriority;
@property(readonly, copy, nonatomic) NSString *gatewayName; // @synthesize gatewayName=_gatewayName;
@property(nonatomic) unsigned long long observerFeed; // @synthesize observerFeed=_observerFeed;
@property(nonatomic) __weak id <BBObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)removeSection:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionOrder:(id)arg1;
- (void)updateSectionOrderRule:(id)arg1;
- (void)_queue_updateRemoveBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_queue_updateModifyBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_queue_updateAddBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_queue_updateBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_prewarmSectionParametersAndAttachmentsForBulletin:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateBulletin:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_queue_serverProxy:(id)arg1 connectionStateDidChange:(_Bool)arg2;
- (void)serverProxy:(id)arg1 connectionStateDidChange:(_Bool)arg2;
- (void)_queue_registerBulletin:(id)arg1 withTransactionID:(unsigned long long)arg2;
- (void)assertionExpired:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)_queue_setCachedComposedImageSize:(id)arg1 forAttachment:(id)arg2 bulletin:(id)arg3;
- (id)_queue_cachedComposedImageSizeForAttachment:(id)arg1;
- (_Bool)_queue_hasCachedComposedImageSizeForAttachment:(id)arg1;
- (struct CGSize)cachedComposedImageSizeForBulletin:(id)arg1 attachment:(id)arg2;
- (void)_queue_setCachedComposedImage:(id)arg1 forAttachment:(id)arg2 bulletin:(id)arg3;
- (id)_queue_cachedComposedImageForAttachment:(id)arg1;
- (_Bool)_queue_hasCachedComposedImageForAttachment:(id)arg1;
- (id)cachedComposedImageForBulletin:(id)arg1 attachment:(id)arg2;
- (void)_queue_setCachedData:(id)arg1 forAttachment:(id)arg2 bulletin:(id)arg3;
- (id)_queue_cachedDataForAttachment:(id)arg1;
- (_Bool)_queue_hasCachedDataForAttachment:(id)arg1;
- (void)_queue_cleanupAttachmentCacheForBulletinID:(id)arg1;
- (void)_queue_associateAttachment:(id)arg1 withBulletin:(id)arg2;
- (void)_getComposedImageSizeIgnoringCacheForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getComposedImageSizeForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_getComposedImageIgnoringCacheForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getComposedImageForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_getDataIgnoringCacheForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getDataForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getParametersForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)parametersForSectionID:(id)arg1;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned long long)arg3;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2;
- (void)clearBulletins:(id)arg1 inSection:(id)arg2;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)clearSection:(id)arg1;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendResponse:(id)arg1;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getBulletinsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPrivilegedSenderTypesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAlertBehaviorOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestNoticesBulletinsForAllSections;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)requestListBulletinsForSectionID:(id)arg1;
- (void)getSortDescriptorsForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForActiveSectionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionOrderRuleWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
- (void)_queue_invalidate;
- (void)invalidate;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(_Bool)arg5 connection:(id)arg6;
- (id)_initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(_Bool)arg5;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2;
- (void)getPrimaryAttachmentDataForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getAttachmentImageForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned long long)arg3;
- (id)initWithQueue:(id)arg1 forGateway:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

