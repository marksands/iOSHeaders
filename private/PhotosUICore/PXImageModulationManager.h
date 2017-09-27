//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXChangeObserver.h"
#import "PXSettingsKeyObserver.h"

@class CAContext, NSHashTable, NSString, PXImageModulationSettings, PXRequestedEDRHeadroomFactorFilter, UIViewController;

@interface PXImageModulationManager : PXObservable <PXChangeObserver, PXSettingsKeyObserver>
{
    struct {
        _Bool enabled;
        _Bool lowPowerModeEnabled;
        _Bool HDRFocus;
        _Bool imageModulationIntensity;
        _Bool requestedEDRHeadroomFactor;
        _Bool finalRequestedEDRHeadroomFactor;
        _Bool imageLayerModulators;
    } _needsUpdateFlags;
    double _lastRequestedEDRHeadroomChangeTime;
    _Bool _lowPowerModeEnabled;
    _Bool _active;
    _Bool _mainScreen;
    _Bool _enabled;
    PXImageModulationSettings *_settings;
    NSHashTable *_imageLayerModulators;
    PXRequestedEDRHeadroomFactorFilter *_requestedEDRHeadroomFactorFilter;
    CAContext *_coreAnimationContext;
    UIViewController *_rootViewController;
    double _HDRFocus;
    double _imageModulationIntensity;
    double _requestedEDRHeadroomFactor;
}

+ (long long)_contentTypeForAsset:(id)arg1;
+ (long long)optionsForAsset:(id)arg1;
+ (double)HDRValueForAsset:(id)arg1;
@property(readonly, nonatomic) double requestedEDRHeadroomFactor; // @synthesize requestedEDRHeadroomFactor=_requestedEDRHeadroomFactor;
@property(readonly, nonatomic) double imageModulationIntensity; // @synthesize imageModulationIntensity=_imageModulationIntensity;
@property(readonly, nonatomic) double HDRFocus; // @synthesize HDRFocus=_HDRFocus;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic, getter=isMainScreen) _Bool mainScreen; // @synthesize mainScreen=_mainScreen;
@property(readonly, nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isLowPowerModeEnabled) _Bool lowPowerModeEnabled; // @synthesize lowPowerModeEnabled=_lowPowerModeEnabled;
@property(retain, nonatomic) CAContext *coreAnimationContext; // @synthesize coreAnimationContext=_coreAnimationContext;
@property(readonly, nonatomic) PXRequestedEDRHeadroomFactorFilter *requestedEDRHeadroomFactorFilter; // @synthesize requestedEDRHeadroomFactorFilter=_requestedEDRHeadroomFactorFilter;
@property(readonly, nonatomic) NSHashTable *imageLayerModulators; // @synthesize imageLayerModulators=_imageLayerModulators;
@property(readonly, nonatomic) PXImageModulationSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateImageLayerModulatorsIfNeeded;
- (void)_invalidateImageLayerModulators;
- (void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
- (void)_invalidateFinalRequestedEDRHeadroomFactor;
- (void)_updateRequestedEDRHeadroomFactorIfNeeded;
- (void)_invalidateRequestedEDRHeadroomFactor;
- (void)_updateImageModulationIntensityIfNeeded;
- (void)_invalidateImageModulationIntensity;
- (void)_updateHDRFocusIfNeeded;
- (void)_invalidateHDRFocus;
- (void)_updateLowPowerModeEnabledIfNeeded;
- (void)_invalidateLowPowerModeEnabled;
- (void)_updateEnabledIfNeeded;
- (void)_invalidateEnabled;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_processInfoPowerStateDidChange:(id)arg1;
- (void)_updateCoreAnimationContext;
- (void)setRequestedEDRHeadroomFactor:(double)arg1;
- (void)setImageModulationIntensity:(double)arg1;
- (void)setHDRFocus:(double)arg1;
- (void)setNeedsImageModulationIntensityUpdate;
- (void)setNeedsHDRFocusUpdate;
- (void)_updateImageLayerModulator:(id)arg1;
- (void)checkInImageLayerModulator:(id)arg1;
- (id)checkoutImageLayerModulatorWithOptions:(long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1 mainScreen:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

