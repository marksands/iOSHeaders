//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPAbstractMutableLargeArraySegment.h>

__attribute__((visibility("hidden")))
@interface TSPMutableLargeLazyReferenceArraySegment : TSPAbstractMutableLargeArraySegment
{
}

- (void)loadFromMessage:(const struct LargeObjectArraySegment *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToMessage:(struct LargeObjectArraySegment *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)referredObjectAtIndex:(unsigned long long)arg1;
- (void)addReferredObject:(id)arg1;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1;

@end

