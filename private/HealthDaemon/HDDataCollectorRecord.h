//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDDataCollectorState;

@interface HDDataCollectorRecord : NSObject
{
    id <HDDataCollector> _collector;
    HDDataCollectorState *_state;
}

@property(retain, nonatomic) HDDataCollectorState *state; // @synthesize state=_state;
@property(retain, nonatomic) id <HDDataCollector> collector; // @synthesize collector=_collector;
- (void).cxx_destruct;
- (id)description;

@end

