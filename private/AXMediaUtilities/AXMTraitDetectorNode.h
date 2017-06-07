//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding>
{
    _Bool _shouldEvaluateColorInformation;
    long long _sampleFrequency;
    double _colorDistanceTheshold;
}

+ (id)title;
+ (_Bool)requiresVisionKit;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double colorDistanceTheshold; // @synthesize colorDistanceTheshold=_colorDistanceTheshold;
@property(nonatomic) _Bool shouldEvaluateColorInformation; // @synthesize shouldEvaluateColorInformation=_shouldEvaluateColorInformation;
@property(nonatomic) long long sampleFrequency; // @synthesize sampleFrequency=_sampleFrequency;
- (void)evaluate:(id)arg1;
- (void)_evaluateColorInformation:(id)arg1;
- (void)nodeInitialize;

@end

