//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "NCNotificationDispatcherSourceDelegate.h"
#import "NCNotificationSource.h"

@class BBObserver, NCNotificationDispatcher, NSMutableDictionary, NSString;

@interface NCBulletinNotificationSource : NSObject <BBObserverDelegate, NCNotificationDispatcherSourceDelegate, NCNotificationSource>
{
    BBObserver *_observer;
    NCNotificationDispatcher *_dispatcher;
    NSMutableDictionary *_sectionInfoById;
    NSMutableDictionary *_bulletinFeeds;
}

@property(retain, nonatomic) NSMutableDictionary *bulletinFeeds; // @synthesize bulletinFeeds=_bulletinFeeds;
@property(retain, nonatomic) NSMutableDictionary *sectionInfoById; // @synthesize sectionInfoById=_sectionInfoById;
@property(retain, nonatomic) NCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) BBObserver *observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (unsigned long long)_updateFeedForCoverSheetDestination:(unsigned long long)arg1 storedFeed:(unsigned long long)arg2;
- (id)_sectionInfoForBulletin:(id)arg1;
- (id)_bulletinsPerSectionIdForNotificationRequests:(id)arg1;
- (void)_applicationIconChanged:(id)arg1;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 removeSection:(id)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithDispatcher:(id)arg1 observer:(id)arg2;
- (id)initWithDispatcher:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

