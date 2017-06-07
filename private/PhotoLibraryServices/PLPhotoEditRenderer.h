//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, PLEditSource, PLPhotoEditModel;

@interface PLPhotoEditRenderer : NSObject
{
    NSDictionary *__smartToneAdjustments;
    double _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsInCachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    double _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsInCachedAdjustments;
    NSDictionary *__smartBWAdjustments;
    double _smartBWLevelInCachedAdjustments;
    NSDictionary *_smartBWStatisticsInCachedAdjustments;
    PLEditSource *_editSource;
    PLPhotoEditModel *_photoEditModel;
    long long _smartFiltersCubeSize;
    double _smartToneBaseBrightness;
    double _smartToneBaseContrast;
    double _smartToneBaseExposure;
    double _smartToneBaseHighlights;
    double _smartToneBaseShadows;
    double _smartToneBaseBlackPoint;
    double _smartToneBaseLocalLight;
    double _smartColorBaseContrast;
    double _smartColorBaseVibrancy;
    double _smartColorBaseCast;
    double _smartBWBaseStrength;
    double _smartBWBaseNeutralGamma;
    double _smartBWBaseTone;
    double _smartBWBaseHue;
    double _smartBWBaseGrain;
}

+ (void)initialize;
@property(readonly, nonatomic) double smartBWBaseGrain; // @synthesize smartBWBaseGrain=_smartBWBaseGrain;
@property(readonly, nonatomic) double smartBWBaseHue; // @synthesize smartBWBaseHue=_smartBWBaseHue;
@property(readonly, nonatomic) double smartBWBaseTone; // @synthesize smartBWBaseTone=_smartBWBaseTone;
@property(readonly, nonatomic) double smartBWBaseNeutralGamma; // @synthesize smartBWBaseNeutralGamma=_smartBWBaseNeutralGamma;
@property(readonly, nonatomic) double smartBWBaseStrength; // @synthesize smartBWBaseStrength=_smartBWBaseStrength;
@property(readonly, nonatomic) double smartColorBaseCast; // @synthesize smartColorBaseCast=_smartColorBaseCast;
@property(readonly, nonatomic) double smartColorBaseVibrancy; // @synthesize smartColorBaseVibrancy=_smartColorBaseVibrancy;
@property(readonly, nonatomic) double smartColorBaseContrast; // @synthesize smartColorBaseContrast=_smartColorBaseContrast;
@property(readonly, nonatomic) double smartToneBaseLocalLight; // @synthesize smartToneBaseLocalLight=_smartToneBaseLocalLight;
@property(readonly, nonatomic) double smartToneBaseBlackPoint; // @synthesize smartToneBaseBlackPoint=_smartToneBaseBlackPoint;
@property(readonly, nonatomic) double smartToneBaseShadows; // @synthesize smartToneBaseShadows=_smartToneBaseShadows;
@property(readonly, nonatomic) double smartToneBaseHighlights; // @synthesize smartToneBaseHighlights=_smartToneBaseHighlights;
@property(readonly, nonatomic) double smartToneBaseExposure; // @synthesize smartToneBaseExposure=_smartToneBaseExposure;
@property(readonly, nonatomic) double smartToneBaseContrast; // @synthesize smartToneBaseContrast=_smartToneBaseContrast;
@property(readonly, nonatomic) double smartToneBaseBrightness; // @synthesize smartToneBaseBrightness=_smartToneBaseBrightness;
@property(nonatomic) long long smartFiltersCubeSize; // @synthesize smartFiltersCubeSize=_smartFiltersCubeSize;
@property(retain, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(readonly, retain, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
- (void).cxx_destruct;
- (id)initWithEditSource:(id)arg1 renderPriority:(long long)arg2;
- (id)initWithEditSource:(id)arg1;

@end

