//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXImageModulationSettings : PXSettings
{
    _Bool _enabled;
    long long _filterType;
    long long _HDRConsideration;
    long long _highQualitySDRConsideration;
    double _HDRModulationIntensity;
    double _highQualitySDRModulationIntensity;
    double _videoComplementModulationIntensity;
    long long _EDRHeadroomRequestScheme;
    double _manualEDRHeadroomRequestStops;
    double _EDRHeadroomRequestHDRThreshold;
    double _EDRHeadroomRequestSustainDuration;
    double _lowEDRRequestedHeadroomStops;
    double _highEDRRequestedHeadroomStops;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double highEDRRequestedHeadroomStops; // @synthesize highEDRRequestedHeadroomStops=_highEDRRequestedHeadroomStops;
@property(nonatomic) double lowEDRRequestedHeadroomStops; // @synthesize lowEDRRequestedHeadroomStops=_lowEDRRequestedHeadroomStops;
@property(nonatomic) double EDRHeadroomRequestSustainDuration; // @synthesize EDRHeadroomRequestSustainDuration=_EDRHeadroomRequestSustainDuration;
@property(nonatomic) double EDRHeadroomRequestHDRThreshold; // @synthesize EDRHeadroomRequestHDRThreshold=_EDRHeadroomRequestHDRThreshold;
@property(nonatomic) double manualEDRHeadroomRequestStops; // @synthesize manualEDRHeadroomRequestStops=_manualEDRHeadroomRequestStops;
@property(nonatomic) long long EDRHeadroomRequestScheme; // @synthesize EDRHeadroomRequestScheme=_EDRHeadroomRequestScheme;
@property(nonatomic) double videoComplementModulationIntensity; // @synthesize videoComplementModulationIntensity=_videoComplementModulationIntensity;
@property(nonatomic) double highQualitySDRModulationIntensity; // @synthesize highQualitySDRModulationIntensity=_highQualitySDRModulationIntensity;
@property(nonatomic) double HDRModulationIntensity; // @synthesize HDRModulationIntensity=_HDRModulationIntensity;
@property(nonatomic) long long highQualitySDRConsideration; // @synthesize highQualitySDRConsideration=_highQualitySDRConsideration;
@property(nonatomic) long long HDRConsideration; // @synthesize HDRConsideration=_HDRConsideration;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setDefaultValues;
- (id)parentSettings;

@end

