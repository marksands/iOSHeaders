//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject
{
    long long _day;
    NSMutableSet *_events;
}

@property(readonly, nonatomic) NSMutableSet *events; // @synthesize events=_events;
@property(nonatomic) long long day; // @synthesize day=_day;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithDay:(long long)arg1;

@end

