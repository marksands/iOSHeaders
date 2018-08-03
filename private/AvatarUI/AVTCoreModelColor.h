//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTCacheableResource.h"

@class AVTColorPreset, NSDictionary, NSString;

@interface AVTCoreModelColor : NSObject <AVTCacheableResource>
{
    _Bool _showSlider;
    float _rangeMin;
    float _rangeMax;
    AVTColorPreset *_baseColorPreset;
    unsigned long long _order;
    NSDictionary *_derivedColorsByCategories;
    CDStruct_597dd055 _settingKind;
}

@property(readonly, copy, nonatomic) NSDictionary *derivedColorsByCategories; // @synthesize derivedColorsByCategories=_derivedColorsByCategories;
@property(readonly, nonatomic) float rangeMax; // @synthesize rangeMax=_rangeMax;
@property(readonly, nonatomic) float rangeMin; // @synthesize rangeMin=_rangeMin;
@property(readonly, nonatomic, getter=canShowSlider) _Bool showSlider; // @synthesize showSlider=_showSlider;
@property(readonly, nonatomic) unsigned long long order; // @synthesize order=_order;
@property(readonly, nonatomic) CDStruct_597dd055 settingKind; // @synthesize settingKind=_settingKind;
@property(readonly, nonatomic) AVTColorPreset *baseColorPreset; // @synthesize baseColorPreset=_baseColorPreset;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)copyWithRangeMin:(float)arg1 rangeMax:(float)arg2 showSlider:(_Bool)arg3;
- (id)initWithColorPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2 order:(unsigned long long)arg3 showSlider:(_Bool)arg4 rangeMin:(float)arg5 rangeMax:(float)arg6 derivedColorsByCategories:(id)arg7;
- (id)initWithColorPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2 order:(unsigned long long)arg3 derivedColorsByCategories:(id)arg4;
- (_Bool)requiresEncryption;
- (unsigned long long)costForScope:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;
- (id)thumbnail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

