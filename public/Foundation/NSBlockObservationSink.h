//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObservationSink.h>

__attribute__((visibility("hidden")))
@interface NSBlockObservationSink : NSObservationSink
{
    id _block;
    int _tag;
    id _observers;
}

- (void)dealloc;
- (id *)_observerStorage;
- (void)_receiveBox:(id)arg1;
- (id)initWithBlock:(id)arg1 tag:(int)arg2;

@end

