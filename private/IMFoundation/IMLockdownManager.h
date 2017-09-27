//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMLockdownManager : NSObject
{
    _Bool _settingUpActivationState;
    _Bool _isInternalInstall;
    _Bool _isCarrierInstall;
    _Bool _isNonUIInstall;
    _Bool _isVendorInstall;
    _Bool _hasShownMismatchedSIM;
    _Bool _hasShownWaitingAlertThisSession;
    unsigned long long _state;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool _hasShownWaitingAlertThisSession; // @synthesize _hasShownWaitingAlertThisSession;
@property(nonatomic) _Bool _hasShownMismatchedSIM; // @synthesize _hasShownMismatchedSIM;
@property(nonatomic) _Bool _isVendorInstall; // @synthesize _isVendorInstall;
@property(nonatomic) _Bool _isNonUIInstall; // @synthesize _isNonUIInstall;
@property(nonatomic) _Bool _isCarrierInstall; // @synthesize _isCarrierInstall;
@property(nonatomic) _Bool _isInternalInstall; // @synthesize _isInternalInstall;
@property(nonatomic) _Bool _settingUpActivationState; // @synthesize _settingUpActivationState;
- (id)description;
@property(readonly, nonatomic) NSString *uniqueDeviceIdentifier;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) _Bool isActivated;
@property(readonly, nonatomic) _Bool isCarrierInstall;
- (long long)lockdownState;
@property(readonly, nonatomic) _Bool isInternalInstall;
@property(readonly, nonatomic) _Bool isVendorInstall;
@property(readonly, nonatomic) _Bool isNonUIInstall;
- (void)_calculateInstallType;
- (void)_setupActivationState;
@property(nonatomic, setter=_setState:) unsigned long long _state; // @synthesize _state;
- (void)_resetActivationState;
- (void)dealloc;
- (id)init;

@end

