//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPAbstractMutableLargeDictionary.h>

__attribute__((visibility("hidden")))
@interface TSPMutableLargeStringToObjectDictionary : TSPAbstractMutableLargeDictionary
{
}

+ (Class)dictionarySegmentClass;
- (void)loadFromMessage:(const struct LargeStringToObjectDictionary *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToMessage:(struct LargeStringToObjectDictionary *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)convertObjectToSegmentObject:(id)arg1;
- (id)convertSegmentObjectToObject:(id)arg1;

@end

