//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PGMemoryController;

@interface PGMemoryGenerator : NSObject
{
    _Bool _isDebug;
    unsigned long long _duration;
    unsigned long long _precision;
    PGMemoryController *_controller;
}

+ (long long)titleDateMatchingTypeForMemoryCategory:(unsigned long long)arg1;
+ (id)assetPropertySetsForMemories;
@property _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(readonly) __weak PGMemoryController *controller; // @synthesize controller=_controller;
@property unsigned long long precision; // @synthesize precision=_precision;
@property unsigned long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (unsigned long long)_numberOfIndependentMomentNodesInMomentNodes:(id)arg1 aggregations:(id)arg2;
- (id)_electedBestScoringPotentialMemoriesWithCount:(unsigned long long)arg1 fromPotentialMemories:(id)arg2;
- (void)_curateMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateDefaultTitleAndSubtitleForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)setDefaultValuesIfNeededOnNewMemoryNeededOnNewMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)generateMemories:(unsigned long long)arg1;
- (id)generateAllMemories;
- (id)generateMemory;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemories:(unsigned long long)arg1;
- (id)initWithController:(id)arg1;

@end
