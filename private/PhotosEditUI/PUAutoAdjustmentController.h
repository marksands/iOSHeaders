//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PLPhotoEditModel;

@interface PUAutoAdjustmentController : NSObject
{
    NSArray *_cachedRedEyeCorrections;
    NSDictionary *_cachedWhiteBalanceSettings;
    double _cachedSmartToneLevel;
    double _cachedSmartColorLevel;
    _Bool _cachedValuesAreValid;
    PLPhotoEditModel *_stashedPreviousManualModel;
    _Bool _busy;
}

@property(nonatomic, getter=isBusy, setter=_setBusy:) _Bool busy; // @synthesize busy=_busy;
- (void).cxx_destruct;
- (void)_removeLegacyAutoEnhanceFromModel:(id)arg1;
- (void)_revertAutoValuesOnModel:(id)arg1;
- (void)_applyAutoValuesOnModel:(id)arg1 whiteBalanceSettings:(id)arg2 redEyeCorrections:(id)arg3 smartToneLevel:(double)arg4 smartColorLevel:(double)arg5 valuesCalculator:(id)arg6 animated:(_Bool)arg7;
- (_Bool)isAutoEnhanceEnabledForModel:(id)arg1;
- (void)invalidateCachedAdjustments;
- (void)disableAutoEnhanceOnModel:(id)arg1;
- (void)enableAutoEnhanceOnModel:(id)arg1 valuesCalculator:(id)arg2 allowRedEye:(_Bool)arg3 animated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

