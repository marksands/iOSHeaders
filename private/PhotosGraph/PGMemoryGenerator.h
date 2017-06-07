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

+ (long long)titleDateMatchingTypeForMemoryCategory:(long long)arg1;
+ (id)assetPropertySetsForMemories;
@property _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(readonly) __weak PGMemoryController *controller; // @synthesize controller=_controller;
@property unsigned long long precision; // @synthesize precision=_precision;
@property unsigned long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)createMemoryWithPotentialMemory:(id)arg1;
- (void)_mergeCurationSetsIfNeededForMemory:(id)arg1;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)arg1;
- (id)_createMemoryDebugWithPotentialMemory:(id)arg1;
- (unsigned long long)_numberOfIndependentMomentNodesInMomentNodes:(id)arg1 aggregations:(id)arg2;
- (id)_electedBestScoringPotentialMemoriesWithCount:(unsigned long long)arg1 fromPotentialMemories:(id)arg2 attemptUpgradesBeforeSorting:(_Bool)arg3;
- (_Bool)canProceedAfterAttemptingUpgradesForPotentialMemory:(id)arg1;
- (_Bool)canProceedAfterAttemptingMeaningfulEventUpgradeForPotentialMemory:(id)arg1 upgradedToMeaningfulEvent:(_Bool *)arg2;
- (_Bool)canProceedAfterAttemptingWeekendUpgradeForPotentialMemory:(id)arg1 upgradedToWeekend:(_Bool *)arg2;
- (_Bool)_collectionIsAcceptableForUpgrade:(id)arg1;
- (void)_curateMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateDefaultTitleAndSubtitleForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)setDefaultValuesIfNeededOnNewMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_generateMemoryForDryTesting;
- (id)generateMemories:(unsigned long long)arg1;
- (id)generateAllMemories;
- (id)generateMemory;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemories:(unsigned long long)arg1;
- (id)initWithController:(id)arg1;

@end

