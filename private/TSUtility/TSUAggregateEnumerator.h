//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator
{
    NSMutableArray *_objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)arg1;
- (id)nextObject;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithObjects:(id)arg1;
- (id)initWithFirstObject:(id)arg1 argumentList:(struct __va_list_tag [1])arg2;

@end

