//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AXMTimeProfiling : NSObject
{
    NSMutableDictionary *_timingTasks;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *timingTasks; // @synthesize timingTasks=_timingTasks;
- (void).cxx_destruct;
- (void)endTaskWithIdentifier:(id)arg1 message:(id)arg2;
- (void)startTaskWithIdentifier:(id)arg1 message:(id)arg2;
- (id)init;

@end

