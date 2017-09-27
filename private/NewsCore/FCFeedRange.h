//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FCDateRange, FCFeedCursor;

@interface FCFeedRange : NSObject <NSCoding, NSCopying>
{
    FCFeedCursor *_top;
    FCFeedCursor *_bottom;
}

+ (id)feedRangeByMergingRange:(id)arg1 withRange:(id)arg2;
+ (id)feedRangeFromDateRange:(id)arg1;
+ (id)feedRangeFromDate:(id)arg1 toDate:(id)arg2;
+ (id)feedRangeWithMaxOrder:(unsigned long long)arg1 minOrder:(unsigned long long)arg2;
+ (id)feedRangeWithTop:(id)arg1 bottom:(id)arg2;
@property(copy, nonatomic) FCFeedCursor *bottom; // @synthesize bottom=_bottom;
@property(copy, nonatomic) FCFeedCursor *top; // @synthesize top=_top;
- (void).cxx_destruct;
- (id)description;
- (id)feedRangeByUnioningWithRange:(id)arg1;
- (id)feedRangeByIntersectingWithRange:(id)arg1;
- (_Bool)intersectsOrAdjoinsRange:(id)arg1;
- (_Bool)intersectsRange:(id)arg1;
- (_Bool)containsFeedRange:(id)arg1;
- (_Bool)containsCursor:(id)arg1;
- (_Bool)containsOrder:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) FCDateRange *dateRange;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool reachesBottomOfFeed;
@property(readonly, nonatomic) _Bool reachesTopOfFeed;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

