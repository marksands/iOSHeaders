//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable, TSPData, TSUWarning;

@protocol TSDImportExportDelegate <NSObject>
- (void)removeWarning:(TSUWarning *)arg1;
- (void)addWarning:(TSUWarning *)arg1;
- (NSArray *)warnings;

@optional
@property(readonly, nonatomic) _Bool isBrowsingVersions;
@property(readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property(readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
- (void)removeIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1;
- (void)replaceIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1 withNewMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg2;
- (void)addIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1 incompatibleData:(TSPData *)arg2 compatibilityLevel:(long long)arg3;
@end

