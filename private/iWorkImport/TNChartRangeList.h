//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TNChartRangeList : NSObject
{
    UUIDData_5fbc143e _tableUID;
    struct TNChartRangeNode *_nodeList;
    struct TSCERangeCoordinate _unionRange;
    _Bool _unionRangeValid;
}

+ (id)rangeListWithRangeRef:(struct TSCERangeRef)arg1;
+ (id)rangeListWithTableUID:(const UUIDData_5fbc143e *)arg1 range:(struct TSCERangeCoordinate)arg2;
+ (id)rangeListWithTableUID:(const UUIDData_5fbc143e *)arg1;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
- (id).cxx_construct;
- (id)description;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (struct TSCERangeCoordinate)unionRange;
- (struct TSCERangeCoordinate)rangeStartingAfterCell:(struct TSUCellCoord)arg1 direction:(int)arg2;
- (struct TSCERangeCoordinate)rangeStartingAtCell:(struct TSUCellCoord)arg1 direction:(int)arg2;
- (_Bool)containsRange:(struct TSCERangeCoordinate)arg1;
- (_Bool)containsCell:(struct TSUCellCoord)arg1;
- (struct TSCERangeCoordinate)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRanges;
- (void)removeAllRanges;
- (void)addRange:(struct TSCERangeCoordinate)arg1 coalesceFlags:(int)arg2;
- (void)dealloc;
- (id)initWithTableUID:(const UUIDData_5fbc143e *)arg1 range:(struct TSCERangeCoordinate)arg2;
- (id)initWithTableUID:(const UUIDData_5fbc143e *)arg1;

@end

