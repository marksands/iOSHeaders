//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCNotificationAlertDestination.h"
#import "NCNotificationAlertDestinationDelegate.h"

@class NCNotificationCollapsingQueue, NCNotificationDestinationsRegistry, NCNotificationRequest, NCNotificationStore, NSString;

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination>
{
    id <NCNotificationAlertDestinationDelegate> _delegate;
    NCNotificationDestinationsRegistry *_destinationsRegistry;
    NCNotificationCollapsingQueue *_queue;
    NCNotificationStore *_store;
    NCNotificationRequest *_coalescingRequest;
}

@property(retain, nonatomic) NCNotificationRequest *coalescingRequest; // @synthesize coalescingRequest=_coalescingRequest;
@property(retain, nonatomic) NCNotificationStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NCNotificationCollapsingQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry; // @synthesize destinationsRegistry=_destinationsRegistry;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void).cxx_destruct;
- (void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg1;
- (_Bool)_readyToReceiveForNotificationRequest:(id)arg1;
- (_Bool)_destinations:(id)arg1 canReceiveNotificationRequest:(id)arg2;
- (_Bool)_performDestinationOperationForRequest:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg1;
- (void)_postNextNotificationRequestPassingTest:(CDUnknownBlockType)arg1;
- (void)_postNextNotificationRequest;
- (void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(_Bool)arg3;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(CDUnknownBlockType)arg2;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
- (void)destination:(id)arg1 setDeliverQuietly:(_Bool)arg2 forSectionIdentifier:(id)arg3 subSectionIdentifier:(id)arg4;
- (void)destination:(id)arg1 setAllowsNotifications:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (void)setDestination:(id)arg1 ready:(_Bool)arg2;
- (id)destinationsForRequestDestinations:(id)arg1;
- (_Bool)isRegisteredDestination:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(_Bool)arg2;
- (void)unregisterDestination:(id)arg1;
- (void)registerDestination:(id)arg1;
- (id)initWithNotificationStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

