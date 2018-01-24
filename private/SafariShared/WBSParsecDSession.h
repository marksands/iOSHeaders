//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARSessionDelegate.h"
#import "WBSParsecSearchSession.h"

@class GEOUserSessionEntity, NSObject<OS_dispatch_queue>, NSString, PARSession, WBSCompletionQuery, WBSParsecDFeedbackDispatcher;

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession>
{
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
    WBSParsecDFeedbackDispatcher *_feedbackDispatcher;
    GEOUserSessionEntity *_geoUserSessionEntity;
    _Bool _valid;
    _Bool _skipAutoFillDataUpdates;
    id <WBSParsecSearchSessionDelegate> _delegate;
    WBSCompletionQuery *_currentQuery;
    double _uiScale;
    PARSession *_parsecdSession;
    unsigned long long _currentQueryID;
}

+ (void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_updateAutoFillTLDsIfNeededForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)sharedCorrectionsProcessor;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedPARSession;
@property unsigned long long currentQueryID; // @synthesize currentQueryID=_currentQueryID;
@property(retain, nonatomic) PARSession *parsecdSession; // @synthesize parsecdSession=_parsecdSession;
@property(readonly, nonatomic) _Bool skipAutoFillDataUpdates; // @synthesize skipAutoFillDataUpdates=_skipAutoFillDataUpdates;
@property(nonatomic, setter=setUIScale:) double uiScale; // @synthesize uiScale=_uiScale;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) WBSCompletionQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) __weak id <WBSParsecSearchSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)arg1;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
@property(readonly, nonatomic) id <WBSParsecFeedbackDispatcher> feedbackDispatcher;
- (void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4;
- (id)initWithParsecdSession:(id)arg1 skipAutoFillDataUpdates:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

