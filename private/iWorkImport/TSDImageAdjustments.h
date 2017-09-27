//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "TSDMixing.h"

__attribute__((visibility("hidden")))
@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing>
{
    double mExposure;
    double mSaturation;
    double mContrast;
    double mHighlights;
    double mShadows;
    double mSharpness;
    double mDenoise;
    double mTemperature;
    double mTint;
    double mBottomLevel;
    double mTopLevel;
    double mGamma;
    _Bool mEnhance;
    _Bool mRepresentsSageAdjustments;
}

+ (_Bool)canMixWithNilObjects;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageAdjustmentsWithoutEnhance;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool representsSageAdjustments;
@property(readonly, nonatomic) _Bool enhance;
@property(readonly, nonatomic) double gamma;
@property(readonly, nonatomic) double topLevel;
@property(readonly, nonatomic) double bottomLevel;
@property(readonly, nonatomic) double tint;
@property(readonly, nonatomic) double temperature;
@property(readonly, nonatomic) double denoise;
@property(readonly, nonatomic) double sharpness;
@property(readonly, nonatomic) double shadows;
@property(readonly, nonatomic) double highlights;
@property(readonly, nonatomic) double contrast;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic) double exposure;
- (id)init;
- (void)saveToArchive:(struct ImageAdjustmentsArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ImageAdjustmentsArchive *)arg1 unarchiver:(id)arg2;
- (void)i_initFromDefaultArchive;

@end

