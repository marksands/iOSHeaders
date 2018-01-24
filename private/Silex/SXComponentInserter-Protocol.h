//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SXComponentInsert;

@protocol SXComponentInserter <NSObject>
@property(readonly, nonatomic) id <SXComponentInsertionConditionEngine> conditionEngine;
@property(readonly, nonatomic) NSArray *conditions;
- (SXComponentInsert *)componentInsertForMarker:(id <SXBlueprintMarker>)arg1 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg2;
- (_Bool)validateMarker:(id <SXBlueprintMarker>)arg1 remainingMarkerCount:(unsigned long long)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;
- (unsigned long long)componentTraits;
@end

