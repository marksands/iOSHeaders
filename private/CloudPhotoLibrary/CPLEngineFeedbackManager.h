//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLEngineLibrary, NSArray, NSDate, NSMutableArray, NSURL;
@protocol CPLEngineTransportSendFeedbackTask, OS_dispatch_queue;

@interface CPLEngineFeedbackManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CPLEngineTransportSendFeedbackTask> _sendTask;
    NSMutableArray *_messagesToSend;
    NSArray *_messagesSending;
    NSDate *_lastAttemptDate;
    NSURL *_feedbackMessagesURL;
    _Bool _closed;
    CPLEngineLibrary *_engineLibrary;
}

@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
- (void).cxx_destruct;
- (void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1;
- (void)reportEndOfReset;
- (void)reportResetType:(id)arg1 reason:(id)arg2;
- (void)reportMessage:(id)arg1;
- (void)sendFeedbackToServerIfNecessary;
- (void)_sendFeedbackToServerIfNecessary;
- (void)_reallySendFeedbackToServer;
- (void)_appendMessage:(id)arg1;
- (void)_load;
- (void)_save;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;

@end
