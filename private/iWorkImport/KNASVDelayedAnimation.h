//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface KNASVDelayedAnimation : NSObject
{
    double _startTime;
    double _remainingDelay;
    id _target;
    SEL _selector;
    double _delay;
    id _object;
}

@property(nonatomic) __weak id object; // @synthesize object=_object;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)run;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;

@end

