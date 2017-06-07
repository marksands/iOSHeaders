//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKDataMetadataSimpleSection.h>

@class HKDisplayTypeController, HKSample, HKUnitPreferenceController;

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection
{
    HKSample *_sample;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
}

@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) HKSample *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (void)_loadMetadataValues;
- (id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;

@end

