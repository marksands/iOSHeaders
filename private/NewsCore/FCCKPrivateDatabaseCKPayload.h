//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCCKPrivateDatabaseCKPayload : NSObject
{
    NSArray *_recordIDs;
    NSArray *_records;
    NSArray *_zoneIDs;
    NSArray *_zones;
    long long _destination;
}

@property(nonatomic) long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSArray *zones; // @synthesize zones=_zones;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void).cxx_destruct;

@end

