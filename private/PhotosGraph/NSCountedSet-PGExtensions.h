//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCountedSet.h"

@interface NSCountedSet (PGExtensions)
- (unsigned long long)pg_countForRange:(struct _NSRange)arg1;
- (id)pg_sortedArrayByCountAscending:(_Bool)arg1;
- (id)pg_objectWithMinCount;
- (id)pg_objectWithMaxCount;
@end

