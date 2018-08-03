//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet, NSString;

@interface PGPeopleMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSString *_peopleUUID;
    NSSet *_peopleNodes;
    NSSet *_birthdayPersonUUIDs;
    long long _year;
    NSSet *_extraFeatures;
}

@property(nonatomic) NSSet *extraFeatures; // @synthesize extraFeatures=_extraFeatures;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(retain, nonatomic) NSSet *birthdayPersonUUIDs; // @synthesize birthdayPersonUUIDs=_birthdayPersonUUIDs;
@property(retain, nonatomic) NSSet *peopleNodes; // @synthesize peopleNodes=_peopleNodes;
@property(retain, nonatomic) NSString *peopleUUID; // @synthesize peopleUUID=_peopleUUID;
- (void).cxx_destruct;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (_Bool)_upcomingBirthdayWillCollideWithPotentialMemory:(id)arg1;
- (id)_potentialMemoriesForDryTesting;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_potentialMemoriesWithPeopleNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end

