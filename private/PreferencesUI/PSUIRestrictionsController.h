//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSMutableArray, PSSpecifier, UISwitch;

@interface PSUIRestrictionsController : PSListController
{
    UISwitch *_delayedSwitch;
    _Bool _delayedValue;
    PSSpecifier *_iBooksSpecifier;
    PSSpecifier *_iBooksExplicitSpecifier;
    _Bool _isObservingFaceTimeChanges;
    NSMutableArray *_mcRestrictionFeatures;
}

+ (_Bool)requiresPIN;
+ (void)formatSearchEntries:(id)arg1 parent:(id)arg2;
@property(retain, nonatomic) NSMutableArray *mcRestrictionFeatures; // @synthesize mcRestrictionFeatures=_mcRestrictionFeatures;
- (void).cxx_destruct;
- (_Bool)_isSignedInToStore;
- (_Bool)_mesaIsEnabledForStore;
- (id)contentRestriction:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (id)countryCodes;
- (id)currentCountryCode;
- (void)setCountryCode:(id)arg1 reload:(_Bool)arg2;
- (id)contentRatingsForMediaType:(id)arg1;
- (id)iBooksExplicitEnabledString:(id)arg1;
- (void)setExplicitEnabled:(id)arg1;
- (id)explicitEnabled;
- (id)explicitEnabledString;
- (id)localizedContentRestrictionStringForRank:(id)arg1 mediaType:(id)arg2;
- (id)currentCountryString:(id)arg1;
- (id)localizedStringForiTunesStorePasswordDefaultTimeout;
- (id)specifiers;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (void)localizedRestrictionSourceDescriptionChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)_observeFaceTimeChanges:(_Bool)arg1;
- (void)profileNotification:(id)arg1;
- (void)_handleExternalApplicationChange;
- (void)updateToggleStateAndReload;
- (void)updateToggleState;
- (void)_configureIfGreenTeaDevice;
- (void)_setSettingsRestrictedByString;
- (id)_mcRestrictionFeaturesFromSpecifiers:(id)arg1;
- (void)revertRestrictionPrefsIfNeeded;
- (id)capabilityEnabled:(id)arg1;
- (void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2;
- (id)siriContentRestrictionState:(id)arg1;
- (_Bool)siriContentRestrictionsLockedDown;
- (id)webContentRestrictionState:(id)arg1;
- (id)featureValue:(id)arg1;
- (_Bool)featureRestricted:(id)arg1;
- (void)setFeatureValue:(id)arg1 specifier:(id)arg2;
- (void)setReversedBoolFeatureValue:(id)arg1 specifier:(id)arg2;
- (id)reversedBoolFeatureValue:(id)arg1;
- (void)_handleFaceTimeConferenceStateChanged;
- (void)_disableFaceTimeRestrictions;
- (void)_disableSpecifier:(id)arg1;
- (_Bool)_isInConference;
- (_Bool)_isiTunesUInstalled;
- (_Bool)_isPodcastsInstalled;
- (_Bool)_isiBooksInstalled;

@end

