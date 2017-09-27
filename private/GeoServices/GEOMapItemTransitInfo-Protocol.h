//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GEOMapItemTransitSchedule.h"

@class NSArray, NSString;

@protocol GEOMapItemTransitInfo <GEOMapItemTransitSchedule>
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool hasTransitIncidentComponent;
@property(readonly, nonatomic) _Bool isTransitIncidentsTTLExpired;
@property(readonly, nonatomic) NSArray *incidents;
@property(readonly, nonatomic) unsigned long long linesCount;
@property(readonly, nonatomic) NSArray *lines;
@property(readonly, nonatomic) unsigned long long systemsCount;
@property(readonly, nonatomic) NSArray *systems;
@property(readonly, nonatomic) NSArray *connections;
@property(readonly, nonatomic) NSArray *labelItems;
- (NSArray *)linesForSystem:(id <GEOTransitSystem>)arg1;
@end

