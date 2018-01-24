//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCOAddress.h>

@class TSURangeList;

__attribute__((visibility("hidden")))
@interface TSKCORangeAddress : TSKCOAddress
{
    TSURangeList *_rangeList;
}

@property(readonly, nonatomic) TSURangeList *rangeList; // @synthesize rangeList=_rangeList;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1 message:(struct Address *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Address *)arg2;
- (unsigned long long)totalLengthOfRanges;
- (struct _NSRange)onlyRange;
- (id)pathElement;
- (id)addressWithNewRangeList:(id)arg1;
- (id)addressWithNewRange:(struct _NSRange)arg1;
- (id)initWithParent:(id)arg1 location:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)initWithParent:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithParent:(id)arg1 rangeList:(id)arg2;

@end

