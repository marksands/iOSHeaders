//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class TSULinkedPointerSetEntry;

@interface TSULinkedPointerSetEnumerator : NSEnumerator
{
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithFirstEntry:(id)arg1;

@end

