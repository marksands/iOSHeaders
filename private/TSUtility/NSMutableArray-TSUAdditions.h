//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@interface NSMutableArray (TSUAdditions)
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInSet:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjects:(id)arg1;
- (id)pop_tsu;
- (void)push_tsu:(id)arg1;
- (id)tsu_dequeue;
- (void)tsu_enqueue:(id)arg1;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 withObject:(id)arg2 onObjectsFromArray:(id)arg3;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 onObjectsFromArray:(id)arg2;
@end

