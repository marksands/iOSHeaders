//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSSet, NSString;

@interface CLSArchiveFile : NSManagedObject
{
}

- (id)description;
- (id)nonInputArchiveCluesWithPrefetchedPrimitives:(_Bool)arg1;
- (id)debugArchiveCluesWithPrefetchedPrimitives:(_Bool)arg1;
- (id)meaningArchiveCluesWithPrefetchedPrimitives:(_Bool)arg1;
- (id)outputArchiveCluesWithPrefetchedPrimitives:(_Bool)arg1;
- (id)inputArchiveCluesWithPrefetchedPrimitives:(_Bool)arg1;
- (id)cluesForKeys:(id)arg1 prefetchPrimitives:(_Bool)arg2;
- (id)_cluesForPredicate:(id)arg1 prefetchPrimitives:(_Bool)arg2;

// Remaining properties
@property(retain, nonatomic) NSSet *clues; // @dynamic clues;
@property(retain, nonatomic) NSString *contextURI; // @dynamic contextURI;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(retain, nonatomic) NSNumber *fixedLocation1Distance; // @dynamic fixedLocation1Distance;
@property(retain, nonatomic) NSNumber *fixedLocation2Distance; // @dynamic fixedLocation2Distance;
@property(retain, nonatomic) NSNumber *fixedLocation3Distance; // @dynamic fixedLocation3Distance;
@property(retain, nonatomic) NSDate *lastModificationDate; // @dynamic lastModificationDate;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

