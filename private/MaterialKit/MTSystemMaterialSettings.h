//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

#import <MaterialKit/MTMaterialSettings-Protocol.h>
#import <MaterialKit/MTMaterialSettingsObservable-Protocol.h>

@class MTVibrantStylingProvider, NSString;

@interface MTSystemMaterialSettings : _UISettings <MTMaterialSettings, MTMaterialSettingsObservable>
{
    _Bool _usesLuminanceMap;
    double _blurRadius;
    double _luminanceAlpha;
    double _saturation;
    double _brightness;
    double _tintAlpha;
    MTVibrantStylingProvider *_vibrantStylingProvider;
}

+ (id)settingsControllerModule;
+ (id)_luminanceRows;
+ (id)_lightOverlayRows;
+ (id)_backdropRows;
+ (id)_luminanceRow;
+ (id)sharedMaterialSettings;
@property(nonatomic) double tintAlpha; // @synthesize tintAlpha=_tintAlpha;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double luminanceAlpha; // @synthesize luminanceAlpha=_luminanceAlpha;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) _Bool usesLuminanceMap; // @synthesize usesLuminanceMap=_usesLuminanceMap;
- (void).cxx_destruct;
- (void)setDefaultValues;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider; // @synthesize vibrantStylingProvider=_vibrantStylingProvider;
- (Class)vibrantStylingProviderClass;
- (void)updateWithSettingsFromArchive:(id)arg1;
- (id)archiveValueForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

