//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate;

@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel
{
    _Bool _hasBPM;
    _Bool _lessThanMinute;
    NSDate *_measurementDate;
    long long _BPM;
}

@property(nonatomic) _Bool lessThanMinute; // @synthesize lessThanMinute=_lessThanMinute;
@property(nonatomic) _Bool hasBPM; // @synthesize hasBPM=_hasBPM;
@property(nonatomic) long long BPM; // @synthesize BPM=_BPM;
@property(retain, nonatomic) NSDate *measurementDate; // @synthesize measurementDate=_measurementDate;
- (void).cxx_destruct;
- (id)_heartrateTintColor;
- (id)_bpmString;
- (id)_heartrateString;
- (id)_newExtraLargeTemplate;
- (id)_newModularLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newCircularTemplateUsingMediumSize:(_Bool)arg1;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)templateForComplicationFamily:(long long)arg1;

@end

