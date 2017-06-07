//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTServices/FTMessageDelivery.h>

#import <FTServices/APSConnectionDelegate-Protocol.h>
#import <FTServices/FTMessageQueueDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol FTMessageDeliveryAPSConnection;

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate>
{
    id <FTMessageDeliveryAPSConnection> _connection;
    Class _APSOutgoingMessageClass;
    NSMutableArray *_enabledTopics;
    NSMutableDictionary *_ftMessageMap;
    NSMutableDictionary *_startDateMap;
    NSMutableDictionary *_bodyMap;
    NSMutableDictionary *_apsMessageMap;
    NSMutableDictionary *_timerMap;
    NSMutableDictionary *_deathTimerMap;
    NSMutableDictionary *_retriesMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)maxLargeMessageSize;
- (long long)maxMessageSize;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_serverBagLoaded:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (_Bool)busy;
- (void)_dequeueIfNeeded;
- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)invalidate;
- (void)_notifyDelegateAboutError:(id)arg1 resultCode:(long long)arg2 forMessage:(id)arg3;
- (id)connection;
- (void)_powerLogEvent:(id)arg1 dictionary:(id)arg2;
- (id)_apsMessageForMessage:(id)arg1 body:(id)arg2;
- (id)_apsMessageBodyForMessage:(id)arg1;
- (void)_updateTopics;
- (id)_requiredTopics;
- (void)_messageNeedsRetry:(id)arg1;
- (void)_messageCompletelyTimedOut:(id)arg1;
- (void)_messageSendTimedOut:(id)arg1;
- (void)_messageACKTimedOut:(id)arg1;
- (void)_sendMessage:(id)arg1 ftMessage:(id)arg2;
- (void)_noteMessageSent:(id)arg1 ftMessage:(id)arg2 body:(id)arg3;
- (void)_noteMessageACKd:(id)arg1 ftMessage:(id)arg2;
- (void)_noteMessageSucceeded:(id)arg1 ftMessage:(id)arg2 error:(id)arg3 result:(id)arg4 resultCode:(long long)arg5;
- (void)_noteMessageFailed:(id)arg1 ftMessage:(id)arg2 allowRetry:(_Bool)arg3 error:(id)arg4;
- (_Bool)_fillMessageParameters:(id *)arg1 ftMessage:(id *)arg2;
- (id)_apsOutgoingMessageForFTMessage:(id)arg1;
- (id)_messageForAPSOutgoingMessage:(id)arg1;
- (id)_bodyForMessage:(id)arg1;
- (long long)_retryCountForMessage:(id)arg1;
- (id)_currentTimers;
- (id)allMessages;
- (id)_currentMessages;
- (id)_currentAPSMessages;
- (_Bool)_isBusyWithMessage:(id)arg1;
- (void)_clearMapForMessageID:(id)arg1;
- (void)_setMapForMessage:(id)arg1 apsMessage:(id)arg2 messageBody:(id)arg3 timeoutTime:(double)arg4 timeoutSelector:(SEL)arg5 retries:(id)arg6;
- (void)_invalidateDeathTimerForMessageID:(id)arg1;
- (void)_invalidateTimerForMessageID:(id)arg1;
- (void)_setEnabledTopics:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAPSConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

