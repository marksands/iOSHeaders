//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXBackBoardServer : AXServer
{
    _Bool _overrideGestureRecognition;
    NSMutableArray *_eventListeners;
    NSMutableArray *_zoomAttributeListeners;
}

+ (id)server;
- (void).cxx_destruct;
- (void)resetAccessibilityFeatures;
- (_Bool)loadGAXBundleForUnmanagedASAM;
- (_Bool)supportsAccessibilityDisplayFilters;
- (_Bool)supportsAdaptation;
- (_Bool)adaptationEnabled;
- (void)restoreCachedBrightnessFilters;
- (_Bool)blueLightStatusEnabled;
- (_Bool)brightnessFiltersEnabled;
- (void)disableBrightnessFilters;
- (_Bool)supportsBlueLightReduction;
- (void)jetsamThirdPartyApps;
- (unsigned long long)currentGuidedAccessModeAndSessionApp:(id *)arg1;
- (id)guidedAccessIgnoredRegions;
- (void)toggleGuidedAccess;
- (_Bool)isGuidedAccessUnmanagedSelfLocked;
- (_Bool)isGuidedAccessSelfLockedToApp:(id)arg1;
- (void)requestGuidedAccessSessionEndWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)guidedAccessAvailability;
- (id)performGuidedAccessAutomationCommand:(id)arg1 error:(id *)arg2;
- (id)guidedAccessEffectiveAppBundleIdentifier;
- (_Bool)isGuidedAccessInWorkspace;
- (_Bool)isGuidedAccessActive;
- (id)_springboardParametersForGuidedAccessAvailability;
- (void)homeClickSwallowedForGuidedAccess;
- (_Bool)tripleClickHomeButtonPress;
- (struct CGRect)zoomInitialFocusRectWithQueryingContext:(unsigned int)arg1;
- (void)setZoomInitialFocusRect:(struct CGRect)arg1 fromContext:(unsigned int)arg2;
- (void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3;
- (void)setSwitchControlHasScreenSwitch:(_Bool)arg1;
- (void)setSwitchControlRendersDeviceUnusable:(_Bool)arg1;
- (void)setHearingAidControlIsVisible:(_Bool)arg1;
- (void)setCapsLockLightOn:(_Bool)arg1;
- (void)setVoiceOverItemChooserVisible:(_Bool)arg1;
- (void)userEventOccurred;
- (struct CGRect)convertFrame:(struct CGRect)arg1 fromContextId:(unsigned int)arg2;
- (struct CGRect)convertFrame:(struct CGRect)arg1 toContextId:(unsigned int)arg2;
- (struct CGRect)convertFrame:(struct CGRect)arg1 fromContextId:(unsigned int)arg2 toContextId:(unsigned int)arg3;
- (unsigned int)contextIdHostingContextId:(unsigned int)arg1;
- (unsigned int)contextIdForPosition:(struct CGPoint)arg1;
- (void)postEvent:(id)arg1 systemEvent:(_Bool)arg2;
- (void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3;
@property(nonatomic) _Bool invertColorsEnabled; // @dynamic invertColorsEnabled;
- (void)registerAssistiveTouchPID:(int)arg1;
@property(nonatomic) _Bool sessionIsLoginSession;
@property(nonatomic) _Bool inPreboardMode;
- (id)backboardServiceInstance;
- (_Bool)_shouldDispatchLocally;
- (void)registerAccessibilityUIServicePID:(int)arg1;
- (int)accessibilityUIServicePID;
- (void)registerSiriViewServicePID:(int)arg1;
- (void)setLockScreenDimTimerEnabled:(_Bool)arg1;
- (void)adjustSystemZoom:(int)arg1;
- (void)registerZoomAttributesChangeHandler:(CDUnknownBlockType)arg1;
- (void)zoomAttributesChanged:(id)arg1;
- (void)registerGestureConflictWithZoom:(id)arg1;
- (void)_willClearServer;
- (void)_didConnectToServer;
- (id)_handleZoomAttributesListener:(id)arg1;
- (id)_handleEventListener:(id)arg1;
- (id)_serviceName;
- (void)dealloc;
- (id)init;

@end

