//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet;

@interface PGSocialGroupMemoryGenerator : PGFeaturedMemoryGenerator
{
    long long _socialGroupID;
    long long _year;
    NSSet *_extraFeatures;
}

@property(nonatomic) NSSet *extraFeatures; // @synthesize extraFeatures=_extraFeatures;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long socialGroupID; // @synthesize socialGroupID=_socialGroupID;
- (id)_potentialMemoriesForDryTesting;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemories:(unsigned long long)arg1;
- (void)_potentialMemoriesWithSocialGroupNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end

