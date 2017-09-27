//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPPasteboard.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSPPasteboardUIPasteboard : TSPPasteboard
{
    NSArray *_cachedPasteboardTypes;
    NSMutableDictionary *_pasteboardItemIndexCache;
    unsigned long long _pasteboardItemCount;
    long long _cachedChangeCount;
}

- (void).cxx_destruct;
- (oneway void)invalidate;
- (unsigned long long)pasteboardItemMaxSize;
- (long long)clearContents;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)stringsForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)addData:(id)arg1 forPasteboardType:(id)arg2;
- (void)addItems:(id)arg1 isSmartCopy:(_Bool)arg2;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (long long)numberOfItems;
- (id)valueForPasteboardType:(id)arg1;
- (id)stringForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (id)pasteboardTypes;
- (id)richTextStrings;
- (id)strings;
- (void)setString:(id)arg1;
- (id)string;
- (id)URLs;
- (id)propertyListForValue:(id)arg1;
- (void)updateCachedChangeCount;
- (void)reloadPasteboardItemIndexCacheIfNeeded;
- (void)invalidatePasteboardCache;
- (void)invalidatePasteboardCacheIfNeeded;
- (void)addPasteboardItemIndex:(unsigned long long)arg1 forType:(id)arg2;
- (void)addPasteboardItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addPasteboardItem:(id)arg1;
- (void)addPasteboardItemForObject:(id)arg1 type:(id)arg2;
- (id)initWithNativePasteboard:(id)arg1;
- (id)initWithUniquePasteboardName;
- (id)initWithPasteboardName:(id)arg1 create:(_Bool)arg2;
- (id)initWithGeneralPasteboard;

@end

