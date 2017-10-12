//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LAUIDelegate.h"

@class LAContext, NSHashTable, NSMapTable, NSMutableOrderedSet;

@interface _SFAuthenticationContext : NSObject <LAUIDelegate>
{
    LAContext *_context;
    id <_SFAuthenticationClient> _currentClientBeingAuthenticated;
    NSHashTable *_clients;
    NSMutableOrderedSet *_clientsAwaitingAuthentication;
    NSMapTable *_clientsAwaitingAuthenticationToCompletionBlocks;
    double _authenticationGracePeriod;
    double _lastAuthenticatedSessionStartTime;
    double _lastAuthenticatedSessionEndTime;
    double _lastApplicationBackgroundTime;
    _Bool _successfullyAuthenticated;
    _Bool _authenticationInvalidated;
    _Bool _ongoingAuthenticationCanceled;
    int _notificationToken;
    _Bool _matchFound;
    _Bool _fingerDetectRequired;
    unsigned long long _numberOfBiometricAuthenticationFailures;
    id <_SFAuthenticationContextDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFAuthenticationContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTouchIDEventWithParameters:(id)arg1;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_cancelOngoingAuthentication;
- (void)_cancelOngoingAndPendingAuthentications;
- (void)_invalidateAuthentication;
- (_Bool)_canInvalidateAuthentication;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)invalidateClient:(id)arg1;
- (void)preemptOngoingAuthenticationWithPasccodeAuthentication;
- (void)_evaluatePolicyForClient:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)authenticateForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processNextClientAwaitingAuthentication;
- (_Bool)authenticateWithNoPromptForClient:(id)arg1;
- (_Bool)_biometricProtectionEnabled;
- (_Bool)_contextShouldAllowMultipleBiometricFailures;
- (_Bool)_contextShouldAllowPasscodeFallback;
- (_Bool)_contextRequiresSessionBasedAuthentication;
@property(readonly, nonatomic) _Bool needsAuthentication;
- (_Bool)_hasAuthenticationCapability;
- (_Bool)_monotonicTimeIsWithinAuthenticationGracePeriod:(double)arg1;
- (id)_authenticationContext;
- (void)dealloc;
- (id)init;

@end
