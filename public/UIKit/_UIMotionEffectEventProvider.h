//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEventProvider : NSObject
{
    id <_UIMotionEffectEventConsumer> _consumer;
}

@property id <_UIMotionEffectEventConsumer> consumer; // @synthesize consumer=_consumer;
- (double)slowUpdateIntervalForLogs;
- (double)fastUpdateIntervalForLogs;
- (_Bool)wantsSynchronizedUpdates;
- (_Bool)shouldLogEvents;
- (id)currentEvent;
- (void)setSlowUpdatesEnabled:(_Bool)arg1;
- (void)stopGeneratingEvents;
- (void)startGeneratingEvents;

@end

