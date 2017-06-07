//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLModelWeights, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLLogRegTrackerProtocol, PMLNoiseStrategy;

@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    id <PMLLogRegTrackerProtocol> _tracker;
    id <PMLNoiseStrategy> _noiseStrategy;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _maxSessionsLimit;
    unsigned long long _sessionsInBatch;
    unsigned long long _currentServerIteration;
    PMLModelWeights *_currentModelWeights;
    unsigned long long _localGradientIterations;
    float _localLearningRate;
    _Bool _useOnlyAppleInternalSessions;
    double _skew;
    _Bool _isMultiLabel;
    unsigned long long _positiveLabel;
    _Bool _isSynchronous;
    _Bool _intercept;
    struct NSString *_planId;
}

@property(readonly, nonatomic) _Bool intercept; // @synthesize intercept=_intercept;
@property(readonly, nonatomic) unsigned long long positiveLabel; // @synthesize positiveLabel=_positiveLabel;
@property(readonly, nonatomic) _Bool isMultiLabel; // @synthesize isMultiLabel=_isMultiLabel;
@property(readonly, nonatomic) _Bool useOnlyAppleInternalSessions; // @synthesize useOnlyAppleInternalSessions=_useOnlyAppleInternalSessions;
@property(readonly, nonatomic) unsigned long long localGradientIterations; // @synthesize localGradientIterations=_localGradientIterations;
@property(readonly, nonatomic) float localLearningRate; // @synthesize localLearningRate=_localLearningRate;
@property(readonly, nonatomic) PMLModelWeights *currentModelWeights; // @synthesize currentModelWeights=_currentModelWeights;
@property(readonly, nonatomic) unsigned long long maxSessionsLimit; // @synthesize maxSessionsLimit=_maxSessionsLimit;
@property(readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
@property(readonly, nonatomic) unsigned long long currentServerIteration; // @synthesize currentServerIteration=_currentServerIteration;
@property(readonly, nonatomic) id <PMLLogRegTrackerProtocol> tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) PMLTrainingStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) _Bool isSynchronous; // @synthesize isSynchronous=_isSynchronous;
@property(readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
- (void).cxx_destruct;
- (id)copyWithNewWeights:(id)arg1;
- (void)runUntilDoneForTesting;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
@property(readonly, copy) NSString *description;
- (id)normalizeRegressor:(id)arg1;
- (void)loadSessionsSince:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)train;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString *)arg4 isSynchronous:(_Bool)arg5 sessionDescriptor:(id)arg6 maxSessionsLimit:(unsigned long long)arg7 sessionsInBatch:(unsigned long long)arg8 currentServerIteration:(unsigned long long)arg9 currentModelWeights:(id)arg10 localLearningRate:(float)arg11 localGradientIterations:(unsigned long long)arg12 useOnlyAppleInternalSessions:(_Bool)arg13 skew:(double)arg14 isMultiLabel:(_Bool)arg15 intercept:(_Bool)arg16 positiveLabel:(unsigned long long)arg17;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString *)arg4 isSynchronous:(_Bool)arg5 sessionDescriptor:(id)arg6 currentServerIteration:(unsigned long long)arg7 currentModelWeights:(id)arg8 useOnlyAppleInternalSessions:(_Bool)arg9 skew:(double)arg10 isMultiLabel:(_Bool)arg11 positiveLabel:(unsigned long long)arg12;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

