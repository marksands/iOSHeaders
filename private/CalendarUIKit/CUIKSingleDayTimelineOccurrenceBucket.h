//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUIKSingleDayTimelineLayoutPartition, NSArray, NSMutableArray;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject
{
    id <CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
    id <CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
    id <CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
    _Bool _useTemporaryFitnessLevel;
    _Bool _temporaryFitnessLevelRequiresCalculation;
    double _temporaryFitnessLevel;
    _Bool _originalFitnessLevelRequiresCalculation;
    double _originalFitnessLevel;
    _Bool _ignoreFirstOccurrenceInFitnessCalculations;
    _Bool _ignoreLastOccurrenceInFitnessCalculations;
    _Bool _isOnlyBucket;
    CUIKSingleDayTimelineLayoutPartition *_correspondingPartition;
    id <CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
    NSMutableArray *_currentOccurrences;
}

@property(retain, nonatomic) NSMutableArray *currentOccurrences; // @synthesize currentOccurrences=_currentOccurrences;
@property __weak id <CUIKSingleDayTimelineGeometryDelegate> geometryDelegate; // @synthesize geometryDelegate=_geometryDelegate;
@property(nonatomic) _Bool isOnlyBucket; // @synthesize isOnlyBucket=_isOnlyBucket;
@property(retain, nonatomic) CUIKSingleDayTimelineLayoutPartition *correspondingPartition; // @synthesize correspondingPartition=_correspondingPartition;
- (void).cxx_destruct;
- (void)stampFramesOntoOccurrences;
- (void)makeTemporaryChangesPermanent;
- (void)revertTemporaryChanges;
- (void)removeOccurrenceAtEndTemporarily;
- (void)removeOccurrenceAtBeginningTemporarily;
- (void)addOccurrenceTemporarilyToEnd:(id)arg1;
- (void)addOccurrenceTemporarilyToBeginning:(id)arg1;
- (id)earliestOccurrence;
- (id)_occurrencesForFitnessLevel;
@property(readonly, nonatomic) NSArray *occurrences;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 geometryDelegate:(id)arg4;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3;

@end

