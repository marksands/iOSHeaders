//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class HMHome;

@interface HFPresenceEventFormatter : NSFormatter
{
    unsigned long long _nameType;
    unsigned long long _style;
    HMHome *_home;
}

@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long nameType; // @synthesize nameType=_nameType;
- (void).cxx_destruct;
- (id)_formattedListForSelectedUsers:(id)arg1 inHome:(id)arg2;
- (id)stringForPresenceEventBuilder:(id)arg1;
- (id)stringForPresenceEvent:(id)arg1;
- (id)initWithHome:(id)arg1;

@end

