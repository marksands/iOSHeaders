//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PHAGraphServiceWorker;

@interface PHAPendingRequestReference : NSObject
{
    PHAGraphServiceWorker *_worker;
    NSString *_label;
}

@property(retain) NSString *label; // @synthesize label=_label;
@property __weak PHAGraphServiceWorker *worker; // @synthesize worker=_worker;
- (void).cxx_destruct;
- (void)dealloc;

@end

