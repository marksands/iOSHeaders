//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLCacheEntry : NSObject
{
    id _object;
    struct lruEntry *_entry;
}

- (struct lruEntry *)lruListEntry;
- (id)object;
- (void)setObject:(id)arg1;
- (void)dealloc;

@end

