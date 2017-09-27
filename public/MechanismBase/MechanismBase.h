//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MechanismContext, NSDictionary, NSMutableDictionary;

@interface MechanismBase : NSObject
{
    CDUnknownBlockType _replyToRun;
    MechanismContext *_mechanismContext;
    NSDictionary *_eventProcessing;
    NSMutableDictionary *_hints;
    _Bool _precedesUI;
    _Bool _restartable;
    NSDictionary *_internalOptions;
    long long _policy;
    NSDictionary *_policyOptions;
    NSDictionary *_activationParams;
    id <LAUIDelegate> _eventsDelegate;
    id <LAContextExternalizationProt> _cachedExternalizationDelegate;
    long long _eventIdentifier;
    long long _remoteViewController;
    CDUnknownBlockType _showUIBlock;
    MechanismBase *_companion;
    MechanismBase *_parent;
}

@property(readonly, nonatomic, getter=isRestartable) _Bool restartable; // @synthesize restartable=_restartable;
@property(nonatomic) __weak MechanismBase *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) MechanismBase *companion; // @synthesize companion=_companion;
@property(copy, nonatomic) CDUnknownBlockType showUIBlock; // @synthesize showUIBlock=_showUIBlock;
@property(readonly, nonatomic) _Bool precedesUI; // @synthesize precedesUI=_precedesUI;
@property(readonly, nonatomic) long long remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(readonly, nonatomic) long long eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
@property(readonly, nonatomic) __weak id <LAContextExternalizationProt> cachedExternalizationDelegate; // @synthesize cachedExternalizationDelegate=_cachedExternalizationDelegate;
@property(nonatomic) __weak id <LAUIDelegate> eventsDelegate; // @synthesize eventsDelegate=_eventsDelegate;
@property(retain, nonatomic) NSDictionary *activationParams; // @synthesize activationParams=_activationParams;
@property(readonly, nonatomic) NSDictionary *policyOptions; // @synthesize policyOptions=_policyOptions;
@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) NSDictionary *internalOptions; // @synthesize internalOptions=_internalOptions;
- (void).cxx_destruct;
- (void)subMechanismCanRestart:(id)arg1;
- (void)prepareForRestart;
- (void)companionStateChanged:(id)arg1 newState:(_Bool)arg2;
- (void)restartWithEventIdentifier:(long long)arg1;
- (id)externalizedContext;
- (id)additionalControllerInternalInfo;
- (void)setCredential:(id)arg1 credentialType:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)requiresRemoteViewControllerUiWithEventProcessing:(id)arg1;
- (_Bool)requiresUiWithEventProcessing:(id)arg1;
- (_Bool)isProcessedBy:(id)arg1;
- (id)adjustStringForNestedDescription:(id)arg1;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)noResponseEventWithParams:(id)arg1;
- (id)availabilityEventsForPurpose:(long long)arg1;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (long long)remoteViewControllerForEventProcessing:(id)arg1;
- (id)backgroundMechanismForEventProcessing:(id)arg1;
- (id)findMechanismToRetryWithEventIdentifier:(long long)arg1;
- (id)findMechanismWithEventIdentifier:(long long)arg1;
- (id)bestEffortAvailableMechanismForPurpose:(long long)arg1 error:(id *)arg2;
- (void)cancelAuthentication;
- (void)failAuthenticationWithError:(id)arg1;
- (void)succeedAuthenticationWithDefaultResult;
- (void)succeedAuthenticationWithResult:(id)arg1;
- (void)willFinish;
- (void)finishRunWithResult:(id)arg1 error:(id)arg2 skipReply:(_Bool)arg3;
- (void)finishRunWithResult:(id)arg1 error:(id)arg2;
- (void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)isAvailableForPurpose:(long long)arg1 error:(id *)arg2;
- (id)initWithEventIdentifier:(long long)arg1 remoteViewController:(long long)arg2 cachedExternalizationDelegate:(id)arg3;
- (id)initWithParams:(id)arg1;

@end

