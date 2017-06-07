//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate, NSSet;

@interface PGCelebrationOverTimeMemoryGenerator : PGMemoryGenerator
{
    NSDate *_localDate;
    NSSet *_upcomingHolidayNames;
}

@property(retain, nonatomic) NSSet *upcomingHolidayNames; // @synthesize upcomingHolidayNames=_upcomingHolidayNames;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (id)_nameForHolidayMomentNodes:(id)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemories:(unsigned long long)arg1;

@end

