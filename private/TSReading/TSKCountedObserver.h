//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSUWeakReference;

@interface TSKCountedObserver : NSObject
{
    TSUWeakReference *mWeakObserver;
    unsigned long long mCount;
}

- (unsigned long long)decrementCount;
- (unsigned long long)incrementCount;
- (id)observer;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;

@end
