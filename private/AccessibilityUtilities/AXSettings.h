//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, NSUUID;

@interface AXSettings : NSObject
{
    NSLock *_synchronizeDomainsLock;
    NSMutableSet *_migratedSwitchControlMenuItemsPreferenceKeys;
    NSMutableDictionary *_unarchivedVoiceCache;
    _Bool _assistiveTouchInternalOnlyHiddenNubbitModeEnabled;
    _Bool _writeAXLogsToFile;
    _Bool _voiceOverVerbositySpeakCustomActionsHint;
    float _reduceWhitePointLevel;
    double _lastPlatformSwitchTimeResetCount;
    double _lastGuidedAccessTimeLimitResetCount;
    double _lastGuidedAccessTimeResetCount;
    double _lastHearingAidControlPanelTimeResetCount;
    double _lastHearingAidHandoffTimeResetCount;
    NSMutableSet *_registeredNotifications;
    NSMutableDictionary *_synchronizeDomains;
    NSMutableDictionary *_updateBlocks;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableDictionary *synchronizeDomains; // @synthesize synchronizeDomains=_synchronizeDomains;
@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
@property(nonatomic) double lastHearingAidHandoffTimeResetCount; // @synthesize lastHearingAidHandoffTimeResetCount=_lastHearingAidHandoffTimeResetCount;
@property(nonatomic) double lastHearingAidControlPanelTimeResetCount; // @synthesize lastHearingAidControlPanelTimeResetCount=_lastHearingAidControlPanelTimeResetCount;
@property(nonatomic) double lastGuidedAccessTimeResetCount; // @synthesize lastGuidedAccessTimeResetCount=_lastGuidedAccessTimeResetCount;
@property(nonatomic) double lastGuidedAccessTimeLimitResetCount; // @synthesize lastGuidedAccessTimeLimitResetCount=_lastGuidedAccessTimeLimitResetCount;
@property(nonatomic) double lastPlatformSwitchTimeResetCount; // @synthesize lastPlatformSwitchTimeResetCount=_lastPlatformSwitchTimeResetCount;
@property(nonatomic) float reduceWhitePointLevel; // @synthesize reduceWhitePointLevel=_reduceWhitePointLevel;
@property(nonatomic) _Bool voiceOverVerbositySpeakCustomActionsHint; // @synthesize voiceOverVerbositySpeakCustomActionsHint=_voiceOverVerbositySpeakCustomActionsHint;
@property(nonatomic) _Bool writeAXLogsToFile; // @synthesize writeAXLogsToFile=_writeAXLogsToFile;
@property(nonatomic) _Bool assistiveTouchInternalOnlyHiddenNubbitModeEnabled; // @synthesize assistiveTouchInternalOnlyHiddenNubbitModeEnabled=_assistiveTouchInternalOnlyHiddenNubbitModeEnabled;
- (void).cxx_destruct;
@property(nonatomic) _Bool callAudioRoutingAutoAnswerEnabled;
@property(nonatomic) double callAudioRoutingAutoAnswerDelay;
@property(nonatomic) _Bool didResetD22Preferences;
@property(nonatomic) long long guidedAccessUsageCount;
@property(nonatomic) long long voiceOverBSIUsageCount;
@property(nonatomic) long long brokenHomeButtonCount;
@property(nonatomic) long long guidedAccessTimeLimitsUsageCount;
@property(nonatomic) long long characterVoicesUsageCount;
@property(nonatomic) long long hearingAidControlPanelCount;
@property(nonatomic) long long hearingAidHandOffCount;
@property(nonatomic) long long switchControlPlatformSwitchedCount;
@property(nonatomic) long long tapticTimeUsageCount;
@property(nonatomic) long long magnifierUsageCount;
@property(copy, nonatomic) NSDictionary *assistiveTouchUsageCount;
@property(nonatomic) double lastAssistiveTouchTimeResetCount;
@property(nonatomic) double lastCharacterVoiceTimeResetCount;
- (void)setlastPlatformSwitchTimeResetCount:(double)arg1;
- (void)setlastGuidedAccessTimeLimitResetCount:(double)arg1;
- (void)setlastGuidedAccessTimeResetCount:(double)arg1;
@property(nonatomic) double lastTapticTimeResetCount;
@property(nonatomic) double lastBrailleScreenInputTimeResetCount;
- (void)setlastHearingAidControlPanelTimeResetCount:(double)arg1;
- (void)setlastHearingAidHandoffTimeResetCount:(double)arg1;
@property(nonatomic) double lastSmartInvertColorsEnablement;
@property(nonatomic) double lastMagnifierResetCount;
@property(nonatomic) _Bool shouldLimitDisplayRefreshRate;
@property(retain, nonatomic) NSString *medicalPreamble;
@property(nonatomic) _Bool shouldTTYMedicalPreamble;
@property(nonatomic) _Bool shouldSpeakMedicalPreamble;
@property(nonatomic) _Bool shouldFlashForAlertInSilentMode;
@property(nonatomic) _Bool localizationQACaptionMode;
@property(nonatomic) _Bool localizationQACaptionShowLocalizedString;
@property(nonatomic) _Bool localizationQACaptionShowUSString;
@property(nonatomic) _Bool localizationQACaptionShowFilePath;
@property(retain, nonatomic) NSURL *alexLocalAssetURL;
@property(nonatomic) long long voiceOverSpeakSecondsEncoding;
- (id)gizmoGetWatchFaceAutoSpeakPreferences;
- (_Bool)gizmoGetAutoSpeakEnabledForComplication:(id)arg1 slot:(id)arg2 face:(id)arg3;
- (void)gizmoSetAutoSpeakEnabledForComplication:(id)arg1 slot:(id)arg2 face:(id)arg3 toggle:(_Bool)arg4;
@property(nonatomic) _Bool gizmoApplicationAccessibilityEnabled;
@property(nonatomic) _Bool appValidationTestingMode;
@property(nonatomic) double magnifierBrightness;
@property(nonatomic) double magnifierContrast;
@property(nonatomic) _Bool magnifierFilterInverted;
@property(nonatomic) unsigned long long magnifierFilterSetIdentifier;
@property(nonatomic) double magnifierZoomLevel;
@property(nonatomic) _Bool magnifierShouldUseVideoStabilization;
@property(nonatomic) _Bool magnifierShouldAdjustFiltersForAmbientLight;
@property(nonatomic) _Bool magnifierEnabled;
@property(nonatomic) _Bool stickyKeysBeepEnabled;
@property(nonatomic) _Bool stickyKeysShiftToggleEnabled;
@property(nonatomic) _Bool stickyKeysEnabled;
@property(nonatomic) double touchAccommodationsTapActivationTimeout;
@property(nonatomic) long long touchAccommodationsTapActivationMethod;
@property(nonatomic) double touchAccommodationsIgnoreRepeatDuration;
@property(nonatomic) _Bool touchAccommodationsIgnoreRepeatEnabled;
@property(nonatomic) long long touchAccommodationsHoldDurationSwipeGestureSensitivity;
@property(nonatomic) _Bool touchAccommodationsHoldDurationAllowsSwipeGesturesToBypass;
@property(nonatomic) double touchAccommodationsHoldDuration;
@property(nonatomic) _Bool touchAccommodationsHoldDurationEnabled;
@property(nonatomic) _Bool touchAccommodationsUsageConfirmed;
@property(nonatomic) _Bool touchAccommodationsTripleClickConfirmed;
@property(readonly, nonatomic) _Bool touchAccommodationsAreConfigured;
@property(nonatomic) _Bool touchAccommodationsEnabled;
- (void)_updateTouchAccommodationsTripleClickSetting;
@property(nonatomic) _Bool shouldStreamToRightAid;
@property(nonatomic) _Bool shouldStreamToLeftAid;
@property(nonatomic) _Bool allowHearingAidControlOnLockScreen;
@property(nonatomic) _Bool independentHearingAidSettings;
@property(retain, nonatomic) NSDictionary *pairedHearingAids;
@property(nonatomic) _Bool voiceOverShouldSpeakDiscoveredText;
@property(nonatomic) _Bool voiceOverTouchBrailleShowGeneralStatus;
@property(nonatomic) _Bool voiceOverTouchUpdateBrailleWithoutConnectedDisplay;
@property(nonatomic) _Bool voiceOverTouchBrailleShowTextStyleStatus;
@property(nonatomic) _Bool voiceOverTouchBrailleShouldReverseDots;
@property(nonatomic) long long voiceOverTapticTimeEncoding;
@property(nonatomic) _Bool voiceOverTapticTimeMode;
- (void)_setAudioHardwareChannelLayout:(id)arg1;
- (id)_audioHardwareChannelLayout;
@property(nonatomic) long long voiceOverNavigationDirectionMode;
@property(nonatomic) double voiceOverDoubleTapInterval;
@property(nonatomic) double voiceOverBrailleAlertDisplayDuration;
@property(nonatomic) _Bool voiceOverTouchBrailleGesturesDidPlayCalibrationHint;
@property(nonatomic) long long voiceOverTouchBrailleGesturesLockedTypingMode;
@property(nonatomic) int voiceOverTouchBrailleGesturesLockedOrientation;
@property(nonatomic) _Bool voiceOverTouchBrailleGesturesShouldUseLockedConfiguration;
@property(nonatomic) _Bool voiceOverShouldOutputToHearingAid;
- (float)voiceOverSpeakingRateForLanguage:(id)arg1;
- (void)setVoiceOverSpeakingRate:(float)arg1 forLanguage:(id)arg2;
- (id)_voiceOverTouchSpeakingRateLanguages;
- (id)voiceOverAlternativeVoiceIdentifier:(id)arg1;
- (void)setVoiceOverAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (void)clearVoicePrefersCompactSettings;
- (void)configureZoomForLoginSession;
- (void)addRotorOptionsForLoginSession;
@property(nonatomic) _Bool switchControlUserDidReadUSBRestrictedModeAlert;
@property(nonatomic) _Bool voiceOverUserDidReadUSBRestrictedModeAlert;
@property(nonatomic) _Bool switchControlShouldDisallowUSBRestrictedMode;
@property(nonatomic) _Bool voiceOverShouldDisallowUSBRestrictedMode;
@property(nonatomic) long long voiceOverDescribedMedia;
@property(nonatomic) long long voiceOverPreferredTVInteractionMode;
@property(nonatomic) _Bool voiceOverSilenceAnnouncements;
@property(nonatomic) _Bool voiceOverSpeakNonfocusableElementsAfterDelay;
@property(nonatomic) _Bool voiceOverShowSoftwareKeyboardWithBraille;
@property(nonatomic) _Bool voiceOverBrailleGradeTwoAutoTranslateEnabled;
@property(retain, nonatomic) NSNumber *voiceOverHandwritingWasNativeAutocorrectEnabled;
@property(nonatomic) _Bool voiceOverAlwaysUseNemethCodeForMathEnabled;
@property(copy, nonatomic) NSString *voiceOverBrailleTableIdentifier;
- (_Bool)_anyUserPreferredLangaugeIsRTL;
- (void)_localeChange:(id)arg1;
@property(nonatomic) _Bool voiceOverEditAppsActionEnabled;
@property(nonatomic) _Bool voiceOverSpeakActionConfirmation;
@property(copy, nonatomic) NSArray *voiceOverRotorItems;
@property(nonatomic) _Bool voiceOverSpeakNotificationsEnabled;
@property(nonatomic) _Bool voiceOverSpeakingRateInRotorEnabled;
@property(nonatomic) _Bool voiceOverSoundEffectsEnabled;
@property(nonatomic) _Bool voiceOverVerbosityEmojiSuffixEnabled;
@property(nonatomic) _Bool voiceOverPitchChangeEnabled;
@property(nonatomic) double voiceOverPitch;
@property(nonatomic) _Bool voiceOverAudioFollowsHDMIAudio;
@property(nonatomic) _Bool voiceOverAudioDuckingEnabled;
@property(nonatomic) _Bool voiceOverHintsEnabled;
@property(nonatomic) _Bool voiceOverBrailleWordWrapEnabled;
@property(readonly, nonatomic) _Bool voiceOverBrailleGesturesEnabled;
@property(readonly, nonatomic) _Bool voiceOverHandwritingEnabled;
- (_Bool)_voiceOverRotorItemEnabled:(id)arg1;
@property(nonatomic) long long voiceOverActivationWorkaround;
@property(nonatomic) long long voiceOverBrailleGesturesTypingFeedback;
@property(nonatomic) long long voiceOverSoftwareTypingFeedback;
@property(nonatomic) long long voiceOverHardwareTypingFeedback;
@property(nonatomic) long long voiceOverPhoneticsFeedback;
@property(nonatomic) long long voiceOverNavigateImagesOption;
@property(nonatomic) long long voiceOverHelpMode;
@property(nonatomic) _Bool voiceOverLargeCursorEnabled;
@property(nonatomic) _Bool voiceOverSpeakTableColumnRowInformation;
@property(nonatomic) _Bool voiceOverSpeakTableHeaders;
@property(nonatomic) _Bool voiceOverTouchSingleLetterQuickNavEnabled;
@property(nonatomic) long long voiceOverCapitalLetterFeedback;
@property(nonatomic) long long voiceOverDeletionFeedback;
@property(nonatomic) long long voiceOverLinkFeedback;
@property(nonatomic) long long voiceOverPunctuationLevel;
@property(nonatomic) _Bool voiceOverTouchBraillePanningAutoTurnsReadingContent;
@property(nonatomic) long long voiceOverTouchBrailleGesturesInputMode;
@property(nonatomic) long long voiceOverTouchBrailleDisplayOutputMode;
@property(nonatomic) long long voiceOverTouchBrailleDisplayInputMode;
@property(retain, nonatomic) NSArray *customPronunciationSubstitutions;
@property(nonatomic) struct CGPoint quickSpeakNubbitNormalizedPosition;
@property(copy, nonatomic) NSSet *downloadedSiriVoices;
- (void)_removeSpeakingRatePreferenceForLanguage:(id)arg1;
- (float)quickSpeakSpeakingRateForLanguage:(id)arg1;
- (void)setQuickSpeakSpeakingRate:(float)arg1 forLanguage:(id)arg2;
- (id)_quickSpeakSpeakingRateLanguages;
- (id)_quickSpeakAltVoices;
- (id)_quickSpeakPrefersCompact;
- (id)_voiceOverPrefersCompactByLanguage;
- (id)_voiceOverAlternativeVoiceIdentifiers;
- (id)_switchControlAltVoices;
- (id)_switchControlPrefersCompact;
- (id)_switchControlScannerDefaultDialect;
- (id)_voiceOverDefaultDialect;
- (void)_clearWhitetailMigrationSettings;
- (id)selectedSpeechVoiceIdentifiers;
- (void)setUserDidSelectVoiceForLanguage:(id)arg1 source:(long long)arg2;
- (void)setSpeechVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 source:(long long)arg3;
- (_Bool)userDidSelectVoiceForLanguage:(id)arg1 source:(long long)arg2;
- (id)speechVoiceIdentifierForLanguage:(id)arg1 source:(long long)arg2 exists:(_Bool *)arg3;
@property(nonatomic) unsigned long long quickSpeakHighlightOption;
@property(nonatomic) long long quickSpeakSentenceHighlightColor;
@property(nonatomic) long long quickSpeakWordHighlightColor;
@property(nonatomic) unsigned long long quickSpeakSentenceHighlightOption;
@property(nonatomic) float quickSpeakSpeakingRate;
@property(nonatomic) _Bool quickSpeakUnderlineSentence;
@property(nonatomic) _Bool quickSpeakHighlightText;
@property(nonatomic) float quickSpeakVolume;
@property(nonatomic) _Bool wordFeedbackEnabled;
@property(nonatomic) _Bool quickTypeWordFeedbackEnabled;
@property(nonatomic) double characterFeedbackDelayDuration;
@property(nonatomic) _Bool phoneticFeedbackEnabled;
@property(nonatomic) _Bool letterFeedbackEnabled;
@property(nonatomic) _Bool speakIncomingNotifications;
@property(nonatomic) _Bool speakCorrectionsEnabled;
@property(copy, nonatomic) NSArray *tripleClickOrderedOptions;
@property(nonatomic) _Bool classicInvertColors;
@property(retain, nonatomic) NSNumber *guidedAccessOverrideTimeRestrictionDuration;
@property(nonatomic) _Bool guidedAccessDisallowDirectInactiveToActiveTransition;
@property(nonatomic) _Bool enableHearingAidReporter;
@property(nonatomic) _Bool skipHearingAidMFiAuth;
@property(nonatomic) _Bool voiceOverHearingAidRoutingEnabled;
@property(nonatomic) long long voiceOverKeyboardModifierChoice;
@property(retain, nonatomic) NSArray *currentVoices;
@property(readonly, nonatomic) _Bool extantVoicesExist;
@property(retain, nonatomic) NSArray *extantVoices;
- (id)testingExtantVoices;
- (void)setTestingExtantVoices:(id)arg1;
- (id)_retrieveVoices:(id)arg1;
- (void)_setVoiceArray:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool didTriggerSOSToday;
- (_Bool)didTriggerSOSValueSet;
@property(nonatomic) _Bool syncPronunciationsWithCloudKit;
@property(nonatomic) _Bool enableVoiceOverCaptions;
@property(nonatomic) long long internalLoggingColorTheme;
@property(nonatomic) _Bool shouldPerformValidationsAtRuntime;
@property(nonatomic) _Bool useNewAXBundleLoader;
@property(nonatomic) _Bool logAXNotificationPosting;
@property(nonatomic) _Bool ignoreAXServerEntitlements;
@property(nonatomic) _Bool ignoreAXAsserts;
@property(nonatomic) _Bool includeBacktraceInLogs;
@property(nonatomic) _Bool validateSecondPartyApps;
- (_Bool)assistiveTouchInternalOnlyHiddenNubbitMode;
@property(nonatomic) _Bool assistiveTouchCameraSwitchPreviewEnabled;
@property(retain, nonatomic) NSDate *gaxInternalSettingsLastPasscodeSetDate;
@property(retain, nonatomic) NSDate *gaxInternalSettingsLastActivationDate;
@property(copy, nonatomic) NSString *gaxInternalSettingsProductBuildVersion;
@property(copy, nonatomic) NSNumber *gaxInternalSettingsECID;
@property(nonatomic) _Bool gaxInternalSettingsSystemDidRestartDueToLowBattery;
@property(nonatomic) _Bool gaxInternalSettingsIsActiveAppSelfLocked;
@property(nonatomic) _Bool gaxInternalSettingsTimeRestrictionHasExpired;
@property(copy, nonatomic) NSString *gaxInternalSettingsActiveAppID;
@property(copy, nonatomic) NSNumber *gaxInternalSettingsActiveAppOrientation;
@property(retain, nonatomic) NSArray *gaxInternalSettingsUserConfiguredAppIDs;
@property(retain, nonatomic) NSArray *gaxInternalSettingsSavedAccessibilityTripleClickOptions;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsSavedAccessibilityFeatures;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserGlobalProfile;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserAppProfile;
@property(nonatomic) _Bool guidedAccessShouldSpeakForTimeRestrictionEvents;
@property(readonly, nonatomic) NSString *guidedAccessDefaultToneIdentifierForTimeRestrictionEvents;
@property(copy, nonatomic) NSString *guidedAccessToneIdentifierForTimeRestrictionEvents;
@property(nonatomic) _Bool guidedAccessAllowsUnlockWithTouchID;
@property(nonatomic) _Bool guidedAccessAXFeaturesEnabled;
@property(nonatomic) _Bool zoomDebugShowExternalFocusRect;
@property(nonatomic) _Bool zoomDebugDisableZoomLensScaleTransform;
- (void)zoomUserHadLegacyZoomEnabled:(_Bool *)arg1 wasZoomedIn:(_Bool *)arg2 withScale:(double *)arg3;
@property(nonatomic) _Bool zoomShouldAllowFullscreenAutopanning;
@property(nonatomic) double zoomIdleSlugOpacity;
@property(retain, nonatomic) NSOrderedSet *zoomPreferredDockPositions;
@property(retain, nonatomic) NSOrderedSet *zoomPreferredLensModes;
@property(nonatomic) double zoomPreferredMaximumZoomScale;
@property(retain, nonatomic) NSString *zoomPreferredCurrentDockPosition;
@property(retain, nonatomic) NSString *zoomPreferredCurrentLensMode;
@property(nonatomic) _Bool zoomAlwaysUseWindowedZoomForTyping;
@property(nonatomic) _Bool zoomPeekZoomEverEnabled;
@property(nonatomic) _Bool zoomPeekZoomEnabled;
@property(nonatomic) _Bool zoomShouldShowSlug;
@property(nonatomic) _Bool zoomShouldFollowFocus;
@property(retain, nonatomic) NSString *zoomCurrentDockPosition;
@property(retain, nonatomic) NSString *zoomCurrentLensMode;
@property(nonatomic) _Bool zoomInStandby;
@property(retain, nonatomic) NSString *zoomCurrentLensEffect;
@property(nonatomic) struct CGPoint zoomSlugNormalizedPosition;
@property(nonatomic) struct CGPoint zoomPanOffset;
@property(nonatomic) double zoomScale;
@property(nonatomic) double dockSize;
@property(nonatomic) struct CGRect zoomWindowFrame;
@property(nonatomic) _Bool zoomPreferencesWereInitialized;
- (void)_switchControlClearMenuItemMigrationTracking;
- (void)_switchControlClearMenuItemPreferences;
@property(nonatomic) long long switchControlScanAfterTapLocation;
@property(nonatomic) _Bool switchControlIsEnabledAsSlave;
@property(nonatomic) _Bool switchControlShouldAlwaysActivateKeyboardKeys;
@property(nonatomic) double switchControlAutoTapTimeout;
@property(nonatomic) long long switchControlTapBehavior;
@property(nonatomic) double switchControlDwellTime;
@property(nonatomic) long long switchControlScanningStyle;
@property(nonatomic) long long switchControlPointPickerSelectionStyle;
@property(nonatomic) _Bool switchControlRestartScanningAtCurrentKey;
@property(nonatomic) _Bool switchControlShouldUseExtendedKeyboardPredictions;
@property(retain, nonatomic) NSArray *switchControlMediaControlsTopLevelMenuItems;
@property(retain, nonatomic) NSArray *switchControlMediaControlsMenuItems;
@property(readonly, nonatomic) NSArray *mediaControlsKeys;
@property(retain, nonatomic) NSArray *switchControlSettingsTopLevelMenuItems;
@property(retain, nonatomic) NSArray *switchControlSettingsMenuItems;
@property(readonly, nonatomic) NSArray *settingsKeys;
@property(retain, nonatomic) NSArray *switchControlDeviceTopLevelMenuItems;
@property(retain, nonatomic) NSArray *switchControlDeviceMenuItems;
@property(readonly, nonatomic) NSArray *deviceKeys;
@property(retain, nonatomic) NSArray *switchControlGesturesTopLevelMenuItems;
@property(retain, nonatomic) NSArray *switchControlGesturesMenuItems;
@property(readonly, nonatomic) NSArray *gestureKeys;
@property(nonatomic) _Bool switchControlShouldUseShortFirstPage;
- (_Bool)_switchControlHasEmptyTopLevelMenuItems:(id)arg1;
@property(readonly, nonatomic) _Bool switchControlHasEmptyTopLevelMenu;
@property(retain, nonatomic) NSArray *switchControlTopLevelMenuItems;
- (id)topLevelKeys;
- (id)_switchControlMigratePreMonarchIncludedMenuItemsForNewTypes:(id)arg1;
- (id)_switchControlMenuItemsForPreferenceKey:(id)arg1 allTypes:(id)arg2 enabledByDefault:(_Bool)arg3 topLevel:(_Bool)arg4;
@property(retain, nonatomic) NSUUID *switchControlLaunchRecipeUUID;
@property(retain, nonatomic) NSArray *switchControlRecipes;
@property(retain, nonatomic) NSDictionary *assistiveTouchMainScreenCustomization;
@property(nonatomic) double assistiveTouchIdleOpacity;
- (_Bool)assistiveTouchCustomizationEnabled;
@property(retain, nonatomic) NSString *assistiveTouchOrbAction;
@property(retain, nonatomic) NSString *assistiveTouchLongPressAction;
@property(nonatomic) double assistiveTouchLongPressActionDuration;
@property(nonatomic) double assistiveTouchDoubleTapActionTimeout;
@property(retain, nonatomic) NSString *assistiveTouchDoubleTapAction;
@property(retain, nonatomic) NSString *assistiveTouchSingleTapAction;
- (_Bool)assistiveTouchScannerPrefersCompact:(id)arg1;
- (void)setAssistiveTouchScannerPrefersCompact:(_Bool)arg1 forLanguage:(id)arg2;
@property(nonatomic) _Bool assistiveTouchScannerAddedTripleClickAutomatically;
@property(nonatomic) _Bool assistiveTouchSwitchUsageConfirmed;
@property(nonatomic) long long assistiveTouchHeadMovementSensitivity;
@property(nonatomic) long long assistiveTouchCursorColor;
@property(retain, nonatomic) NSSet *assistiveTouchSwitches;
@property(nonatomic) double assistiveTouchScannerSpeechRate;
@property(nonatomic) _Bool assistiveTouchScannerSpeechEnabled;
@property(nonatomic) _Bool assistiveTouchScannerSoundEnabled;
@property(nonatomic) long long assistiveTouchScanCycles;
@property(nonatomic) double assistiveTouchScanTimeout;
@property(nonatomic) _Bool assistiveTouchScanTimeoutEnabled;
@property(nonatomic) double assistiveTouchStepInterval;
@property(nonatomic) _Bool assistiveTouchInputCoalescingEnabled;
@property(nonatomic) double assistiveTouchInputCoalescingDuration;
@property(nonatomic) _Bool assistiveTouchLongPressPauseScanningEnabled;
@property(nonatomic) _Bool assistiveTouchLongPressEnabled;
@property(nonatomic) double assistiveTouchLongPressDuration;
@property(nonatomic) _Bool assistiveTouchInputHoldEnabled;
@property(nonatomic) double assistiveTouchInputHoldDuration;
@property(nonatomic) _Bool assistiveTouchDelayAfterInputEnabled;
@property(nonatomic) double assistiveTouchDelayAfterInput;
@property(nonatomic) _Bool assistiveTouchActionRepeatEnabled;
@property(nonatomic) double assistiveTouchActionRepeatInterval;
@property(nonatomic) double assistiveTouchAxisSweepSpeed;
@property(nonatomic) _Bool assistiveTouchScannerMenuLabelsEnabled;
@property(nonatomic) _Bool assistiveTouchScannerCompactMenuEnabled;
@property(nonatomic) _Bool assistiveTouchGroupElementsEnabled;
- (_Bool)assistiveTouchAutoScanningEnabled;
@property(nonatomic) long long assistiveTouchScanningMode;
@property(nonatomic) _Bool assistiveTouchScannerCursorHighVisibilityEnabled;
@property(nonatomic) _Bool assistiveTouchScannerSpeechIsInterruptedByScanning;
@property(nonatomic) long long assistiveTouchPreferredPointPicker;
@property(retain, nonatomic) NSArray *assistiveTouchSavedGestures;
@property(retain, nonatomic) NSArray *assistiveTouchRecentGestures;
@property(retain, nonatomic) NSArray *assistiveTouchCustomGestures;
@property(nonatomic) double assistiveTouchSpeed;
@property(nonatomic) long long assistiveTouchMouseKeysMaxSpeed;
@property(nonatomic) long long assistiveTouchMouseKeysDelay;
@property(nonatomic) _Bool assistiveTouchMouseKeysOptionToggleEnabled;
@property(nonatomic) _Bool assistiveTouchMouseKeysEnabled;
@property(nonatomic) _Bool assistiveTouchOpenMenuSwaggleEnabled;
@property(nonatomic) _Bool assistiveTouchAlwaysShowMenuEnabled;
- (void)clearExistingValueForPreference:(SEL)arg1;
- (_Bool)preferenceHasExistingValue:(SEL)arg1;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_registerForNotification:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)_handleVoiceUnarchivedCache:(id)arg1;
- (void)_listenForAccessibilitySupportPassthroughs;
- (void)nukeAll;
- (void)dealloc;
- (id)init;
- (void)_synchronizeIfNecessary:(id)arg1 domain:(int)arg2;
- (_Bool)_switchFromRootUserIfNecessary:(CDUnknownBlockType)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_postNotificationForPreferenceKey:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_migratePreferenceIfNecessary:(id)arg1;
- (id)_userDefaultsStoreForDomain:(int)arg1;
- (struct __CFString *)_domainNameForDomain:(int)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (int)_domainForPreferenceKey:(id)arg1;
@property double audioLeftRightBalance;
@property _Bool monoAudioEnabled;
@property _Bool highContrastFocusIndicatorsEnabled;
@property _Bool reduceWhitePointEnabled;
@property _Bool buttonShapesEnabled;
@property _Bool increaseButtonLegibilityEnabled;
@property _Bool reduceMotionEnabled;
@property _Bool enhanceBackgroundContrastEnabled;
@property _Bool enhanceTextTrackingEnabled;
@property _Bool enhanceTextLegibilityEnabled;
@property _Bool zoomSmoothScalingEnabled;
@property _Bool zoomToggledByVoiceOver;
@property _Bool zoomToggledByPreferenceSwitch;
@property _Bool zoomEnabled;
@property _Bool voiceOverBrailleEightDotMode;
@property long long voiceOverBrailleContractionMode;
@property(nonatomic) long long voiceOverBrailleStatusCellPreference;
@property long long voiceOverBrailleMasterStatusCellIndex;
@property long long voiceOverBrailleVirtualStatusAlignment;
@property(copy) NSString *voiceOverTouchBrailleTableIdentifier;
@property(copy) NSDictionary *voiceOverBrailleBluetoothDisplay;
@property int voiceOverTypingMode;
@property(readonly) _Bool voiceOverLangaugeRotorItemsExist;
@property(retain) NSArray *voiceOverLanguageRotorItems;
@property _Bool voiceOverUIEnabled;
@property _Bool voiceOverScreenCurtainEnabled;
@property _Bool voiceOverEnabledThroughAccessory;
@property _Bool voiceOverUsageConfirmed;
@property float voiceOverVolume;
@property float voiceOverSpeakingRate;
@property _Bool voiceOverEnabled;
@property _Bool siriSemanticContextEnabled;
@property _Bool automationHitpointWarpingEnabled;
@property _Bool automationFauxTableViewCellsEnabled;
@property _Bool automationFauxCollectionViewCellsEnabled;
@property(readonly) NSString *automationPreferredLocalization;
@property _Bool automationLocalizedStringLookupInfoEnabled;
@property _Bool automationEnabled;
@property _Bool inspectorEnabled;
@property _Bool switchControlEnabled;
@property _Bool assistiveTouchAlwaysShowMenu;
@property _Bool assistiveTouchUIEnabled;
@property _Bool assistiveTouchHardwareEnabled;
@property _Bool assistiveTouchEnabled;
@property(retain) NSArray *tripleClickOptions;
@property _Bool applicationAccessibilityEnabled;
@property(readonly) _Bool accessibilityEnabled;
- (id)switchForUUID:(id)arg1;
- (id)_createAndSaveRecipeForInterfaceOrientedPoint:(struct CGPoint)arg1 forHold:(_Bool)arg2;
- (id)createAndSaveRecipeForInterfaceOrientedHoldPoint:(struct CGPoint)arg1;
- (id)createAndSaveRecipeForInterfaceOrientedPoint:(struct CGPoint)arg1;
- (_Bool)isNewRecipe:(id)arg1;
- (void)saveRecipe:(id)arg1;
- (_Bool)updateRecipe:(id)arg1;
- (void)_assignDefaultTitleIfNeededToRecipe:(id)arg1;
- (_Bool)_updateWithoutSavingExistingRecipe:(id)arg1 allRecipes:(id)arg2;
- (_Bool)validateAndUpdateRecipeIfNeeded:(id)arg1;
- (id)_switchWithAnyActionExcludingUUIDs:(id)arg1 needsToSupportLongPress:(_Bool)arg2;
- (id)_switchWithAction:(long long)arg1 excludedUUIDs:(id)arg2 needsToSupportLongPress:(_Bool)arg3;
- (_Bool)_hasSwitchWithUUID:(id)arg1;

@end

