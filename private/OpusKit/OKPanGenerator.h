//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface OKPanGenerator : NSObject
{
    NSArray *_panSteps;
    _Bool _isReversed;
    _Bool _loops;
    double _mediaItemAspectRatio;
    NSArray *_mediaItemRegionsOfInterest;
    unsigned long long _panningType;
    unsigned long long _randomizer;
    struct CGRect _referenceFrame;
}

@property(nonatomic) _Bool loops; // @synthesize loops=_loops;
@property(nonatomic) _Bool isReversed; // @synthesize isReversed=_isReversed;
@property(nonatomic) unsigned long long randomizer; // @synthesize randomizer=_randomizer;
@property(nonatomic) unsigned long long panningType; // @synthesize panningType=_panningType;
@property(nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(retain, nonatomic) NSArray *mediaItemRegionsOfInterest; // @synthesize mediaItemRegionsOfInterest=_mediaItemRegionsOfInterest;
@property(nonatomic) double mediaItemAspectRatio; // @synthesize mediaItemAspectRatio=_mediaItemAspectRatio;
- (void)enumeratePanStepsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updatePanSteps;
- (id)_panStepWithRelativeFrame:(struct CGRect)arg1 forFittingMode:(unsigned long long)arg2 anchorPoint:(struct CGPoint)arg3 andExtraScale:(double)arg4;
- (id)_panStepWithRelativeFrame:(struct CGRect)arg1 forFittingMode:(unsigned long long)arg2 andAnchorPoint:(struct CGPoint)arg3;
- (struct CGRect)_frameWithAspectRatio:(double)arg1 forFittingMode:(unsigned long long)arg2 andAnchorPoint:(struct CGPoint)arg3;
- (struct CGRect)_fullROI;
- (void)dealloc;
- (id)initWithAspectRatio:(double)arg1;
- (id)init;

@end

