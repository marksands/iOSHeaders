//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNObservable.h"

@interface CNObservable (CNAutocomplete)
- (id)networkObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5;
- (id)localObservableWithScheduler:(id)arg1 doOnTimeout:(CDUnknownBlockType)arg2;
- (id)localObservableWithScheduler:(id)arg1;
- (id)activityIndicatingObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2;
- (id)autocompleteTimeoutAfterDelay:(double)arg1 doOnTimeout:(CDUnknownBlockType)arg2 scheduler:(id)arg3;
@end

