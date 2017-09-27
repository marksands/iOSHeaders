//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSDMediaInfo.h>

#import "TSDMixing.h"

@class NSURL, TSDMediaStyle, TSPData;

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing>
{
    TSPData *mMovieData;
    NSURL *mMovieRemoteURL;
    TSPData *mImportedAuxiliaryMovieData;
    TSPData *mAudioOnlyImageData;
    double mStartTime;
    double mEndTime;
    double mPosterTime;
    TSPData *mPosterImageData;
    struct CGSize mNaturalSize;
    unsigned long long mLoopOption;
    float mVolume;
    _Bool mStreaming;
    int mControlStyle;
    _Bool mAllowsAirPlayVideo;
    _Bool mUsesAirPlayVideoWhileAirPlayScreenIsActive;
    NSURL *mURLForMPMPC;
    TSDMediaStyle *mStyle;
    _Bool mAudioOnly;
}

+ (id)presetKinds;
+ (double)defaultPosterTimeForDuration:(double)arg1;
@property(nonatomic, getter=isStreaming) _Bool streaming; // @synthesize streaming=mStreaming;
@property(retain, nonatomic) TSPData *posterImageData; // @synthesize posterImageData=mPosterImageData;
- (id)style;
- (_Bool)supportsHyperlinks;
- (int)intValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (_Bool)supportsAttachedComments;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1;
- (id)generateEmptyPosterImageForContext:(id)arg1;
- (id)makePosterImageGeneratorWithAVAsset:(id)arg1;
- (id)makeAVAssetWithOptions:(id)arg1;
- (id)makeAVAsset;
- (void)acceptVisitor:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)animationFilters;
- (_Bool)canChangeWrapType;
- (Class)editorClass;
- (Class)repClass;
- (Class)layoutClass;
- (Class)styleClass;
- (void)p_setPropertiesFromLoadedAsset:(id)arg1;
- (struct CGSize)rawDataSize;
- (id)presetKind;
- (void)setStyle:(id)arg1;
- (id)mediaFileType;
- (id)mediaDisplayName;
- (id)copyWithContext:(id)arg1 stylesheet:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
@property(retain, nonatomic) NSURL *urlForMPMPC;
@property(nonatomic) int controlStyle;
@property(nonatomic) _Bool usesAirPlayVideoWhileAirPlayScreenIsActive;
@property(nonatomic) _Bool allowsAirPlayVideo;
@property(nonatomic, getter=isAudioOnly) _Bool audioOnly;
@property(nonatomic) float volume;
@property(nonatomic) unsigned long long loopOption;
@property(nonatomic) double posterTime;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(retain, nonatomic) TSPData *audioOnlyImageData;
@property(retain, nonatomic) TSPData *importedAuxiliaryMovieData;
@property(retain, nonatomic) NSURL *movieRemoteURL;
@property(retain, nonatomic) TSPData *movieData;

@end

